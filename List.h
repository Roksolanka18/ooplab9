#ifndef LIST_H
#define LIST_H
#include <iostream>
#include "Element.h"

class CDoubleLinkedList
{
public:

	CElement* head;
	CElement* tail;
	int size;

	CDoubleLinkedList();
	CDoubleLinkedList(double* arr, int length);
	CDoubleLinkedList(const CDoubleLinkedList& other) noexcept;
	CDoubleLinkedList(CDoubleLinkedList&& other) noexcept;
	CDoubleLinkedList& operator=(const CDoubleLinkedList& other) noexcept;
	CDoubleLinkedList& operator=(CDoubleLinkedList&& other) noexcept;
	~CDoubleLinkedList() noexcept;

  void add_at_index(int index, double value);
	void add_after_elem(CElement* prevNode, double value);
	double get_right()const;
	double get_left()const;
	int get_size() noexcept;
	double get_average()const;
	void bubble_sort() noexcept;
	void clear() noexcept;


	CDoubleLinkedList operator+(const CDoubleLinkedList& other) const;
	CDoubleLinkedList operator-(const CDoubleLinkedList& other) const;
	CDoubleLinkedList operator*(double scalar) const noexcept;
	friend std::istream& operator>>(std::istream& is, CDoubleLinkedList& list);
	friend std::ostream& operator<<(std::ostream& os, const CDoubleLinkedList& list);
	double& operator[](int index);

};
#endif