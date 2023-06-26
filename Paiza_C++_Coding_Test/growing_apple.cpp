/*
かごの中に N 個のリンゴがあり、 1 日に 1 個ずつ増えていきます。10 日後のリンゴの数はいくつですか？

入力例 1 の場合
30
30 個から 10 日間で 10 個増えるので、 30 + 10 より
40
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    cin >> input1;
    int output = input1 + 10;
    cout << output;
    return 0;
}