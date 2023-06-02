#include <iostream>
using namespace std;

int main()
{
    int i, a, b;
    cin>>a >>b;

    for(i=a;i<=b;i++){
        if(i%1==0){
            continue;
        }
        cout<<i<<endl;
        break;
    }

    return 0;
}