/*
A 君の口座残高は N 円ですが、引き出すときに手数料として 120 円かかります。A 君が口座残高をすべて引き出すとき何円引き出せますか？

入力例 1 の場合
150
口座残高は 150 円であり、手数料として120円引かれるので
30
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    int input2{120};
    cin >> input1;

    int difference = input1 - input2;
    cout << difference;


    return 0;
}