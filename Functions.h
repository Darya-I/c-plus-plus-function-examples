#pragma once
#ifndef Functions
#define Functions


	double			Calculate_y(double x);																			//������ �

	double			ConvertToUSD(double rub);																		//����������� ������ � �������

	void			CalculateByReference(double& x, double& y, int& quadrant, double& vectorLength);				//�������� � ����� ������� � ������� ������

	void			CalculateByPointer(double* x, double* y, int* quadrant, double* vectorLength);					//�������� � ����� ������� � ������� ����������



#endif 
