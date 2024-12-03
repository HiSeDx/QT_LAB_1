#include <iostream>
#include "Car_inf.h"
using namespace std;

int main() {


    Car_inf car1("MG", "Марієнко Олександр", "CA3443PP", 2023, "Кросовер", "Білий", 1.8, "бензин", "Відмінний");
    car1.addRepairYear(2024);
    car1.displayInfo();

    cout << endl;

    Car_inf* car2 = new Car_inf("Renault", "Марієнко Тетяна", "CA1511KC", 2001, "Фургон", "Білий", 2.2, "дизель", "Задовільний");
    car2->changeTechnicalCondition("Потребує ремонту");
    car2->addRepairYear(2005);
    car2->addRepairYear(2010);
    car2->addRepairYear(2020);
    car2->displayInfo();

    delete car2;

    return 0;
}
