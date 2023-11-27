#include "Functions.h"
#include <cmath>


double Calculate_y(double x) {
	return ((1 + sin(4)) / (4 + sin(1)) + (7 + sin(5)) / (5 + sin(x)) + (3 + sin(2)) / (2 + sin(3)));
}