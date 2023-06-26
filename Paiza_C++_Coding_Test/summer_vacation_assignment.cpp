/*
A 君には夏休みの課題が 500 ページあります。A 君は一昨日に a ページ、 昨日に b ページ分の課題を終わらせました。課題は残り何ページですか？

入力例 1 の場合
180
150
一昨日は 180 ページ、昨日は 150 ページ終わらせたので、500 - 180 - 150 = 170 より
170
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int input1;
    int input2;
    int number{500};

    cin >> input1;
    cin >> input2;

    int output = number - input1 - input2;
    cout << output;

    return 0;
}