#ifndef ELEMENT_H
#define ELEMENT_H
class CElement
{
public:
	double data;
	CElement* next;
	CElement* prev;
	CElement(double value) : data(value), next(nullptr), prev(nullptr) {}
};
#endif
