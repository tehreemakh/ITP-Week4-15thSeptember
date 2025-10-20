#include <iostream>
using namespace std;

int main() {
    char choice;
    int total = 0;
    char more;

    cout<< "Menu: "<<endl;
    cout<< "B = Burger (Rs.200)"<<endl;
    cout<< "F = French Fries (Rs.50)"<<endl;
    cout<< "P = Pizza (Rs.500)"<<endl;
    cout<< "S = Sandwiches (Rs.150)"<<endl;

    do {
        cout<<"enter your choice: "<<endl;
        cin>>choice;

        if (choice == 'B' || choice == 'b') {
            cout<<"burger added (Rs.200)"<<endl;
            total += 200;
        } 
        else {
            if (choice == 'F' || choice == 'f') {
                cout<<"French Fries added (Rs.50)"<<endl;
                total += 50;
            } 
            else {
                if (choice == 'P' || choice == 'p') {
                    cout<< "Pizza added (Rs.500)"<<endl;
                    total += 500;
                } 
                else {
                    if (choice == 'S' || choice == 's') {
                        cout<< "Sandwich added (Rs.150)"<<endl;
                        total += 150;
                    } else {
                        cout<< "Invalid choice!"<<endl;
                    }
                }
            }
        }

        cout<<"Do you want to order more? (Y/N): ";
        cin >> more;

    } 
    while (more == 'Y' || more == 'y');

    cout << "Your total bill = Rs."<<total<<endl;


}