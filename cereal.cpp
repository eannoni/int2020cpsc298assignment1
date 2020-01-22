#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

    const float TON_IN_OUNCES = 35273.92;

    float cerealOunces = 0.0;
    float cerealTons = 0.0;

    float boxesPerTon = 0.0;

    cout << "Enter weight of a package of breakfast cereal in ounces: ";
    cin >> cerealOunces;

    cerealTons = cerealOunces / TON_IN_OUNCES;

    cout << "One cereal box is " << cerealTons << " tons." << endl;

    // calculates how many boxes are in one metric ton
    boxesPerTon = 1 / cerealTons;

    cout << "1 ton of cereal is equal to " << boxesPerTon << " boxes." << endl;

    return 0;

}
