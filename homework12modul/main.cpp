#include<iostream>
#include<string>
#include "isKPeriodic.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	const int k = 3;
	string str = "abcabcabcabc";
	bool result = isKPeriodic(str, k);
	if (result)
		cout << "Строка кратна" << endl;
	else
		cout << "Строка не кратна" << endl;
}