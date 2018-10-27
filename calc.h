#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "db_if.h"

class Calc {
 public:
    DB_Interface *m_db;
    Calc(DB_Interface *db) {
        m_db = db;
    };

    int add(int a, int b) {
        int result = a + b;
        return result;
    };

    int add_with_persistance(int a, int b) {
        int result = a + b;
        m_db->write_to_db(result);
        return result;
    };
};

#endif
