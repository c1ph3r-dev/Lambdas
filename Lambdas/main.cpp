#pragma hdrstop

#ifdef _WIN32
#include <tchar.h>
#else
typdef char _TCHAR
#define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int _tmain(int argc, _TCHAR* argv[])
{
	int d = 3, e = 7;

	//		[cc](p){fd};
	std::vector<int> v{2,3,7,14,23};
	std::for_each(v.begin(), v.end(), [&d, e](int x) {
		if (x % e == 0)
			std::cout << x << " is divisible by " << d << "\n";
		else
			std::cout << x << " is not divisible by " << d << "\n";
		d = 10;
		std::cout << "d = " << d << std::endl;
		});

	system("pause>nul");
	return 0;
}