/*
A 君の経験値は a ポイントで、B 君の経験値は b ポイント、C 君の経験値は c ポイントです。3 人の合計の経験値は何ポイントですか？

入力例 1 の場合
180
150
100
A 君の経験値の 180 ポイントと B 君の経験値の 150 ポイント、C 君の経験値の 100 ポイントを合計して、
430
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int num1;
    int num2;
    int num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    int sum = num1 + num2 + num3;

    cout << sum;


    return 0;
}