#pragma once
class Needle
{
private:
	float length;
	int angle;
	float m_nx;
	float m_ny;
	float m_kx;
	float m_ky;
public:
	Needle();
	Needle(float len, int min_x, int min_y, int max_x, int max_y);
	~Needle();
	bool checkedInto(int min_x, int min_y, int max_x, int max_y);
	void creating(float len, int min_x, int min_y, int max_x, int max_y);
	int getStartX();
	int getStartY();
	int getFinX();
	int getFinY();
};

