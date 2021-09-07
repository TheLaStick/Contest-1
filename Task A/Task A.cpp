/* Программа вычисления среднего арифметического ряда чисел до нуля, не включая его */

#include <iostream>
using namespace std;

int main()
{
	//Вводимое число
	int inputNumber;
	//сумма чисел, изначально равна 0; количество чисел, изначально равно 0
	double sumOfNumbers = 0, numberCount = 0;

	cin >> inputNumber;
	while (inputNumber != 0)
	{
		//Складываем все числа
		sumOfNumbers += inputNumber;
		//Вводим новое число
		cin >> inputNumber;
		//Увеличиваем количество чисел
		numberCount++;
	}
	
	//Вывод с точностью 5 знаков после запятой
	cout.precision(5);
	cout << sumOfNumbers / numberCount;
}


