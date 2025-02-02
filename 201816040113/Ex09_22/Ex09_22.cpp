#include<iostream>
#include<stdexcept>
#include"Time.h"

using namespace std;

int main()
{
    Time t1;
    Time t2(2);
    Time t3(21,34);
    Time t4(12,25,42);
    t1.setTotalSeconds(0);//初始化总秒数
    t2.setTotalSeconds(0);//初始化总秒数
    t3.setTotalSeconds(0);//初始化总秒数
    t4.setTotalSeconds(0);//初始化总秒数


    cout<<"Constructed with:\n\nt1: all arguments defaulted\n";
    t1.printUniversal();
    cout<<"\n";
    t1.printStandard();

    cout << "\n\nt2: hour specified; minute and second defaulted\n";
    t2.printUniversal();
    cout<<"\n";
    t2.printStandard();

    cout << "\n\nt3: hour and minute specified; second defaulted\n";
    t3.printUniversal();
    cout<<"\n";
    t3.printStandard();

    cout << "\n\nt4: hour,minute and second specified\n";
    t4.printUniversal();
    cout<<"\n";
    t4.printStandard();

}
