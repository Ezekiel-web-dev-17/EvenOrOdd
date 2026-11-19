#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "Enter any number and i would tell you if it is an even or odd number\n";
    cin >> input;

    if (input % 2 == 0) cout << "The number " << input << " is an even number";
    else cout << "The number " << input << " is an odd number";

    return 0;
}
