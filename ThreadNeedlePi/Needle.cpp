#include "Needle.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

Needle::Needle()
{
	length = 1;
	angle = 0;
	m_nx = 0;
	m_ny = 0;
	m_kx = 1;
	m_ky = 0;
}

Needle::Needle(float len, int min_x, int min_y, int max_x, int max_y) {
	creating(len, min_x, min_y, max_x, max_y);
	//length = len;
	////randomize();
	//srand(time(NULL));
	//angle = rand() % 360;//random(360);
	//
	//srand(time(NULL));
	//m_nx = rand() % (max_x - min_x) + min_x;
	//srand(time(NULL));
	//m_ny = rand() % (max_y - min_y) + min_y;

	//m_kx = m_nx + sin((float)angle) * len;
	//m_ky = m_ny + cos((float)angle) * len;
}

Needle::~Needle() {}

void Needle::creating(float len, int min_x, int min_y, int max_x, int max_y) {
	length = len;
	//randomize();
	//srand(time(NULL));
	angle = rand() % 360;//random(360);

	//srand(time(NULL));
	m_nx = rand() % (max_x - min_x) + min_x;
	//srand(time(NULL));
	m_ny = rand() % (max_y - min_y) + min_y;

	m_kx = m_nx + sin((float)angle) * len;
	m_ky = m_ny + cos((float)angle) * len;
}

int Needle::getStartX() {
	return (int)m_nx;
}

int Needle::getStartY() {
	return (int)m_ny;
}

int Needle::getFinX() {
	return (int)m_kx;
}

int Needle::getFinY() {
	return (int)m_ky;
}

bool Needle::checkedInto(int min_x, int min_y, int max_x, int max_y) {
	bool checked = true;
	
	if (m_kx < min_x) {
		m_nx += min_x - m_kx;
		m_kx += min_x - m_kx;
		checked = false;
	}

	if (m_ky < min_y) {
		m_ny += min_y - m_ky;
		m_ky += min_y - m_ky;
		checked = false;
	}

	if (m_kx > max_x) {
		m_nx -= m_kx - max_x;
		m_kx -= m_kx - max_x;
		checked = false;
	}

	if (m_ky > max_y) {
		m_ny -= m_ky - max_y;
		m_ky -= m_ky - max_y;
		checked = false;
	}

	return checked;
}