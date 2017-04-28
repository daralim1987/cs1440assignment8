//
// Created by Dara Lim on 4/22/17.
//

#ifndef ITAK_RESULTSET_H
#define ITAK_RESULTSET_H
#include <string>

class ResultSet {

private:
    std::string key;
    std::string value;
public:
    ResultSet();
    void print();
};


#endif //ITAK_RESULTSET_H
