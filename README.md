# GTest and GMock

Very basic example...

## List of files:

calc.h          - this is where the logic happens
tests.cpp       - invokes Calc class GTest way

db_if.h         - persistance class interface. Persistance class is pure virtual
db_impl.h       - persistance class implementaion. Not called from GTest
db_mock.h       - persistance class mock. This is a mock method for GTest/GMock

CMakeLists.txt  - cmake file for gtest
main.cpp        - driver program

## Usage

To compile and run GTest say:

```
cmake CMakeLists
make
./runTests
```

To compile and run driver program say:

```
g++ -I. db_if.h db_impl.h calc.h main.cpp -o program
./program
``` 

Thank you
