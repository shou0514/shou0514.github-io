#include <iostream>
using namespace std;
int main()
{
    int score;
    cout <<"請輸入國文成績：";
    cin >>score;
    score>=60 ? cout<<"成績及格，恭喜！" : cout<<"成績不及格，再加油！";
    system ("pause");
    return 0;
}