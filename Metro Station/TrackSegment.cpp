#include "TrackSegment.h"

TrackSegment::TrackSegment() = default;

TrackSegment::TrackSegment(Station* s1, Station* s2, int time) {
    if (s1 == nullptr || s2 == nullptr) {
        std::cout << "ѕерегон должен св€зывать две станции" << std::endl;
    }
    else {
        station1 = s1;
        station2 = s2;
    }
    if (time <= 0) {
        std::cout << "¬рем€ прохождени€ перегона должно быть положительным" << std::endl;
    }
    else {
        travelTime = time;
    }
}

Station* TrackSegment::getStation1() const { return station1; }
Station* TrackSegment::getStation2() const { return station2; }
int TrackSegment::getTravelTime() const { return travelTime; }

