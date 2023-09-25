#include <iostream>
int main()
{
    int year;
    std::cout<<"請輸入西元年份：";
    std::cin>>year;
    if(year%4==0 &&year%100 !=0|| year%400 ==0)      //%可以除出於數or/只能算出商，&&這是邏輯"且"運算符，用於組合兩個條件，只有在兩個條件都為真時，整個表達式才為真，!=(不等於)，||這是邏輯"或"運算符，用於組合多個條件
    std::cout<<"西元"<<year<<"年為閏年\n";
    else
    std::cout<<"西元"<<year<<"年為平年\n";
    system ("pause");
    return 0;
}