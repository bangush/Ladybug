// TestConsoleApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

int sum(int x, int iterations) {
	OutputDebugString(_T("Testing output string."));
	int result = 0;
	for (int i = 0; i < iterations; i++) {
		result += x * i;
	}
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

