#include "isKPeriodic.h"

bool isKPeriodic(const std::string& str, const int k) {
	//Проверка: корректность введения k (должно быть больше 0)
	if (k <= 0) {
		std::cout << "Проверка на кратность невозможна, число должно быть больше 0" << std::endl;
		return false;
	}
	//Проверка: длина строки должна быть кратна k и не равна k, так как тогда кратность будет = 0
	if (str.size() % k != 0 || str.size() == k) {
		return false;
	}
	//Проверка на кратность: сравнение первых k символов с последующими блоками k размера
	for (int i = k; i < str.size(); i++) {
		if (str[i % k] != str[i]) {
			return false;
		}
	}
	return true;
}