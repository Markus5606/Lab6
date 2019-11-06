#include<TCHAR.H>
#include"iostream"
#include"windows.h"
#include"math.h"
#define _USE_MATH_DEFINES
#define M_E 2.71828182845904523536

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 2, b = 3;
	float h = 0.1;


	float y, x = a;
	while (x <= b);
	{
		y = pow(M_E, x) + abs(x) + pow(x, 2);
		printf("x=%.2f   y=%f\n", x, y);
		x += h;
	}


	system("pause");
	return 0;
}
