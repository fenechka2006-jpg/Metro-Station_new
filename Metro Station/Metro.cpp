#include "Metro.h"
Metro::~Metro() {
    for (auto line : lines) {
        delete line;
    }
    lines.clear();
}

void Metro::addLine(Line* line) {
    if (line != nullptr) {
        lines.push_back(line);
    }
}

const std::vector<Line*>& Metro::getLines() const {
    return lines;
}

void Metro::printMetroInfo() const {
    std::cout << "=== Схема метрополитена ===" << std::endl;

    for (const auto& line : lines) {
        std::cout << "Линия: " << line->getLineName();
        if (line->getIsRing()) {
            std::cout << " (кольцевая)";
        }
        std::cout << std::endl;

        for (const auto& station : line->getStations()) {
            std::cout << "  - Станция: " << station->getName()
                << " (Главный номер: " << station->getOrderNumber() << ")" << std::endl;
        }
    }
}

void Metro::findShortestPath(Station* start, Station* end) const {
    if (!start || !end) return;
}