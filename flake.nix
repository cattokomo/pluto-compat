{
  description = "Allow compatibility with Pluto API for Lua 5.4 native modules";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
    flake-compat.url = "github:edolstra/flake-compat";
    plutolang = "github:
  };

  outputs = { self, nixpkgs, ... }: {

    packages.x86_64-linux.pluto-compat =
      with import nixpkgs { system = "x86_64-linux"; };
      stdenv.mkDerivation {
        name = "pluto-compat";
        src = self;
        nativeBuildInputs = [ just ];
        buildInputs = [ gcc glibc plutolang ];
        buildPhase = ''
          just generate ${plutolang.out}/include ${plutolang.out}/lib/libpluto.so
        '';
        checkPhase = ''
          cc -fPIC -shared $NIX_CFLAGS_COMPILE -I. -o foo.so examples/foo.c
          cc -fPIC -shared $NIX_CFLAGS_COMPILE -I. -o bar.so examples/bar.c
          pluto -lfoo -e "assert(foo and foo == 'foo')"
          pluto -lbar -e "assert(bar and type(bar) == 'function' and bar() == 'bar')"
        '';
        installPhase = ''
          install -Dm644 -t $out/include pluto-compat.h
        '';
        shellHook = ''
          export CFLAGS="$NIX_CFLAGS_COMPILE -I${plutolang.out}"
        '';
      };

    packages.x86_64-linux.default = self.packages.x86_64-linux.pluto-compat;
  };
}
