/*
ある棒の長さ N が与えられます。この棒を 10 本つなげたときにできる棒の長さを求めてください。

入力例 1 の場合
3
長さ 3 の棒を 10 本つなげるので、3 × 10 = 30 が答えになります。
30
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;

    int output = input * 10;
    cout << output << endl;

    return 0;
}
