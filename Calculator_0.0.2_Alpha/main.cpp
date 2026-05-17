#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int x1 = 0 , x2 = 0 , Act = 0 , Ans = 0;

	std::cout << "Добропожаловать в калькулятор V0.0.2 Alpha!" << std::endl << "Введите ваши 2 числа";
	std::cin >> x1 >> x2;

	std::cout << "Выберите действие" << std::endl << "1 - сумма" << std::endl << "2 - Вычитание" << std::endl << "3 - Умножение" << std::endl << "4 - Деление" << std::endl;
	std::cin >> Act;

	if (Act != 1 && Act != 2 && Act != 3 && Act != 4) {
		std::cout << "Пожалуйста , выберите действительную операцию!";
	}
	else if (Act == 1) {
		Ans = x1 + x2;
		std::cout << "Ответ:" << Ans << std::endl;
	}
	else if (Act == 2) {
		Ans = x1 - x2;
		std::cout << "Ответ:" << Ans << std::endl;
	}
	else if (Act == 3) {
		Ans = x1 * x2;
		std::cout << "Ответ:" << Ans << std::endl;
	}
	else if (Act == 4) {
		if (x2 != 0) {
			double AnsW = (double)x1 / x2;
			std::cout << "Ответ:" << AnsW << std::endl;
		}
		else {
			std::cout << "НА 0 ДЕЛИТЬ НЕЛЬЗЯ!!!";
		}
	}
	std::cout << "Приятного вечера!";
	return 0;
}