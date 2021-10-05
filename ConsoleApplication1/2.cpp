#include <iostream>
#include <math.h>

using namespace std;

int main2() {
    setlocale(LC_ALL, "RUS");
    int a = 7;
    int b = 9;
    int c = 15;
    float p = (a + b + c) / 2.0;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}