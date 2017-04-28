//
// Created by Dara Lim on 4/22/17.
//

#ifndef ITAK_DENIALOFSERVICEANALYZER_H
#define ITAK_DENIALOFSERVICEANALYZER_H
#include <string>

class DenialOfServiceAnalyzer {
private:
    std::string likelyAttackers;
    std::string possibleAttackers;
    std::string attackPeriods;
    std::string timeFrame;
public:
    DenialOfServiceAnalyzer();
    void run();

};


#endif //ITAK_DENIALOFSERVICEANALYZER_H
