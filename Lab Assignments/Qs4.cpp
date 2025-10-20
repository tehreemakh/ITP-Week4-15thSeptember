#include<iostream>

using namespace std;
int main() {
    double fscmarks, ntsmarks;
    cout<<"enter your FSC marks: ";
    cin>>fscmarks;
    cout<<"enter your NTS marks: ";
    cin>>ntsmarks;
    
    if ((fscmarks > 70) && (ntsmarks > 70)){
        cout<<"congrats, u are awarded a seat in the IT dept of Oxford University!!"<<endl;
    }
    else if ((fscmarks > 70) && (ntsmarks > 60)) {
        cout<<"congrats, u are awarded a seat in the Electronics dept of Oxford University!!"<<endl;
    }
    else if ((fscmarks > 70) && (ntsmarks > 50)) {
        cout<<"congrats, u are awarded a seat in the Telecommunications dept of Oxford University!!"<<endl;
    }
    else if (((fscmarks >= 60)&&(fscmarks <=70)) && (ntsmarks >= 50)) {
         cout<<"congrats, u are awarded a seat in the IT dept of MIT!!"<<endl;
    }
    else if (((fscmarks >= 50)&&(fscmarks <=59)) && (ntsmarks >= 50)) {
         cout<<"congrats, u are awarded a seat in the Chemical dept of MIT!!"<<endl;
    }
    else if (((fscmarks > 40)&&(fscmarks < 50)) && (ntsmarks >= 50)) {
         cout<<"congrats, u are awarded a seat in the Computer dept of MIT!!"<<endl;
    }
    else {
        cout<<"marks are too low to grant you a seat :("<<endl;
    }
    
    
    
}