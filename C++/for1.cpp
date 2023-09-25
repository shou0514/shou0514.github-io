#include <iostream>
using namespace std;
int main()
{
    int sum=0; //儲存總和   
    for(int i=2; i<=10 ; i+=2) //建立for迴圈
    {
        sum +=i;        //計算總和
        cout<<"第" <<i/2 <<"次迴圈的i=" << i <<" ,總和為"<<sum<<"\n";
    }
    system("pause");
    return 0;
}
