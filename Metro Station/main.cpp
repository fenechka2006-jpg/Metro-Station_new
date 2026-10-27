#include <iostream>
#include <cassert>
#include <clocale>
#include <vector>

#include "Station.h"
#include "TransferStation.h"
#include "CrossPlatformStation.h"
#include "TrackSegment.h"
#include "Line.h"
#include "Metro.h"

void runTests() {
    Station st(1, "Лубянка", 1500.0);
    assert(st.getOrderNumber() == 1);
    assert(st.getName() == "Лубянка");
    assert(st.setOrderNumber(-5) == false);
    assert(st.setName("") == false);
    assert(st.updatePassengerFlow(-10) == false);
    assert(st.getOrderNumber() == 1);

    Station* s1 = new Station(2, "Обычная", 500);
    TransferStation* ts1 = new TransferStation(3, "Пересадочная", 800, { "Красная", "Синяя" });
    CrossPlatformStation* cps1 = new CrossPlatformStation("Кросс", 300, { "Зеленая" }, { {"Зеленая", 5} });

    Line* myLine = new Line("Сокольническая", false);
    myLine->addStation(s1);
    myLine->addStation(ts1);
    myLine->addStation(cps1);

    assert(myLine->getStations().size() == 3);
    assert(myLine->getStations().front()->getName() == "Обычная");

    
    Metro* myMetro = new Metro();
    myMetro->addLine(myLine);

    assert(myMetro->getLines().size() == 1);
    assert(myMetro->getLines()[0]->getLineName() == "Сокольническая");

    myMetro->addLine(nullptr);
    assert(myMetro->getLines().size() == 1); 

    myMetro->findShortestPath(s1, cps1);

    std::cout << "Все тесты успешно пройдены. Ошибок не найдено." << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    try {
        runTests();
    }
    catch (const std::exception& e) {
        std::cerr << "КРИТИЧЕСКАЯ ОШИБКА В ТЕСТАХ: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}