#include "phone00.h"
#include <iostream>
using namespace std;
void Phone::displayInfo()
{
    cout<<"Phonenumber is "<<phoneNum<<endl;
    cout<<"Colour is "<<phoneCol<<endl;
    cout<<"Date is "<<phoneDate<<endl;
};
void Phone::setNum()
{
   cin.ignore();//避免cin读取缓冲区的回车
   cin>>phoneNum;
};
void Phone::cho()
{   
    string choice;
    cout<<"change number?(y/n)"<<endl;
    cin>>choice;
    if (choice=="y")
    {
        cout<<"Enter the new number:"<<endl;
        setNum();
        cout<<"Updated information:"<<endl;
        displayInfo();
    }
    else
    {
        cout<<"bye"<<endl;
    }
}
Phone::Phone(const string & num,const string & col,const string & date)
{
    phoneNum=num;
    phoneCol=col;
    phoneDate=date;
};
void Smartphone::displayInfo()
{
    cout<<"我是智能手机。"<<endl;
    Phone::displayInfo();
};