#include<iostream>
using namespace std;

int main()
{
    int money;
    cin>>money;

    if(money>1000)
    {
        cout<<"Go for Shopping"<<endl;
    } else if(money>1200){
        cout<<"Buy Punjabi"<<endl;
    } else{
        cout<<"No Shopping"<<endl;
    }

    return 0;
}