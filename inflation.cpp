#include <iostream>

using namespace std;

int main(int argc, char ** argv) {

    double currItemCost = 0.0;
    int years = 0;
    double infPercentage = 0.0;
    double infRate = 0.0;
    double newCost = 0.0;

    // get cost of item
    cout << "Enter current item cost: ";
    cin >> currItemCost;

    // get years from now when item will be purchased
    cout << "Enter number of years until item will be purchased: ";
    cin >> years;

    // get rate of inflation as percentage
    cout << "Enter rate of inflation (percentage): ";
    cin >> infPercentage;
    //convert inflation percentage to rate
    infRate = infPercentage * 0.01;

    // calculate cost
    newCost = currItemCost;

    for(int i = 0; i < years; ++i) {
        newCost = newCost * (1 + infRate);
    }

    // output estimated cost
    cout << "Approximate cost of item in " << years << " years is $" << newCost << endl;

}
