#include "TransferStation.h"

TransferStation::TransferStation() : Station() {}

TransferStation::TransferStation(int orderNumber, std::string name, double passengerFlow, std::vector<std::string> lines): Station(orderNumber, name, passengerFlow), transferLines(lines) {}

void TransferStation::addTransferLine(const std::string& lineName) {
    transferLines.push_back(lineName);
}

std::vector<std::string> TransferStation::getTransferLines() const {
    return transferLines;
}
