#include<iostream>
using namespace std;

int main()
{
    int num, secretNumber = 25;
    for(int i=0; i>=0; i++){
        cout<< "Enter a number : ";
        cin >> num;
        if(num == secretNumber){
        cout << "Correct!!!" << " (Guess "<< i+1 << ")" <<endl;
        break;
        }
        else if(num < secretNumber){
        cout << "Too small" << " (Guess "<< i+1 << ")" <<endl;
        }
        else if(num > secretNumber){
        cout << "Too large" << " (Guess "<< i+1<< ")" <<endl;
        }
    }
    
}