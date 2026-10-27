#pragma once
#include <iostream>
#include <string>
class Station {
	int orderNumber{ 0 };
	std::string name{ "" };
	double passengerFlow{ 0.0 };
public:

	// declaration constructures
	Station();
	Station(int orderNumber, std::string name, double passengerFlow);

	//methods
	bool setOrderNumber(int new_number);
	bool setName(std::string new_name);
	bool updatePassengerFlow(double new_flow);
	int getOrderNumber() const;
	std::string getName() const;
	double getPassengerFlow() const;
	bool operator<(const Station& other) const;
	bool operator==(const Station& other) const;
}; 