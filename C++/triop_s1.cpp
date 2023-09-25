#include <iostream>
using namespace std;
int main ()
{  
    int tax;
    cout<<"請輸入年度收入：";
    cin>>tax;
    tax>=30000 ? cout<<"抱歉！您不符合補助資格！" : cout<<"恭喜！您符合補助資格！";
    system ("pause");
    return 0;
}