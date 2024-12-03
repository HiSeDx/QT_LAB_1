#include "Car_inf.h"
#include <iostream>
using namespace std;


Car_inf::Car_inf(const string& brand, const string& owner, const string& licensePlate, int manufactureYear, const string& capType, const string& capColour,
             float engineVolume, const string& engineType, const string& technicalCondition)
    : brand(brand), owner(owner), licensePlate(licensePlate), manufactureYear(manufactureYear),
    capType(capType), capColour(capColour), engineVolume(engineVolume), engineType(engineType), technicalCondition(technicalCondition) {}

void Car_inf::changeTechnicalCondition(const string& newCondition) {
    technicalCondition = newCondition;
}

void Car_inf::addRepairYear(int year) {
    repairYears.push_back(year);
}


void Car_inf::displayInfo() const {
    cout << "Марка: " << brand << endl;
    cout << "Власник: " << owner << endl;
    cout << "Державний номер: " << licensePlate << endl;
    cout << "Рік випуску: " << manufactureYear << endl;
    cout << "Характеристики: " << endl;
    cout << '\t' << "Тип кузова: " << capType << endl;
    cout << '\t' << "Колір кузова: " << capColour << endl;
    cout << '\t' << "Об'єм двигуна: " << engineVolume << " " << engineType << endl;
    cout << "Технічний стан: " << technicalCondition << endl;
    cout << "Роки ремонту: ";
    for (int year : repairYears) {
        cout << year << " ";
    }
    cout << endl;
}
