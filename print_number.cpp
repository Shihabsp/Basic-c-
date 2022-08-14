#include<iostream>
using namespace std;
void naturalnumber(int n)
{
    if(n>0)
    {
        naturalnumber(n-1);
        cout << " ";
    } 
    cout << n << " ";
}

int main()
{
    cout << "Enter natural number : ";
    int num; cin >> num;
    naturalnumber(num);

    return 0;
}