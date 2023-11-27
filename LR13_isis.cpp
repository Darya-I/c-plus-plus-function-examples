#include "Functions.h"
#include <iostream>
#include <cmath>


using namespace std;

int main()
{

	system("chcp 1251");
	int choice;
	
	do
	{
		cout << "\n";
		cout << "-------------- Меню ----------------" << endl;
		cout << " 1. Расчет значения у по формуле " << endl;
		cout << " 2. Перевод рублей в доллары " << endl;
		cout << " 3. Определение квадранта и длины вектора по координатам " << endl;
		cout << " 4. Выход " << endl;
		cout << " Выберите действие: ";
		cin >> choice;
		cout << "\n";

		switch (choice) {
		case 1: {
			double y;
			y = Calculate_y(7);
			cout << " Результат вычисления у: " << y << endl;
			cout << "\n";
			break;
		}
		
		case 2: {
			double rub;
			cout << " Введите значение в рублях: ";
			cin >> rub;
			cout << " Ваше значение в долларах: " << ConvertToUSD(rub) << "$";
			cout << "\n";
			break;

		}
		
		case 3: {
			double x1 = 3.5; 
			double y1 = 4.0; 
			int quadrant1;
			double vectorLength1;
			CalculateByReference(x1, y1, quadrant1, vectorLength1);
			cout << " Номер квадранта для точки (" << x1 << ", " << y1 << "): " << quadrant1 << endl;
			cout << " Длина вектора для точки (" << x1 << ", " << y1 << "): " << vectorLength1 << endl;
			cout << "\n";
			double x2 = -2.0; // Другие заданные координаты x
			double y2 = -5.0; // Другие заданные координаты y
			int quadrant2;
			double vectorLength2;

			CalculateByPointer(&x2, &y2, &quadrant2, &vectorLength2);
			cout << " Номер квадранта для точки (" << x2 << ", " << y2 << "): " << quadrant2 << endl;
			cout << " Длина вектора для точки (" << x2 << ", " << y2 << "): " << vectorLength2 << endl;
			cout << "\n";
			break;
		}

		case 4: {
			cout << " Программа завершена";
			cout << "\n";
			break;
		}

		default: {
			// Некорректный выбор
			cout << "Некорректный выбор. Повторите попытку." << endl;
			cout << "\n";
			break;
		}

		}
	} while (choice!=4);

	return 0;
}

