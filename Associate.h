#ifndef ASSOCIATE_H
#define ASSOCIATE_H

#include <vector>
#include <string>

using namespace std;

struct Associate {
    string name;
    int pin;
    Associate(string n, int p);
};

bool validateAssociate(const vector<Associate>& associates, const string& name, int pin);
void AssociateFunction(vector<Associate>& associates, const string& name, int pin);

#endif // ASSOCIATE_H
