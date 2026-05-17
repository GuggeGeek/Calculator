#include <iostream>
#include <Windows.h>
 
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int x1 = 0, x2 = 0 , Act = 0;
	
	std::cout << "Добропожаловать в калькулятор V0.0.1 Alpha!" << std::endl << "Введите ваши 2 числа";
	std::cin >> x1 >> x2;

	std::cout << "Выберите действие" << std::endl << "1 - сумма" << std::endl << "2 - Вычитание" << std::endl << "3 - Умножение" << std::endl << "4 - Деление" << std::endl;
	std::cin >> Act;

	if (Act != 1 && Act != 2 && Act != 3 && Act != 4 ) {
		std::cout << "Пожалуйста , выберите действительную операцию!";
	}
	else if (Act == 1) {
		int Ans = x1 + x2;
		std::cout << "Ответ:" << Ans << std::endl;
	}
	else if (Act == 2) {
		int Ans = x1 - x2;
		std::cout << "Ответ:" << Ans << std::endl;
	}
	else if (Act == 3) {
		int Ans = x1 * x2;
		std::cout << "Ответ:" << Ans << std::endl;
	}
	else if (Act == 4) {
		if (x2 != 0) {
			std::cout << "Ответ:" << x1 / x2 <<  std::endl;
		}
		else {
			std::cout << "НА 0 ДЕЛИТЬ НЕЛЬЗЯ!!!";
		}
	}
	std::cout << "Приятного вечера!";
	return 0;
}