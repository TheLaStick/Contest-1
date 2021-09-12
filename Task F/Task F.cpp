// Task F.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

/// <summary>
/// Константа pi
/// </summary>
const double pi = 3.14159265;


/// <summary>
/// Возводит число в степень
/// </summary>
/// <param name="number">Число, которое нужно возвести в степень</param>
/// <param name="pow">Степень, в которое нужно возвести число</param>
/// <returns>Число, возведенное в степень</returns>
double Powering(double number, int pow) {
	double result = 1;

	while (pow > 0)
	{
		if (pow % 2 != 0)
		{
			result *= number;
		}
		number *= number;
		pow /= 2;
	}

	return result;
}

/// <summary>
/// Считает факториалы
/// </summary>
/// <param name="number">Число, для которого нужно посчитать факториал</param>
/// <returns>Факториал числа</returns>
int Factorial(int number) {
	int start = 1, result = 1;
	while (start <= number)
	{
		result *= start;
		start++;
	}

	return result;
}

/// <summary>
/// Считает модуль числа
/// </summary>
/// <param name="number">Число, для которого нужно посчитать модуль</param>
/// <returns>Модуль числа</returns>
double Absolute(double number) {
	if (number < 0) {
		return -number;
	}
	return number;
}

int main()
{
	//Сумма ряда Маклорена sum
	//Введенный угол angle
	//Введенная точность ePress
	double sum, angle, ePres;
	int n = 0;
	
	cin >> angle;
	cin >> ePres;

	angle = fmod(angle, 2 * pi);
	sum = angle;

	while (Absolute(Powering(angle, 2 * n - 1) / Factorial(n)) < ePres) {
		double angleLocal = angle * (-Powering(angle, 2)) / (2 * n * (n + 1));
		sum += angleLocal;
		n++;
	}

	cout << sum;
	cout << n;
}