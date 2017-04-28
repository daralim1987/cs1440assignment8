//
// Created by Dara Lim on 4/22/17.
//

#ifndef ITAK_ANALYZER_H
#define ITAK_ANALYZER_H
#include<string>

class Analyzer {


private:
    std::string inputStream;

public:
    Analyzer(std::string inputStream);
    void run(std::string &inputStream);


};


#endif //ITAK_ANALYZER_H
