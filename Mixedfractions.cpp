#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int den;     
    int rem;   
    cin >> num1 >> den;
    rem = num1 % den;
    num2 = num1 / den;
    cout << num2 << " " << rem << " " << den;
    return 0;
}