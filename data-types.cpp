#include <iostream>
using namespace std;

int main()
{
    cout<<"DATA TYPE Sizes:"<<endl;

    int a; //declaration
    a = 12; //initialisation

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    double d;
    cout<<"size of double "<<sizeof(d)<<endl;

    bool e;
    cout<<"size of bool "<<sizeof(e)<<endl;

    cout<<endl;

    // TYPE MODIFIERS
    cout<<"DATA TYPE MODIFIERS:"<<endl;

    short int si;
    cout<<"size of short int "<<sizeof(si)<<endl;

    long int li;
    cout<<"size of long int "<<sizeof(li)<<endl;

    


    return 0;
}