#include <iostream>
using namespace std;
int main()
{
    int deposit = 0,c = 0, n;
    while(deposit < 30000)
    {
        c++;
        cout <<"請輸入第"<< c << "個月份的存款：";
        cin >>n;
        deposit +=n;
    }
    cout<<"恭喜！存了"<<c<<"個月的總存款為："<<deposit <<"元。\n"<<"已足夠買機車。請小心駕駛！";
    system("pause");
    return 0;
}