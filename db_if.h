#ifndef _DB_IF_
#define _DB_IF_

class DB_Interface {
 public:
    virtual void write_to_db(int x) = 0;
};

#endif
