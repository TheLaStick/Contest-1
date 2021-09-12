/* Программа для вывода ряда чисел в обратном порядке */

#include <iostream>
using namespace std;

void ReversePrint(int length) {
    
    if (length > 0) {
        int number;
        cin >> number;
        ReversePrint(--length);
        cout << number << " ";
    }
}

int main()
{
    int length;
    cin >> length;
    ReversePrint(length);
}