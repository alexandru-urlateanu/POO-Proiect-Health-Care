#include <iostream>
#include "HealthPackage.h"

using namespace std;

int main() {
    HealthPackage empty;
//    HealthPackage client(23, true, 3, false);
//    HealthPackage happyClient(47, false, 3, false);
//    HealthPackage curiousClient(77, false, 12, true);
//    HealthPackage clients[] = {client, happyClient, curiousClient};
//
//    for (HealthPackage package : clients) {
//        cout << package.computePrice()<<" ";
//    }
//    cout<<endl;

    cin >> empty;
    cout << empty;
    cout << "va avea pretul de "<<empty.computePrice()<<" lei.";

    return 0;
}


