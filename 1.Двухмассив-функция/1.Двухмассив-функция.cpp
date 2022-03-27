//1.	Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

#include <iostream>
#include <Windows.h>
#include<time.h>
using namespace std;
const int Youchu = 4;
const int Xox = 5;
int Andr[Youchu][Xox];
double sum = 0;
void ShowMaxelement() 
{

	for (int y = 0; y < Youchu; y++)
	{

		int max = Andr[y][0];
		for (int x = 0; x < Xox; x++)
		{
			if (Andr[y][x] > max)
				max = Andr[y][x];
		}
		cout << "Max element " << y << " row=" <<
			max << endl;
	}
}
void ShowSumelement() {
	for (int y = 0; y < Youchu; y++)
	{
		for (int x = 0; x < Xox; x++)
		{

			sum += Andr[y][x];
		}
		cout << "Summa=" << sum << endl;
	}
}
void ShowMinelement() {
	int min = Andr[0][0];

	for (int y = 0; y < Youchu; y++)
	{


		for (int x = 0; x < Xox; x++)
		{
			if (Andr[y][x] < min)
				min = Andr[y][x];
		}
		cout << "Min element " << " " << min << endl;
	}
}
int main()
{
	srand(time(0));
	for (int y = 0; y < Youchu; y++)
	{

		for (int x = 0; x < Xox; x++)
		{
			Andr[y][x] = rand() % 20;
			cout << Andr[y][x] << " | ";
		}
		cout << endl;
	}
	ShowMaxelement();
	ShowSumelement();
	ShowMinelement();
	return 0;
}

