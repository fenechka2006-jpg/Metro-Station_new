#pragma once
#include "Line.h"
#include<vector>

class Metro {
private:
    std::vector<Line*> lines;

public:
    Metro() = default;
    ~Metro();

    Metro(const Metro&) = delete;
    Metro& operator=(const Metro&) = delete;

    void addLine(Line* line);

    const std::vector<Line*>& getLines() const;

    void printMetroInfo() const;

    void findShortestPath(Station* start, Station* end) const;
};
