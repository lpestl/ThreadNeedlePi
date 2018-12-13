#pragma once
ref class ThreadTable
{
private:
	int min_x;
	int min_y;
	int max_x;
	int max_y;
	float step;
	float *threadsX;
	int count;
public:
	ThreadTable();
	ThreadTable(float len, int min_x, int min_y, int max_x, int max_y);
	~ThreadTable();
	int getMinY();
	int getMaxY();
	float getNumThreadX(int n);
	int getCount();
};

