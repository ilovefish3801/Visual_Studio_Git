#include <iostream>

using namespace std;

int plus(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    return x / y;
}

int main()
{
    cout << "Hello World!\n";

    plus(4, 2);

    return 0;
}
