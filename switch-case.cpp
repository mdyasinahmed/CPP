#include <iostream>
using namespace std;

int main()
{
    int GPA;
    cout<<"Enter Integer Part of Your GPA: ";
    cin>>GPA;

    switch(GPA)
    {
    case 5:
        cout<<"Excellent";
        break;
    case 4:
        cout<<"Good";
        break;
    case 3:
        cout<<"Not Bad";
        break;
    case 2:
        cout<<"Poor";
        break;
    default:
        cout<<"Invalid Input";
        break;
    }

    return 0;
}