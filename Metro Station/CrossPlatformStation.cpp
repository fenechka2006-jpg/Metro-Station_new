#include "CrossPlatformStation.h"

CrossPlatformStation::CrossPlatformStation()
    : TransferStation() {}

CrossPlatformStation::CrossPlatformStation(std::string name, double passengerFlow,
    const std::vector<std::string>& lines,
    const std::vector<std::pair<std::string, int>>& numbers): TransferStation(0, name, passengerFlow, lines),
    lineNumbers(numbers) {}

void CrossPlatformStation::addLineNumber(const std::string& lineName, int stationNumber) {
    lineNumbers.push_back(std::make_pair(lineName, stationNumber));
}

const std::vector<std::pair<std::string, int>>& CrossPlatformStation::getLineNumbers() const {
    return lineNumbers;
}