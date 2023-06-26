/*
ある学校には数が絶対に偶数である N 人の生徒がいます、全生徒が 2 人ずつのグループに分かれたとき、いくつグループができますか？

入力例 1 の場合
3000
3000 人を 2 人ずつのグループに分けると、3000/2 = 1500 より 1500 個のグループができます。
1500
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int input1;
    cin >> input1;
    int output = input1/2;
    cout << output;

    return 0;
}