#include <iostream>
#include <string>
using namespace std;
class Phone
{
private:
    string phoneNum;
    string phoneCol;
    string phoneDate;
public:
    void displayInfo();
    void setNum();
    void cho();
    Phone(const string & num,const string & col,const string & date);
};
class Smartphone :public Phone
{
public:
    Smartphone(const string & num,const string & col,const string & date):Phone(num,col,date)
    {
    };
    void displayInfo();
};