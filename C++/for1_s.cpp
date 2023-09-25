#include <iostream>
using namespace std;
int main()
{
    float sum=0,ave,n;
    for(int i=1;i<=5;i++)
    {
        cout<<"請輸入第"<<i<<"為學生的成績：";
        cin>>n;
        sum+=n;
        ave=sum/5;
    }
    cout<<"全班總成為："<<sum<<"分，平均為"<<ave<<"分\n";
    system("pause");
    return 0;
}
