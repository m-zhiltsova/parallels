## just run one of these commands in current directory

#### for float
    make USEFLOAT=true
    ./sum_of_sin
output: Sum (float): -0.0277862

#### for double
    make USEDOUBLE=true
    ./sum_of_sin
output: Sum (double): 4.89582e-11

#### default (float)
    make
    ./sum_of_sin
output: Sum (default float): -0.0277862


#### this command causes error
    make USEFLOAT=true USEDOUBLE=true
    ./sum_of_sin
output: Makefile:6: *** Cannot set both USE_FLOAT and USE_DOUBLE to true.  Stop.

## to run, use:

#####
    ./sum_of_sin

## to clean, just run

#####
    make clean
