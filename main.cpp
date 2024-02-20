#include <iostream>
#include "Associate.h"
#include "Management.h"

using namespace std;

char Selection{};
string name;
vector<Associate> associates;
vector<Management> managements;

string newName;
int newPin;

string nameToCheck;
int pinToCheck;

int main(){
    
    managements.emplace_back("Erasmus Walmart", 1581);
    managements.emplace_back("Rosana Coach", 1582);
    associates.emplace_back("John Doe", 1234);
    associates.emplace_back("Jane Smith", 5678);
    //AssociateFunction(associates, "Alice", 4321);
    
    do {cout <<"\n------My Walmart Menu------\n";  
        cout <<"1.Clock In\n";
        cout <<"2.Going To break\n";
        cout <<"3.Back From Meal\n";
        cout <<"4.Clock Out\n";
        cout <<"5.Sign Up\n";
        cout <<"Q.To Quit\n";
        cout <<"\nPlease select from the menu above: ";
        cin >> Selection;
        cout << "\n";
        
        if (Selection == '1'){
                cout << "Enter name to validate: ";
                cin.ignore(); // Clearing the newline character from the input buffer
                getline(cin, nameToCheck);
                cout << "Enter PIN to validate: ";
                cin >> pinToCheck;

                bool isValid = validateAssociate(associates, nameToCheck, pinToCheck) || validateManagement(managements, nameToCheck, pinToCheck);
    
                if (isValid) {
                cout << "Associate validated successfully." << endl;
                cout <<"Hey "<< nameToCheck <<", Your Clock In was successful!\n";
                } else {
                cout << "Invalid name or PIN." << endl;
                }
            } 
            
        if (Selection == '2'){
            string time;
            cout <<"Please what time are you returning from break? ";
            cin >> time;
            cout <<"Thank you for letting us know\n";
            cout <<"Have a good break "<< nameToCheck << "!\n"; 
            } 
        
        if (Selection == '3'){
            cout <<"Enjoy your work time, " << nameToCheck << "!\n"; 
            } 
            
        if (Selection == '4'){
            cout <<"Your punch out was successful!\n";
            cout << name << nameToCheck <<"!, thank you for making Walmart a great place!\n";

            break;
            } 
            
         if (Selection == '5'){
            cout <<"Select from the positions below!\n";
            cout <<"1. Management Position!\n";
            cout <<"2. Associate Position!\n";
            cout <<"Please select the choice of position: ";
            cin >> Selection;
            if (Selection == '1'){
                
                cout << "Please enter new applicant's name: ";
                cin.ignore(); // Clearing the newline character from the input buffer
                getline(cin, newName);
                cout << "Enter " << newName << "'s PIN: ";
                cin >> newPin;

                // Adding the new associate
                managements.emplace_back(newName, newPin);
                
                cout << "Enter your name for verification: ";
                cin.ignore(); // Clearing the newline character from the input buffer
                getline(std::cin, nameToCheck);
                cout << "Enter PIN for validation: ";
                cin >> pinToCheck;

                bool isValid = validateManagement(managements, nameToCheck, pinToCheck);

                if (isValid) {
                cout << "New Management validated successfully." << endl;
                } else {
                cout << "Invalid name or PIN." << endl;
                }
                
                }
                
            if (Selection == '2'){
                
                cout << "Please enter new applicant's name: ";
                cin.ignore(); // Clearing the newline character from the input buffer
                getline(cin, newName);
                cout << "Enter " << newName << "'s PIN: ";
                cin >> newPin;

                // Adding the new associate
                associates.emplace_back(newName, newPin);
                
                cout << "Enter your name for verification: ";
                cin.ignore(); // Clearing the newline character from the input buffer
                getline(std::cin, nameToCheck);
                cout << "Enter PIN for validation: ";
                cin >> pinToCheck;

                bool isValid = validateAssociate(associates, nameToCheck, pinToCheck);

                if (isValid) {
                cout << "New associate validated successfully." << endl;
                } else {
                cout << "Invalid name or PIN." << endl;
                }
            } 
         }
    } while (Selection != 'Q' && Selection != 'q'); 
   cout <<"Thank you for working with Walmart "<< name << "!\n"<< endl;  
   
    return 0;
   
 }
