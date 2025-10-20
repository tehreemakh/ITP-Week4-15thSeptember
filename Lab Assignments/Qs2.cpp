#include<iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout<<"enter 1st side: ";
    cin>>side1;

    cout<<"enter 2nd side: ";
    cin>>side2;

    cout<<"enter 3rd side: ";
    cin>>side3;

    if (side1 == side2 == side3) {
        cout<<"equilateral";
    }
    else if (side1 != side2 != side3) {
        cout<<"scalene";

    }
    else {
        cout<<"isocles";
    }
}
