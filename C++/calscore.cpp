#include <iostream>
#include <string>
using namespace std;
int main ()
{
    short fir,sec,thi;
    cout<<"請輸入第一天的支出 :";
    cin >>fir;
    cout<<"請輸入第二天的支出 :";
    cin >>sec;
    cout<<"請輸入第三天的支出 :";
    cin >>thi;
    int sum =fir +sec+ thi;
    float ave =(float)sum/3;
    cout<<"你的總支出為 " <<sum <<"元，平均每天支出 " <<ave <<"元\n";
    system ("pause");
    return 0;
}