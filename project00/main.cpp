#include <iostream>
#include "phone00.h"
#include <string>
using namespace std;
int main()
{
    Phone phone("15852292273","r","2006.8.5");//此处给的参数是常量，在定义构造函数时参数应该是const string & ,string & 不能接受常量
//  如所在定义构造函数时使用string & ,可以这样来做:
//  string s="15852292273",r="r",d="2006.8.5";
//  Phone phone(s,r,d);
    cout<<"Information:"<<endl;
    phone.displayInfo();
    phone.cho();
    Smartphone smartphone("114514","b","2024.9.20");
    cout<<"Information:"<<endl;
    smartphone.displayInfo();
    smartphone.cho();
}
