//
// Created by Dara Lim on 4/22/17.
//

#ifndef ITAK_CONFIGURATION_H
#define ITAK_CONFIGURATION_H
#include <string>

class Configuration {

private:
    int numOfConfig;
    std::string nameOfConfig;
    std::string valueOfConfig;

public:
    Configuration();
    std::string getString(){return getString();};
    int getInteger(){return getInteger();};
    double getDouble(){return getDouble();};

};


#endif //ITAK_CONFIGURATION_H
