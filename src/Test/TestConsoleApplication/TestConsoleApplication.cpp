// TestConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

void update(int* x) {
	OutputDebugString(_T("About to crash."));
    *x = 0x1337;
}

int sum(int x, int iterations) {
	int result = 0;
	for (int i = 0; i < iterations; i++) {
		result += x * i;
	}

    // intentionally crash.
    update(nullptr);

	return result;
}

int main()
{
	int x, iterations;

	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter iterations: ";
	std::cin >> iterations;
	
	int result = sum(x, iterations);
	std::cout << result << std::endl;

    return 0;
}

