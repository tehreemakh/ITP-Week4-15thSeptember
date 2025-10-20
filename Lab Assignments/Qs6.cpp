#include<iostream>
#include<string>

using namespace std;
int main() {
    
    string type;
    double time = 0;
    string isdouble, ismanual;
    cout<<"enter the type of coffee u want, B for Black and W for White: ";
    cin>>type;
    cout<<"would you like the coffee to be double? enter y for yes and n for no: ";
    cin>>isdouble;
    cout<<"is the coffee manual? enter y for yes and n for no: ";
    cin>>ismanual;
    
    cout<<"first step is to put the water"<<endl;
    if ((type == "B") || (type == "b")) {
        time = time + 20;
        cout<<"it takes 20 minutes to do this step"<<endl;
    }
    else {
        time = time + 15;
        cout<<"it takes 15 minutes to do this step"<<endl;
    }
    
    cout<<"second step is to mix the sugar"<<endl;
    if ((type == "B") || (type == "b")) {
        time = time + 20;
        cout<<"it takes 20 minutes to do this step"<<endl;
    }
    else {
        time = time + 15;
        cout<<"it takes 15 minutes to do this step"<<endl;
    }
    
    cout<<"third step is to mix everything properly"<<endl;
    if ((type == "B") || (type == "b")) {
        time = time + 25;
        cout<<"it takes 25 minutes to do this step"<<endl;
    }
    else {
        time = time + 20;
        cout<<"it takes 20 minutes to do this step"<<endl;
    }
    
    cout<<"fourth step is to add coffee"<<endl;
    if ((type == "B") || (type == "b")) {
        time = time + 15;
        cout<<"it takes 15 minutes to do this step"<<endl;
    }
    else {
        time = time + 2;
        cout<<"it takes 2 minutes to do this step"<<endl;
    }
    
    cout<<"fifth step is to add milk"<<endl;
    if ((type == "W") || (type == "w")) {
        time = time + 4;
        cout<<"it takes 4 minutes to do this step"<<endl;
    }
    
    cout<<"sixth and the last step is to mix well"<<endl;
    if ((type == "B") || (type == "b")) {
        time = time + 25;
        cout<<"it takes 25 minutes to do this step"<<endl;
    }
    else {
        time = time + 20;
        cout<<"it takes 20 minutes to do this step"<<endl;
    }
   
   if ((isdouble == "y") || (isdouble == "Y")) {
       time = time * 1.5;
       cout<<"having a double coffee increases the total baking time by 50 percent :/"<<endl;
   }
   
   cout<<"the total time taken to make your coffee is: "<<time<<" minutes"<<endl;
    
    
}