## to use, just run
#### for float
    mkdir build
    cd build
    cmake -DUSE_FLOAT=ON ..
    make
    cd ..
    ./sum_of_sin
output: Sum (float): -0.0277862

#### for double
    mkdir build
    cd build
    cmake -DUSE_DOUBLE=ON ..
    make
    cd ..
    ./sum_of_sin
output: Sum (double): 4.89582e-11

#### default (float)
    mkdir build
    cd build
    cmake ..
    make
    cd ..
    ./sum_of_sin
output: Sum (default float): -0.0277862

#### if you use both float and double, it causes mistake
    mkdir build
    cd build
    cmake -DUSE_DOUBLE=ON -DUSE_FLOAT=ON ..
##### or
    mkdir build
    cd build
    cmake -DUSE_FLOAT=ON -DUSE_DOUBLE=ON ..
output: CMake Error at CMakeLists.txt:14 (message):
        Cannot set both USE_DOUBLE and USE_FLOAT to ON
