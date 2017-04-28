//
// Created by Dara Lim on 4/22/17.
//

#ifndef ITAK_PORTSCANANALYZER_H
#define ITAK_PORTSCANANALYZER_H
#include <string>

class PortScanAnalyzer {
private:
    std::string likelyAttackers;
    std::string possibleAttackers;
    std::string portCount;
public:
    PortScanAnalyzer();
    void run();

};


#endif //ITAK_PORTSCANANALYZER_H
