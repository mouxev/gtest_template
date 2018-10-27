#ifndef _DB_MOCK_
#define _DB_MOCK_

#include "db_if.h"
#include "gmock/gmock.h"

class DB_Mock: public DB_Interface {
 public:
    DB_Mock() {}
    MOCK_METHOD1(write_to_db, void(int x));
};

#endif
