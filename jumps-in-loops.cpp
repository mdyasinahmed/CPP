#include <iostream>
using namespace std;

int main()
{
    // CONTINUE -> Skip to the next iteration of the loop
    // BREAK -> Terminate the loop

    int salary = 3000;

    for(int date=1;date<=30;date++){

        if(date%2==0)
        {
            continue;
        }
        if(salary==0){
            break;
        }

        cout<<"Go out Today!!"<<endl;
        salary-=500;
        

    }


    return 0;
}