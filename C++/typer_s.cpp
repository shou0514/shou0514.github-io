#include <iostream>
using namespace std;
int main()
{
    string typing;
    cout<<"請輸入一分鐘打字字數：";
    cin >>typing;
    if (typing>="80")
    cout <<"你是打字快手！\n";
    system ("pause");
    return 0;
}