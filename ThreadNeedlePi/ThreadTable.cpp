#include "ThreadTable.h"


ThreadTable::ThreadTable()
{
	min_x = 0;
	min_y = 0;
	max_x = 0;
	max_y = 0;
	count = 0;
	step = 1;
	threadsX = new float(1);
}

ThreadTable::ThreadTable(float len, int mi_x, int mi_y, int ma_x, int ma_y) {
	min_x = mi_x;
	min_y = mi_y;
	max_x = ma_x;
	max_y = ma_y;
	step = len;
	count = (max_x - min_x) / step + 1;
	
	threadsX = new float[count];
	threadsX[0] = min_x;// +step;
	for (int i = 1; i < count; i++) {
		threadsX[i] = threadsX[i-1] + step;
	}
}

ThreadTable::~ThreadTable() {
	delete threadsX;
}

int ThreadTable::getMinY() {
	return min_y;
}

int ThreadTable::getMaxY() {
	return max_y;
}

float ThreadTable::getNumThreadX(int n) {
	if ((n < 0) || (n >= count))
		return -1;
	else
		return threadsX[n];
}

int ThreadTable::getCount() {
	return count;
}