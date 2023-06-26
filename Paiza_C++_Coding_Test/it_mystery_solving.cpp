/*
A 君は 1 日 N ページ問題集を進めます。A 君がこのペースで 100 日間、問題集を進めると 100 日後には何ページ終わりますか？

入力例 1 の場合
50
1 日 50 ページなので、100 日で 5000 ページ終わります。
5000
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    cin >> input1;
    int output = input1 * 100;
    cout << output;

    return 0;
}