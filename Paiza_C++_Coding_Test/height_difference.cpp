/*
2 人の兄弟がいます。兄である A 君の身長 a (cm) と、弟である B 君の身長 b (cm) が与えられます。兄である A 君の身長は必ず B 君の身長以上です。2 人の身長の差を求めてください。

入力例 1 の場合
180
150
180 (cm) と 150 (cm) の差を求めるので、180 - 150 = 30 を出力してください。
30
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
    int difference = input1 - input2;
    cout << difference;

    return 0;
}