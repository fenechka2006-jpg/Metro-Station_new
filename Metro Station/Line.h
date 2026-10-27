#pragma once
#include "Station.h"
#include<list>
class Line {
private:
    std::string lineName;
    std::list<Station*> stations;
    bool isRing{ false };

public:
    Line();

    Line(std::string name, bool ring);

    void addStation(Station* st);

    std::string getLineName() const;
    bool getIsRing() const;
    std::list<Station*> getStations() const;
};

