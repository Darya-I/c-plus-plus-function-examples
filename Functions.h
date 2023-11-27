#pragma once
#ifndef Functions
#define Functions


	double			Calculate_y(double x);																			//Расчет у

	double			ConvertToUSD(double rub);																		//Конвертация рублей в доллары

	void			CalculateByReference(double& x, double& y, int& quadrant, double& vectorLength);				//Квадрант и длина вектора с помощью ссылок

	void			CalculateByPointer(double* x, double* y, int* quadrant, double* vectorLength);					//Квадрант и длина вектора с помощью указателей



#endif 
