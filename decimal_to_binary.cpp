#include<iostream>
using namespace std;

int main()
{
    cout << "Enter decimal number: ";
    int num, remainder, count = 0;
    cin >> num;
    int result = num;
    while(num !=1){
        num /= 2;
        count++;
    }
    num = result;
    int array[count];

    for(int i=0; i<=count; i++){
        remainder = num%2;
        num /= 2;
        array[i] = remainder;
    }
    for(int i=count; i>=0; i--){
        cout << array[i];
    }
}