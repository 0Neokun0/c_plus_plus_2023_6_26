/*
A 君は 1 個 a 円の鞄を b 個持っています。合計で何円かかりましたか。

入力例 2 の場合
300
11
300 円の鞄が 11 個あるので
3300
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    int input2;
    cin >> input1;
    cin >> input2;
    int result = input1 * input2;
    cout << result;

    return 0;
}