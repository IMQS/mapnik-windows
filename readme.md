Prebuilt Mapnik Binaries for Windows

How to build this?

* `git clone https://github.com/mapbox/windows-builds`
* `cd windows-builds`
* `git checkout 785e8e02eef26db64cbe8a22d667e0e34e4a601c`
* `settings "FASTBUILD=0" "MAPNIKBRANCH=v3.0.x"` At time of going to press, v3.0.x was revision 7ce68e2c08434d6581482ec7fa59c00de4058f26
* `copy patches\boost-1_61.diff patches\boost-1_62.diff`
* `scripts\build` - You may get an ICE (Internal Compiler Error). If so, just run `scripts\build` again.
* Packaged output is inside a zip file in `bin`

This package was built with MSVC 2015, Update 3.