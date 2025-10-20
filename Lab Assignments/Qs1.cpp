#include<iostream>
#include<string>
using namespace std;
int main() {
    int value;
    int lastdigit;
    cout<<"enter an integer value: ";
    cin>>value;
    while ((value >= 10) || (value <= -10)) {
        lastdigit = value % 10;
        value = (value/10) - 2*lastdigit;

    }
    if ((value == -7) || (value == 7) || (value == 0)) {
        cout<<"divisible";
    }
    else {
        cout<<"not divisible";
    }



}
