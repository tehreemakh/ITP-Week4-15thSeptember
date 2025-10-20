#include<iostream>

using namespace std;
int main() {
    bool isWeekday, isVacation;
    cout<<"we need to determine whether you are sleeping in or not. if you are, the output will be true, otherwise false"<<endl;
    cout << "Are you on vacation? Enter 1 for yes and 0 for no: ";
    cin >> isVacation;

    cout << "Is it a weekday? Enter 1 for yes and 0 for no: ";
    cin >> isWeekday;
    
    if (!isWeekday || isVacation) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    

}