#include<iostream>
int main()
{
    char ch;
    std::cout<<"請輸入一個字元：";
    std::cin>>ch;
    if(ch>='0'&& ch<='9')
    std::cout<<"輸入的是數字！\n";
    else if(ch>='A' && ch<='Z')
    std::cout<<"輸入的是大寫字母！\n";
    else if(ch>='a' && ch<='z')
    std::cout<<"輸入的是小寫字母！\n";  //在判斷大寫字母和小寫字母時，你應該使用單引號' '來括住字母字符，例如 'A'、'Z'、'a'、'z'，而不是未定義的變數 A、Z、a、z。
    else
    std::cout<<"輸入的不是數字或字母！\n";
    system("pause");
    return 0;
}