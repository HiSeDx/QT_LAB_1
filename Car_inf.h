#ifndef CAR_INF_H
#define CAR_INF_H

#include <string>
#include <vector>
using namespace std;

class Car_inf
{
private:
    string brand;
    string owner;
    string licensePlate;
    int manufactureYear;
    string capType;
    string capColour;
    float engineVolume;
    string engineType;
    string technicalCondition;
    vector<int> repairYears;

public:
    Car_inf(const string& brand, const string& owner, const string& licensePlate, int manufactureYear, const string& capType, const string& capColour,
        float engineVolume, const string& engineType, const string& technicalCondition);

    void changeTechnicalCondition(const string& newCondition);

    void addRepairYear(int year);

    void displayInfo() const;
};

#endif // CAR_INF_H
