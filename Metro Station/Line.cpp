#include "Line.h"
Line::Line() : lineName("") {}

Line::Line(std::string name, bool ring) : lineName(name), isRing(ring) {}

void Line::addStation(Station* st) {
    stations.push_back(st);
}

std::string Line::getLineName() const { return lineName; }
bool Line::getIsRing() const { return isRing; }
std::list<Station*> Line::getStations() const { return stations; }