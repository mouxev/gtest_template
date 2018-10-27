// This is a sample cde to test the program outside of the gtest aka normal run
// to compile: g++ -I. db_if.h db_impl.h calc.h main.cpp -o program

#include "calc.h"
#include "db_if.h"
#include "db_impl.h"

int main(int argc, char **argv) {
    DB_Impl db;
    Calc t(&db);
    t.add(1,2);
    t.add_with_persistance(1,2);

    return 0;
}
