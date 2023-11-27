#include "Functions.h"
#include <cmath>

void CalculateByReference(double& x, double& y, int& quadrant, double& vectorLength) {

    if (x > 0 && y > 0) {
        quadrant = 1;
    }
    else if (x < 0 && y > 0) {
        quadrant = 2;
    }
    else if (x < 0 && y < 0) {
        quadrant = 3;
    }
    else if (x > 0 && y < 0) {
        quadrant = 4;
    }
    else {
        quadrant = 0; // лежит на оси
    }

    vectorLength = sqrt(x * x + y * y);

}

void CalculateByPointer(double* x, double* y, int* quadrant, double* vectorLength) {

    if (*x > 0 && *y > 0) {
        *quadrant = 1;
    }
    else if (*x < 0 && *y > 0) {
        *quadrant = 2;
    }
    else if (*x < 0 && *y < 0) {
        *quadrant = 3;
    }
    else if (*x > 0 && *y < 0) {
        *quadrant = 4;
    }
    else {
        *quadrant = 0; // лежит на оси
    }

    *vectorLength = sqrt((*x) * (*x) + (*y) * (*y));

}