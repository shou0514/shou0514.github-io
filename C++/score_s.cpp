#include <iostream>
using namespace std;
int main()
{
    int score;                              //int用在數字，string用在文字
    cout<<"請輸入成績：";
    cin >>score;
    score>=60 ? cout<<"及格！\n" : cout<<"不及格！\n";
    system ("pause");
    return 0; 
}