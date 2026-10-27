#include "Station.h"

class Transfer {
	Station* station1{ nullptr };
	Station* station2{ nullptr };
	int transferTime{ 0 };
	double passengerFlow{ 0.0 }; 
public:
	Transfer() = default;
	Transfer(Station* s1, Station* s2, int time, double flow) {
		station1 = s1;
		station2 = s2;
		if (time > 0) transferTime = time;
		if (flow >= 0) passengerFlow = flow;
	}
	Station* getStation1() const { return station1; }
	Station* getStation2() const { return station2; }
	int getTransferTime() const { return transferTime; }
	double getPassengerFlow() const { return passengerFlow; }
};