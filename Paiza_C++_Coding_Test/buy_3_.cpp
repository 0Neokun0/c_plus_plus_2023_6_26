/*
1 個の値段が N 円のリンゴがあります。このリンゴを 3 つ買ったとき合計で何円になりますか？

入力例 1 の場合
3000
1 個 3000 円のリンゴを 3 つ買うので、 3000 × 3 = 9000 より
9000
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input;
    cin >> input;
    int output = input * 3;
    cout << output;

    return 0;
}