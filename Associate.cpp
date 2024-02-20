#include <iostream>
#include "Associate.h"

using namespace std;

Associate::Associate(string n, int p) : name(n), pin(p) {}

bool validateAssociate(const vector<Associate>& associates, const string& name, int pin) {
    for (const auto& associate : associates) {
        if (associate.name == name && associate.pin == pin) {
            return true;
        }
    }
    return false;
}

void AssociateFunction(vector<Associate>& associates, const string& name, int pin) {
    associates.emplace_back(name, pin);
    if (validateAssociate(associates, name, pin)) {
        cout << "Associate validated successfully." << endl;
    } else {
        cout << "Invalid name or PIN." << endl;
    }
}
