#include "Car_inf_cont.h"
#include <iostream>
using namespace std;

Car_inf_cont::~Car_inf_cont() {
    for (auto car : cars) {
        delete car;
    }
}

void Car_inf_cont::addCar() {
    string brand, owner, licensePlate, capType, capColour, engineType, technicalCondition;
    int manufactureYear;
    float engineVolume;

    cout << "Введіть інформацію про автомобіль:\n";
    cin.ignore(1000, '\n');
    cout << "Марка: ";
    getline(cin, brand);
    cout << "Власник: ";
    getline(cin, owner);
    cout << "Державний номер: ";
    cin >> licensePlate;
    cout << "Рік випуску: ";
    cin >> manufactureYear;
    cout << "Тип кузова: ";
    cin >> capType;
    cout << "Колір кузова: ";
    cin >> capColour;
    cout << "Об'єм двигуна: ";
    cin >> engineVolume;
    cout << "Тип двигуна: ";
    cin >> engineType;
    cout << "Технічний стан: ";
    cin >> technicalCondition;

    cars.push_back(new Car_inf(brand, owner, licensePlate, manufactureYear, capType, capColour, engineVolume, engineType, technicalCondition));
    cout << "Автомобіль додано!" << endl;
}

size_t Car_inf_cont::getCarCount() const {
    return cars.size();
}

void Car_inf_cont::removeCar() {
    if (cars.empty()) {
        cout << "Данні про автомобілі відсутні."<< endl;
        return;
    }
    size_t index;
    cout << "Введіть індекс автомобіля для видалення: ";
    cin >> index;
    if (index-- < cars.size()) {
        cars.erase(cars.begin() + index++);
        cout << "Автомобіль видалено."<< endl;
    } else {
        cout << "Некоректний індекс."<< endl;
    }
}

void Car_inf_cont::displayAllCars() const {
    if (cars.empty()) {
        cout << "Данні про автомобілі відсутні."<< endl;
        return;
    }

    cout << "Список автомобілів:\n";
    for (size_t i = 0; i < cars.size(); ++i) {
        cout << "Автомобіль #" << i+1 << ": ";
        cars[i]->quickInfo();
    }
}

void Car_inf_cont::displayCar() const {
    if (cars.empty()) {
        cout << "Данні про автомобілі відсутні."<< endl;
        return;
    }
    size_t index;
    cout << "Введіть індекс автомобіля для відображення: ";
    cin >> index;
    if (index-- < cars.size()) {
        cars[index--]->displayInfo();
    } else {
        cout << "Некоректний індекс." << endl;
    }
}


void Car_inf_cont::carRepair(){
    if (cars.empty()) {
        cout << "Данні про автомобілі відсутні."<< endl;
        return;
    }
    size_t index;
    cout << "Введіть індекс автомобіля, що ремонтувався: ";
    cin >> index;
    if (index-- < cars.size()) {
        cout << "Введіть рік ремонту: ";
        int year;
        cin >> year;
        cars[index--]->addRepairYear(year);
    } else {
        cout << "Некоректний індекс." << endl;
    }
    cout << "Рік ремонту додано." << endl;
}

