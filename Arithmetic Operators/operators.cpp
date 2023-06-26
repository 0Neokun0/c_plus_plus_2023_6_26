/*
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int num1{10};
    int num2{20};

    int num3{11};
    int num4{55};
    ++num3;
    --num4;

    cout << num1 + num2 << "\n";
    cout << num2 - num1 << "\n";
    cout << num1 * num2 << "\n";
    cout << num1 / num2 << "\n";
    cout << num1 % num2 << "\n";
    cout << num3 << "\n";
    cout << num4 << "\n";



    return 0;
}