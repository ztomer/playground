#include <iostream>

using namespace std;

static int a = 5;
const int* const var_test = &a;

int main()
{
    *(int*)var_test = 10;
    cout << "Hello world!" << *var_test << endl;
    return 0;
}
