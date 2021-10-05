#include <iostream>
#include <math.h>

using namespace std;

int main4() {
    int a = 2;
    int q = 4;
    int c = a;
    a = q;
    q = c;
   

    a = a + q;
    q = a - q;
    a = a - q;
    return 0;
}