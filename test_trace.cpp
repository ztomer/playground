#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
#define TTRACE printf("TRACE: %s:%s:%d\n",__FILE__, __FUNCTION__, __LINE__)
#define MTRACE(__msg) printf("TRACE: %s:%s:%d - %s\n",__FILE__, __FUNCTION__, __LINE__, __msg)

void A(){
TTRACE;
}

void B(){
TTRACE;
}
int main()
{
    B();
    A();
    cout << "Hello world!" << endl;
    return 0;
}
