#include <iostream>

using namespace std;

int main()
{
    // Min/ Max methods

    int a = 7;
    int b = 5;
    int M = max(a, b);
    int m = min(a, b);

    cout << "Maximum: " << M << endl;
    cout << "Minimum: " << m << endl;

    // Swap method

    swap(a, b);
    cout << "After swapping ";
    cout << "a = " << a;
    cout << " b = " << b << endl;

    //pair is a handy alternative to defining struct or class.
    pair<string, pair<int, int>> var = {"abc", {1, 2}};
    cout << var.second.first << endl;
    cout << var.first;
}
