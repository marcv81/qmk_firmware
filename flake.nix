{
  description = "QMK Firmware development environment";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = { self, nixpkgs }:
    let
      pkgs = nixpkgs.legacyPackages."x86_64-linux";
    in
    {
      devShells."x86_64-linux".default = pkgs.mkShell {
        packages = [
          (pkgs.python3.withPackages (ps: [
            ps.argcomplete
            ps."dotty-dict"
            ps.hid
            ps.hjson
            ps.jsonschema
            ps.milc
            ps.pillow
            ps.pygments
            ps.pyserial
            ps.pyusb
          ]))
          pkgs.gcc-arm-embedded
        ];
        shellHook = ''
          export PATH="$PWD/bin:$PATH"
        '';
      };
    };
}
