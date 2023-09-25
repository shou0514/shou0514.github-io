#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"請輸入成績(0-100):";
    cin>>grade;
    if(grade>=90)
        cout<<"優等\n";
    else if(grade>=80)
        cout<<"甲等\n";
    else if(grade>=70)
        cout<<"乙等\n";
    else if(grade>=60)
        cout<<"丙等\n";
    else
        cout<<"丁等\n";
    system ("pause");
    return 0;
}