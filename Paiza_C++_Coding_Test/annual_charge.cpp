/*
あなたはあるサービスに月額料金を払っています。年間でいくらになるか気になったので計算することにしました。

月額 p 円の料金の時、 12 ヶ月でいくら払うことになるか出力してください。

入力例 1 の場合
980
980 × 12 となるので
11760
と出力してください。*/

#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    int output = input * 12;
    cout << output << endl;

    return 0;
}