// Task F.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

/// <summary>
/// Константа pi
/// </summary>
const double pi = 3.14159265;
/// <summary>
/// Левая граница промежутка задачи
/// </summary>
const double left = -pi/2;
/// <summary>
/// Правая граница промежутка задачи
/// </summary>
const double right = pi / 2;

/// <summary>
/// Возводит число в степень
/// </summary>
/// <param name="number">Число, которое нужно возвести в степень</param>
/// <param name="pow">Степень, в которое нужно возвести число</param>
/// <returns>Число, возведенное в степень</returns>
double Powering(double number, int pow) {
	//Итоговый результат
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
/// Понижает модуль угла для нужного промежутка
/// </summary>
/// <param name="oldAngle">Угол</param>
/// <param name="left">Левая граница промежутка</param>
/// <param name="right">Правая граница промежутка</param>
/// <returns>Угол, лежащий в выбранном промежутке</returns>
double Angle(double oldAngle, double left, double right) {
	if (oldAngle < -pi / 2) {
		return Angle(oldAngle + 2 * pi, left, right);
	}
	else if(oldAngle > pi / 2) {
		return Angle(oldAngle - 2 * pi, left, right);
	}
	else {
		return oldAngle;
	}
}

int main()
{
	double sum = 0, angle, ePres;
	int n = 0;
	
	cin >> angle;
	cin >> ePres;
	

	while(Powering(angle, 2*n-1)/
	
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
