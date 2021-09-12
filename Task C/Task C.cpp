/* Программа поиска количества натуральных палиндромов до числа K*/

#include <iostream>
using namespace std;
int main()
{
	//Вводимое число К
    double K;
	//перебираемое число number; 
	//его копия для зеркаливания naturalNum; 
	//цифра перебираемого числа digit; 
	//отзеркаленное число mirror; 
	//количество палиндромов mirrorCount 
	int number = 1, naturalNum = 0, digit = 0, mirror = 0, mirrorCount = 0;

	cin >> K;

	while (number <= K)
	{
		//копируем перебираемое число для отзеркаливания
		naturalNum = number;
		//делаем зеркальную копию числа
		while (naturalNum > 0)
		{
			digit = naturalNum % 10;
			mirror = mirror * 10 + digit;
			naturalNum /= 10;
		}
		//проверка на равенство зеркальной копии и оригинала
		if (number == mirror)
		{
			mirrorCount++;
		}
		
		mirror = 0;
		number++;
	}

	cout << mirrorCount;
}