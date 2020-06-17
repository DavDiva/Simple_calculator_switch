#include <iostream>
using namespace std;

int main()
{
    cout << "It is a calculator. Please enter expression to count." << endl;
    double a, b;
    char c='0';
    cin >> a >> c >> b;
    switch (c)
    {
    case '*': cout << a * b;
        break;
    case '/': 
        if (b == 0) {
            cout << "You cannot divide by 0." << endl;
        }
        else
        {
            cout << a / b;
        }
        break;
    case '+': cout << a + b;
        break;
    case '-': cout << a - b;
        break;
    }
    return 0;
}



