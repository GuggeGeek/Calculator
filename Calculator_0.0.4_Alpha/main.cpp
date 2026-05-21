#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <vector>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	double Ans = 0;
	int quantity = 0;

	while (true) {

		std::cout << "Добро пожаловать в калькулятор V0.0.4 Alpha!" << std::endl << "Введите Количество чисел , а затем через пробел ваши числа." << std::endl << "Пример: 5 10 20 30 40 50" << std::endl;
		std::cin >> quantity;
		std::vector <double> array_numbers(quantity);
		for (int i = 0; quantity > i; i++) {
			std::cin >> array_numbers[i];
		}
		quantity = quantity - 1;
		std::cout << "Введите пожалуйста знаки, в виде порядка чисел через пробел (количество знаков указывать не нужно!), где" << std::endl << "1 - сумма" << std::endl << "2 - Вычитание" << std::endl << "3 - Умножение" << std::endl << "4 - Деление" << std::endl;
		std::vector <int> array_sign(quantity);
		for (int i = 0; i < quantity; i++) {
			std::cin >> array_sign[i];
		}


		for (int i = 0; i < quantity; i++) {
			if (array_sign[i] == 3) {
				array_numbers[i] = array_numbers[i] * array_numbers[i + 1];
				array_numbers.erase(array_numbers.begin() + i + 1);
				array_sign.erase(array_sign.begin() +i);
				i--;
				quantity--;
			}
			if (array_sign[i] == 4) {
				if (array_numbers[i + 1] == 0) {
					std::cout << "На 0 делить нельзя!" << std::endl;
					continue;
				}
				else {
					array_numbers[i] = array_numbers[i] / array_numbers[i + 1];
					array_numbers.erase(array_numbers.begin() + i + 1);
					array_sign.erase(array_sign.begin() + i);
					i--;
					quantity--;
				}
			}
		}
		Ans = array_numbers[0];
		for (int i = 0; quantity > i; i++) {
			if (array_sign[i] == 1) {
				Ans = Ans + array_numbers[i + 1];
			}
			if (array_sign[i] == 2) {
				Ans = Ans - array_numbers[i + 1];
			}
		}
		std::cout << Ans << std::endl;
		
		std::cout << "Продолжаем считать? ( 1 - Да )( 2 - Нет )";
		int again = 0;
		std::cin >> again;
		if (again == 2) {
			break;
		}
		Ans = 0;
		quantity = 0;
	}
	return 0;
}