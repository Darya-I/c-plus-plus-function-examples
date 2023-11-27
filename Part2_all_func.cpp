#include "Functions.h"

double CalculateMax(const std::vector<ComputerAccounting>& comps) {
	
	if (comps.empty()) {
		// Если массив продаж пуст, вернем 0 как отсутствие данных
		return 0;
	}

	double maxFreq = comps[0].cpuFreq;
	for (int i = 1; i < comps.size(); i++) {
		if (comps[i].cpuFreq > maxFreq) {
			maxFreq = comps[i].cpuFreq;
		}
	}
	
	return maxFreq;
 
}