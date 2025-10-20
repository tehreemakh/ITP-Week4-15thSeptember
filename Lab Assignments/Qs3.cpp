#include<iostream>
using namespace std;

int main() {
    double calories, fatgrams, fatcalories, caloriespercent;
    
    cout<<"enter amount of calories: ";
    cin>>calories;
    while (calories < 0) {
        cout<<"incorrect value, pls enter again."
        cin>>calories;
    }

    cout<<"enter amount of fatgrams: ";
    cin>>fatgrams;
    while (fatgrams < 0) {
        cout<<"incorrect value, pls enter again."
        cin>>fatgrams;
    }

    fatcalories = fatgrams * 9;
    if (fatcalories > calories) {
        cout<<"incorrect calories or fatgrams";
    }
    caloriespercent = (fatcalories/calories) * 100;
    
    cout<<"percentage of calories from fat is: "<<caloriespercent;
    if (caloriespercent < 30) {
        cout<<"food is low in fat";
    }

    
    
}
