#include <iostream>
#include <string>
using namespace std;
int main()
{
    short chi, eng,math; //宣告變數
    cout <<"請輸入國文成績(0-100):";
    cin >> chi;
    cout <<"請輸入英文成積(0-100):";
    cin >> eng;
    cout <<"請輸入數學成績(0-100):";
    cin >>math;
    int sum =chi+ eng+ math; //計算總和
    float ave =(float)sum/ 3; //計算平均
    cout <<"你的總分為 " << sum <<" 分，平均為" << ave <<"分\n";
    system("pause");
    return 0;
}