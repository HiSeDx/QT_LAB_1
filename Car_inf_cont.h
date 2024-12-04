#ifndef CAR_INF_CONT_H
#define CAR_INF_CONT_H

#include "Car_inf.h"
#include <vector>
using namespace std;

class Car_inf_cont {
private:
    vector<Car_inf*> cars;

public:

    ~Car_inf_cont();

    size_t getCarCount() const;

    void addCar();

    void removeCar();

    void displayAllCars() const;

    void displayCar() const;

    void carRepair();
};

#endif // CAR_INF_CONT_H
