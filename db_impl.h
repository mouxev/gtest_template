#ifndef _DB_IMPL_H_
#define _DB_IMPL_H_

#include "db_if.h"
#include <iostream>

class DB_Impl: public DB_Interface {
 public:
    DB_Impl() {
    }
    void write_to_db(int x) {
        std::cout << "Write to DB completed... value: " << x << std::endl;
    }
};

#endif
