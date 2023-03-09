#include "HealthPackage.h"

HealthPackage::HealthPackage() {
    this->age = 0;
    this->usedService = false;
    this->monthsLeft = 0;
    this->pensionar = false;
}

HealthPackage::HealthPackage(int age, bool usedService, int monthsLeft, bool pensionar) : age(age), usedService(usedService), monthsLeft(monthsLeft), pensionar(pensionar) {}

HealthPackage::HealthPackage(const HealthPackage &aPackage){
    age = aPackage.age;
    usedService = aPackage.usedService;
    monthsLeft = aPackage.monthsLeft;
    pensionar = aPackage.pensionar;
}

int HealthPackage::getAge() const {
    return age;
}

void HealthPackage::setAge(int age) {
    HealthPackage::age = age;
}

int HealthPackage::getUsedService() const {
    return usedService;
}

void HealthPackage::setUsedService(int usedService) {
    HealthPackage::usedService = usedService;
}

int HealthPackage::getMonthsLeft() const {
    return monthsLeft;
}

void HealthPackage::setMonthsLeft(int monthsLeft) {
    HealthPackage::monthsLeft = monthsLeft;
}

int HealthPackage::getPensionar() const {
    return pensionar;
}

void HealthPackage::setPensionar(int pensionar) {
    HealthPackage::pensionar = pensionar;
}

istream &operator>>(istream &is, HealthPackage &aPackage) {
    cout<<"Varsta clientului:";
    is >> aPackage.age;

    cout<<"Client recurent? (1 - DA / 0 - NU)";
    is >> aPackage.usedService;

    cout<<"Valabilitatea pachetului (nr. de luni):";
    is >> aPackage.monthsLeft;

    cout << "Clientul este pensionar? (1 - DA / 0 - NU)";
    is >> aPackage.pensionar;

    return is;
}

ostream &operator<<(ostream &os, const HealthPackage &aPackage) {
    os << "\nPentru un client in varsta de "<<aPackage.age<<" ani, ";

    if(aPackage.usedService)
        os << "recurent, ";
    else os << "care nu a mai folosit serviciul, ";

    if(aPackage.pensionar)
        os<< "client pensionar, ";

    if(aPackage.monthsLeft == 1) os << "un pachet lunar ";
    else os << "un pachet cu durata de " <<aPackage.monthsLeft<< " luni ";

    return os;
}

HealthPackage HealthPackage::operator=(HealthPackage aPackage) {
    this->age = aPackage.age;
    this->usedService = aPackage.usedService;
    this->monthsLeft = aPackage.monthsLeft;
    this->pensionar = aPackage.pensionar;
    return *this;
}

float HealthPackage::computePrice()
{
    float basePrice;
    float price;
    if (monthsLeft == 1) basePrice = 300;
    else if (monthsLeft == 3) basePrice = 790.99;
    else if (monthsLeft == 12) basePrice = 2900;
    if(pensionar || age > 50) {
        if (!usedService) price = basePrice * 0.65;
        else price = basePrice * 0.55;
    }
    else {
        if (age < 16)
        {
            if (!usedService) price = 0;
            else price = basePrice * 0.75;
        }
        else if (age >= 16 && age <= 25)
        {
            if (!usedService) price = basePrice * 0.9;
            else price = basePrice * 0.8;
        }
        else if (age > 25 && age <= 50)
        {
            if (!usedService) price = basePrice * 0.95;
            else price = basePrice * 0.85;
        }
    }
    return price;
}








