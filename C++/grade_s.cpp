#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"請輸入成積(0-100):";
    cin>>n;
    switch (n/10)                       //取得成績的十位數
    {
        case 10:
        case 9:
            cout <<"優等\n";
            break;
        case 8:
            cout <<"甲等\n";
            break;
        case 7:
            cout <<"乙等\n";
        case 6:
            cout <<"丙等\n";
            break;
        default:
            cout<<"丁等\n";
            break;
    }
    system ("pause");
    return 0;
}