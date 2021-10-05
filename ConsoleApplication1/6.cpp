#include <iostream>
#include <math.h>

using namespace std;

int main6() {
	long long year = 2021;
	long long sec = 86400;
	long long howsec = sec * year * 365;
	howsec = sec * 100 * 365;
	howsec = sec * 1000 * 365;
	return 0;
}