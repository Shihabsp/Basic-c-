/*print natural number*/

#include<iostream>
using namespace std;
void naturalnumber(int num)
{
    if(num>0)
    {
        naturalnumber(num-1);
        cout << " ";
    }
    cout << num ;
    
}
int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;

    naturalnumber(number);

}