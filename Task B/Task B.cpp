/* Программа быстрого возведения числа в степень */

#include <iostream>
using namespace std;
int main()
{
	//Число, которое нужно возвести в степень
	double inputNumber;
	//Степень, в которое нужно возвести число
	int pow;
	//Итоговый результат
	double result = 1;

	cin >> inputNumber;
	cin >> pow;

	while (pow > 0)
	{
		if (pow % 2 != 0) 
		{
			result *= inputNumber;
		}
		inputNumber *= inputNumber;
		pow /= 2;
	}
	cout.precision(6);
	cout << result;
}