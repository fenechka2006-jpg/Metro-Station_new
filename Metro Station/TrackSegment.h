#pragma once
#include "Station.h"

class TrackSegment {
private:
    Station* station1{ nullptr };
    Station* station2{ nullptr };
    int travelTime{ 0 };

public:
    TrackSegment();

    TrackSegment(Station* s1, Station* s2, int time);

    Station* getStation1() const;
    Station* getStation2() const;
    int getTravelTime() const;
};
