#ifndef PROIECT_01_POO_HEALTHPACKAGE_H
#define PROIECT_01_POO_HEALTHPACKAGE_H

#include <iostream>
using namespace std;

class HealthPackage {
private:
    int age;
    bool usedService;
    int monthsLeft;
    bool pensionar;
public:
    HealthPackage();
    HealthPackage(int age, bool usedService, int monthsLeft, bool pensionar);
    HealthPackage(const HealthPackage &aPackage);

    int getAge() const;
    void setAge(int age);

    int getUsedService() const;
    void setUsedService(int usedService);

    int getMonthsLeft() const;
    void setMonthsLeft(int monthsLeft);

    int getPensionar() const;
    void setPensionar(int pensionar);

    friend istream &operator>>(istream &is, HealthPackage &aPackage);
    friend ostream &operator<<(ostream &os, const HealthPackage &aPackage);
    HealthPackage operator= (HealthPackage);

    float computePrice ();
};

#endif //PROIECT_01_POO_HEALTHPACKAGE_H
