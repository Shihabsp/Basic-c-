#include<iostream>
using namespace std;

int main(){
    int leap_year=2020;
    cout<<  "Next 20 leap year :" <<endl;
    for(int i=0; i<20; i++){
        leap_year+=4;
        cout << leap_year << " ";
    }
    
}