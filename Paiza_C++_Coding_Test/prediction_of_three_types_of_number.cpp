/*
あなたは 1 年間 でどれくらいキーボードのキーを押しているかが気になり概算することにしました。

1 日のキーボードのキーを押した回数 N が与えられるので 365 日間で何回になるか出力してください。

入力例 1 の場合
1024
1日 1024 回キーを押すので 365 をかけて
373760
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    cin >> input1;
    int output = input1 * 365;
    cout << output;

    return 0;
}