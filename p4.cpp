#include<iostream>
using namespace std;

int main()
{
    int numOfArray;
    cout << "Enter a number of your array size : ";
    cin >> numOfArray;

    int arr[numOfArray];

    cout << "Enter of your numbers." << endl;

    for(int i=0; i<numOfArray; i++){
        cin >> arr[i];
    }
    cout << "Yours number: ";
    for(int i=0; i<numOfArray; i++){
        cout << arr[i] << " ";
    }
    cout<< "\nReverse number: ";
    for(int i=numOfArray-1; i>=0; i--){
        cout << arr[i] << " ";
    }
}