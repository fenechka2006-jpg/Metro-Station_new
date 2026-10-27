#pragma once
#include "Station.h"
#include <vector>
class TransferStation : public Station {
protected:
    std::vector<std::string> transferLines; //list of lines, where transfer on the station exist

public:
    TransferStation();

    TransferStation(int orderNumber, std::string name, double passengerFlow, std::vector<std::string> lines);

    void addTransferLine(const std::string& lineName);

    std::vector<std::string> getTransferLines() const;
};
