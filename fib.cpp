#include "pch.h"
#include <iostream>

//The Fibonacci numbers are the numbers in the following integer sequence.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
//
//In mathematical terms, the sequence Fn of Fibonacci numbers is defined by the recurrence relation
//
//Fn = Fn - 1 + Fn - 2
//with seed values
//
//F0 = 0 and F1 = 1.

int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;

    std::cout << "Enter the nth term and see the Fibonacci number!\n";
	std::cin >> n;

	std::cout << fib(n) << std::endl;
}
