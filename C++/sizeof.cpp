#include <iostream>
using namespace std;
int main()
{
    float int1 , int2, int3, max;
    cout <<"請輸入第一個數：";
    cin >>int1;
    cout<<"請輸入第二個數：";
    cin >>int2;
    max =int1>int2 ? int1 : int2;
    cout <<"請輸入第三個數：";
    cin >>int3;
    max= max>int3 ? max : int3;
    cout<< "輸入三個數中最大的數為：" << max <<"\n";
    system ("pause");
    return 0;
}