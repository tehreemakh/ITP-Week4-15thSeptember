#include<iostream>
#include<string>

using namespace std;
int main() {
    double scale;
    cout<<"enter the richter scale number: ";
    cin>>scale;
    
    if (scale < 5.0) {
        cout<<"characterization: little or no damage."<<endl;
    }
    else if ((scale >= 5.0) && (scale < 5.5)) {
        cout<<"characterization: some damage."<<endl;
    }
    else if ((scale >= 5.5) && (scale < 6.5)) {
        cout<<"characterization: serious damage, walls may crack or fall"<<endl;
    }
    else if ((scale >= 6.5) && (scale < 7.5)) {
        cout<<"characterization: disaster, house and buildings may collapse"<<endl;
    }
    else if (scale >= 7.5) {
        cout<<"characterization: Catastrophe: most buildings destroyed"<<endl;
    }
    else {
        cout<<"invalid scale entered."<<endl;
    }
    
    
    
    
}
