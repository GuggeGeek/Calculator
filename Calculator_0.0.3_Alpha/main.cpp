#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int  Act = 0;
	double x1 = 0, x2 = 0, Ans = 0;

	while( true ) {

		std::cout << "Добро пожаловать в калькулятор V0.0.3 Alpha!" << std::endl << "Введите ваши 2 числа";
		std::cin >> x1 >> x2;

		std::cout << "Выберите действие" << std::endl << "1 - сумма" << std::endl << "2 - Вычитание" << std::endl << "3 - Умножение" << std::endl << "4 - Деление" << std::endl << "5 - возведение в степень" << std::endl;
		std::cin >> Act;

		if (Act != 1 && Act != 2 && Act != 3 && Act != 4 && Act != 5) {
			std::cout << "Пожалуйста , выберите действительную операцию!";
		}
		else if (Act == 1) {
			Ans = x1 + x2;
			std::cout << "Ответ:" << std::fixed << std::setprecision(3) << Ans << std::endl;
		}
		else if (Act == 2) {
			Ans = x1 - x2;
			std::cout << "Ответ:" << std::fixed << std::setprecision(3) << Ans << std::endl;
		}
		else if (Act == 3) {
			Ans = x1 * x2;
			std::cout << "Ответ:" << std::fixed << std::setprecision(3) << Ans << std::endl;
		}
		else if (Act == 4) {
			if (x2 != 0) {
				Ans = x1 / x2;
				std::cout << "Ответ:" << std::fixed << std::setprecision(3) << Ans << std::endl;
			}
			else {
				std::cout << "НА 0 ДЕЛИТЬ НЕЛЬЗЯ!!!";
			}
		}
		else if (Act == 5) {
			Ans = std::pow(x1, x2);
			std::cout << "Ответ:" << std::fixed << std::setprecision(3) << Ans << std::endl;
		}
		std::cout << "Продолжаем считать? ( 1 - Да )( 2 - Нет )";
		int again = 0;
		std::cin >> again;
		if (again == 2 ) {
			break;
		}

	}
	return 0;
}