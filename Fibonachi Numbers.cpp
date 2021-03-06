// Fibonachi Numbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#define Fibonachi_numb  50
long long int SearchFibonachiNumb(int n)
{
	long long int fib1 = 1;
	long long int fib2 = 1;
	int i = 2;
	long long int numb;
	while (i < n)
	{
		numb = fib1 + fib2;
		fib1 = fib2;
		fib2 = numb;
		i++;
	}
	return numb;
}

long long int SearchFibonachiRecursive(long long int numb, long long int *arr)
{
	if (numb == 1 || numb == 2)
	{
		arr[numb - 1] = 1;
		return 1;
	}
	else
		if (arr[numb - 1] != 0) return arr[numb - 1];
	else
	{
		arr[numb - 1] = SearchFibonachiRecursive(numb - 1, arr);
		
	}
	return arr[numb - 1] + SearchFibonachiRecursive(numb - 1, arr);
}

long long int SearchFibonachiNumbMatrix(long long int numb)
{
	if (numb == 0 || numb == 1)
		return 1;
	else
	{

	}
	return numb;
}

int main()
{
	long long int arrFib[50] = { NULL };
	int n = 50;

	clock_t time;
	time = clock();
	printf("%lld\n", SearchFibonachiNumb(Fibonachi_numb));
	time = clock() - time;
	printf("time = %f\n", (double)time / CLOCKS_PER_SEC);
	time = clock();
	printf("%lld\n", SearchFibonachiRecursive(Fibonachi_numb,arrFib));
	time = clock() - time;
	printf("time = %f\n", (double)time / CLOCKS_PER_SEC);
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
