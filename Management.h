#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <vector>
#include <string>

using namespace std;

struct Management {
    string name;
    int pin;
    Management(string n, int p);
};

bool validateManagement(const vector<Management>& managements, const string& name, int pin);
void ManagementFunction(vector<Management>& managements, const string& name, int pin);

#endif // MANAGEMENT_H
