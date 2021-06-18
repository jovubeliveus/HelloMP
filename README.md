# HelloMP

Yet another Hello World Program

## Description and Purpose

This O(1)-line code demonstrates parallelization with OpenMP

## Contents of this Project

```
README    - this file
Makefile  - Makefile tested for macOS
Hello.c   - parallelized "Hello World" C-program
```

## What do do here

**First**, build the executable by typing

```
%> make
```

If this fails, you have to adjust your path and settings, however,
I don't know how...

**Second**, set up the number of threads (e.g. to four)

```
%> export OMP_NUM_THREADS=4
```

**Third**, run the program

```
%> Hello
```

(c) 2021, Jörn Behrens (joern.behrens@uni-hamburg.de)
