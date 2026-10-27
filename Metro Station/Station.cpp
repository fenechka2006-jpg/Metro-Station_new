#include "Station.h"

// definition constructions 
Station::Station() = default;
Station::Station(int orderNumber, std::string name, double passengerFlow) {
    if (!setOrderNumber(orderNumber)) {
        std::cout << "Некорректный номер" << std::endl;
    }
    if (!setName(name)) {
        std::cout << "Некорректное название" << std::endl;
    }
    if (!updatePassengerFlow(passengerFlow)) {
        std::cout << "Некорректный пассажиропоток" << std::endl;
    }
}

// def methods
bool Station::setOrderNumber(int new_number) {
    if (new_number < 1) {
        std::cout << "Номер станции должен быть >= 1" << std::endl;
        return false;
    }
    orderNumber = new_number;
    return true;
}
bool Station::setName(std::string new_name) {
    if (new_name.empty()) {
        std::cout << "Название станции не может быть пустым" << std::endl;
        return false;
    }
    name = new_name;
    return true;
}
bool Station::updatePassengerFlow(double new_flow) {
    if (new_flow < 0) {
        std::cout << "Пассажиропоток не может быть отрицательным" << std::endl;
        return false;
    }
    double oldFlow = passengerFlow;
    passengerFlow = new_flow;
    std::cout << "Станция '" << name << "': пассажиропоток изменён с "
        << oldFlow << " до " << new_flow << " чел/день" << std::endl;
    return true;
}
int Station::getOrderNumber() const {
    return orderNumber;
}
std::string Station::getName() const {
    return name;
}
double Station::getPassengerFlow() const {
    return passengerFlow;
}
bool Station::operator<(const Station& other) const {
    return orderNumber < other.orderNumber;
}
bool Station::operator==(const Station& other) const {
    return orderNumber == other.orderNumber;
}