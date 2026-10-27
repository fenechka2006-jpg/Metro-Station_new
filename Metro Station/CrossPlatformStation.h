#pragma once
#include "TransferStation.h"
#include <utility>

class CrossPlatformStation : public TransferStation {
protected:
    std::vector<std::pair<std::string, int>> lineNumbers; //pairs: line + order number on line

public:
    CrossPlatformStation();
    CrossPlatformStation(std::string name, double passengerFlow,
        const std::vector<std::string>& lines,
        const std::vector<std::pair<std::string, int>>& numbers);

    void addLineNumber(const std::string& lineName, int stationNumber);

    const std::vector<std::pair<std::string, int>>& getLineNumbers() const;
};
