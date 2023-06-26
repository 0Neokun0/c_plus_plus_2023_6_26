/*
A 君は去年身長が 170cm ありました。A 君は 1 年間で N cm 伸びましたが、現在の A 君の身長は何 cm ですか？

入力例 1 の場合
30
170 cm より 30 cm 増えるので
200
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    cin >> input1;
    int output = 170 + input1;
    cout << output;
    return 0;
}