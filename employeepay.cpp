#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    // unchanging rates and charges
    const double RATE_PER_HOUR = 16.0;
    const double STD_HOURS = 40.0;
    const double OVERTIME_RATE = RATE_PER_HOUR * 1.5;
    const double SS_TAX_RATE = 0.06;
    const double FI_TAX_RATE = 0.14;
    const double SI_TAX_RATE = 0.05;
    const double MED_INS_FEE = 10.0;

    double totalHours = 0.0;
    double normalHours = 0.0;
    double extraHours = 0.0;

    double grossPay = 0.0;
    double ssTax = 0.0;
    double fiTax = 0.0;
    double siTax = 0.0;
    double takeHomePay = 0.0;

    cout << "Enter total hours worked this week: ";
    cin >> totalHours;

    // calculates how many normal hours vs. extra hours are worked
    if(totalHours > STD_HOURS) {
        extraHours = totalHours - STD_HOURS;
        normalHours = STD_HOURS;
    }
    else {
        normalHours = totalHours;
    }

    // calculates initial pay from the regular and extra hour rates
    grossPay = (normalHours * RATE_PER_HOUR) + (extraHours * OVERTIME_RATE);

    cout << "Gross pay: $" << grossPay << endl;

    // assigns values to tax dollar amounts from the tax rates
    ssTax = grossPay * SS_TAX_RATE;
    fiTax = grossPay * FI_TAX_RATE;
    siTax = grossPay * SI_TAX_RATE;

    cout << "Social Security Tax: - $" << ssTax << endl;
    cout << "Federal Income Tax: - $" << fiTax << endl;
    cout << "State Income Tax: - $" << siTax << endl;
    cout << "Medical Insurance Fee: - $" << MED_INS_FEE << endl;

    // calculates final pay with tax and fee deductions
    takeHomePay = grossPay - ssTax - fiTax - MED_INS_FEE;

    cout << "---------------------" << endl;
    cout << "Take-Home Pay: $" << takeHomePay << endl;


}
