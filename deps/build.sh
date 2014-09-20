#!/bin/sh
touch deps.jl
rm deps.jl
PKG_DIR=`julia -e 'println(Pkg.dir());'`

cat > deps.jl <<EOT
macro checked_lib(libname, path)
        (dlopen_e(path) == C_NULL) && error("Unable to load \n\n\$libname (\$path)\n\nPlease re-run Pkg.build(package), and restart Julia.")
        quote const \$(esc(libname)) = \$path end
    end
@checked_lib mylib "${PKG_DIR}/MyLib/deps/usr/lib/libmylib.so.1"
EOT

cd src/mylib/
make clean
make all
cd ../../
