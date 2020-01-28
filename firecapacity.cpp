#include <iostream>

using namespace std;

int main(int argc, char ** argv) {
    int roomCapacity = 0;
    int numAttendees = 0;
    int difference = 0;

    cout << "Enter the maximum room capacity: ";
    cin >> roomCapacity;
    cout << "Enter the amount of people attending: ";
    cin >> numAttendees;

    // if capacity not exceeded
    if(numAttendees <= roomCapacity) {
        cout << "Meeting is legal." << endl;

        difference = roomCapacity - numAttendees;
        cout << "There is room for " << difference << " more people." << endl;
    }
    // if capacity exceeded
    else {
        cout << "Meeting is illegal due to fire regulations." << endl;

        difference = numAttendees - roomCapacity;
        cout << "Meeting must have " << difference << " less people in order to proceed." << endl;
    }

    return 0;
}
