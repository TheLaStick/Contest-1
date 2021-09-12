/* Программа нахождения равенства двух строк */

#include <iostream>
using namespace std;

bool Compare(std::string s1, string s2) {
    if (s1.length() != s2.length()) {
        return 0;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    string first, second;

    cin >> first;
    cin >> second;

    cout << (Compare(first, second) ? "yes" : "no");
}