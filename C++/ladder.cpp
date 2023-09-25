#include <iostream>
using namespace std;
int main ()
{
    float r,height,bulk;
    cout <<"請輸入圓柱體的半徑（公分）：";
    cin>>r;
    cout <<"請輸入圓柱體的高（公分）：";
    cin>>height;
    bulk=r*r*3.14*height;
    cout<<"圓柱體的體積：" <<bulk <<" 立方公分";
    system ("pause");
    return 0;
}