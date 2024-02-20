#include <iostream>
#include "Management.h"

using namespace std;

Management::Management(string n, int p) : name(n), pin(p) {}

bool validateManagement(const vector<Management>& managements, const string& name, int pin) {
    for (const auto& Management : managements) {
        if (Management.name == name && Management.pin == pin) {
            return true;
        }
    }
    return false;
}

void ManagementFunction(vector<Management>& managements, const string& name, int pin) {
    managements.emplace_back(name, pin);
    if (validateManagement(managements, name, pin)) {
        cout <<"Management validated successfully." << endl;
    } else {
        cout << "Invalid name or PIN." << endl;
    }
}
