/*
ある 5 人兄弟は体重が全員同じです。5 人兄弟の 1 人の体重が与えられるので 5 人の総重量を求めてください。

入力例 1 の場合
50
1 人 50 kg なので 5 人で 250 kg になります。
250
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    cin >> input1;
    int output = input1 * 5;
    cout << output;
    return 0;
}