#include <iostream>
using namespace std;

int main()
{
    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;

    int calculate = amount1 + amount2;
    cout<<"sum: "<<calculate<<endl;
    
    calculate = amount1 - amount2;
    cout<<"Minus: "<<calculate<<endl;

    calculate = amount1*amount2;
    cout<<"Multiply: "<<calculate<<endl;

    calculate = amount1/amount2;
    cout<<"Divide: "<<calculate<<endl;

    return 0;
}