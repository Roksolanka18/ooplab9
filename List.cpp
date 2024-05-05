#include<iostream>
#include "List.h"
#include "Exceptions.h"
CDoubleLinkedList::CDoubleLinkedList() : head(nullptr), tail(nullptr), size(0) {}
CDoubleLinkedList::CDoubleLinkedList(double* arr, int length) : head(nullptr), tail(nullptr), size(0) {
  for (int i = 0; i < length; ++i) {
    if (head == nullptr) {
      try
      {
        head = new CElement(arr[i]);
      }
      catch (std::bad_alloc)
      {
        throw LackOfMemoryException();
      }

      tail = head;
    }
    else {
      add_after_elem(tail, arr[i]);
    }

  }
}

CDoubleLinkedList::CDoubleLinkedList(const CDoubleLinkedList& other) noexcept : head(nullptr), tail(nullptr), size(0) {
  CElement* current = other.head;
  while (current != nullptr) {
    add_after_elem(tail, current->data);
    current = current->next;
  }
}
CDoubleLinkedList::CDoubleLinkedList(CDoubleLinkedList&& other) noexcept : head(nullptr), tail(nullptr), size(0) {
  head = other.head;
  tail = other.tail;
  size = other.size;

  other.head = nullptr;
  other.tail = nullptr;
  other.size = 0;
}
CDoubleLinkedList::~CDoubleLinkedList() {
  clear();
}

CDoubleLinkedList& CDoubleLinkedList::operator=(const CDoubleLinkedList& other) noexcept {
  if (this == &other)
    return *this;

  clear();

  CElement* current = other.head;
  while (current != nullptr) {
    add_after_elem(tail, current->data);
    current = current->next;
  }
  return *this;
}

CDoubleLinkedList& CDoubleLinkedList::operator=(CDoubleLinkedList&& other) noexcept {
  if (this == &other)
    return *this;

  clear();

  head = other.head;
  tail = other.tail;
  size = other.size;

  other.head = nullptr;
  other.tail = nullptr;
  other.size = 0;

  return *this;
}

void CDoubleLinkedList::add_at_index(int index, double value)
{
  if (index < 0 || index > size) {
    return;
  }

  CElement* newNode = new CElement(value);

  if (index == 0) {
    newNode->next = head;
    if (head != nullptr)
      head->prev = newNode;
    head = newNode;
    if (tail == nullptr)
      tail = newNode;
  }
  else if (index == size) {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  else {
    CElement* current = head;
    for (int i = 0; i < index - 1; ++i) {
      current = current->next;
    }
    newNode->next = current->next;
    current->next->prev = newNode;
    current->next = newNode;
    newNode->prev = current;
  }

  size++;
}

/*void CDoubleLinkedList::add_after_elem(CElement* prevNode, double value) {

  CElement* current = head;
  bool doesExists = true;
  while (current != nullptr)
  {
    if (current != prevNode)
    {
      doesExists = false;
    }
    else
    {
      doesExists = true;
      break;
    }
    current = current->next;
  }
  if (!doesExists)
  {
    return;
  }

  if (prevNode == nullptr) {
    // якщо попередн≥й вузол Ї нульовим вказ≥вником, то додаЇмо новий елемент €к перший елемент списку
    CElement* newNode = nullptr;
    try
    {
      newNode = new CElement(value);

    }
    catch (std::bad_alloc)
    {
      throw LackOfMemoryException();
    }
    if (head == nullptr) {
      // якщо список порожн≥й, обидва вказ≥вники head ≥ tail вказують на новий вузол
      head = newNode;
      tail = newNode;
    }
    else {
      // ≤накше, новий вузол стаЇ першим елементом, а його наступником Ї попередн≥й перший елемент
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
    size++;
  }
  else {
    // якщо попередн≥й вузол не Ї нульовим вказ≥вником, додаЇмо новий елемент п≥сл€ нього
    CElement* newNode = nullptr;
    try
    {
      newNode = new CElement(value);
    }
    catch (std::bad_alloc)
    {
      throw LackOfMemoryException();
    }
    newNode->next = prevNode->next;
    if (prevNode->next != nullptr)
      prevNode->next->prev = newNode;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    if (newNode->next == nullptr)
      tail = newNode;
    size++;
  }
}*/

double CDoubleLinkedList::get_left() const
{
  if (head != nullptr)
    return head->data;
  else
    throw EmptyListException();
  return 0;
}

double CDoubleLinkedList::get_right() const
{
  if (tail != nullptr)
    return tail->data;
  else
    throw EmptyListException();
  return 0;
}

int CDoubleLinkedList::get_size() noexcept
{
  size = 0;
  CElement* current = head;
  while (current != nullptr) {
    size++;
    current = current->next;
  }
  return size;
}

double CDoubleLinkedList::get_average() const {
  if (size == 0)
    throw EmptyListException();
  double sum = 0;
  CElement* current = head;
  while (current != nullptr) {
    sum += current->data;
    current = current->next;
  }
  return sum / size;
}

void CDoubleLinkedList::bubble_sort() noexcept {
  if (size <= 1)
    return;
  bool swapped;
  CElement* ptr1;
  CElement* lptr = nullptr;
  do {
    swapped = false;
    ptr1 = head;
    while (ptr1->next != lptr) {
      if (ptr1->data > ptr1->next->data) {
        double temp = ptr1->data;
        ptr1->data = ptr1->next->data;
        ptr1->next->data = temp;
        swapped = true;
      }
      ptr1 = ptr1->next;
    }
    lptr = ptr1;
  } while (swapped);
}

void CDoubleLinkedList::clear() noexcept {
  CElement* current = head;
  while (current != nullptr) {
    CElement* next = current->next;
    delete current;
    current = next;
  }
  head = nullptr;
  tail = nullptr;
  size = 0;
}

CDoubleLinkedList CDoubleLinkedList::operator+(const CDoubleLinkedList& other) const {
  CDoubleLinkedList result;
  CElement* list1 = this->head;
  CElement* list2 = other.head;

  if (this->size != other.size)
    throw DifferentSizeException();

  while (list1 != nullptr && list2 != nullptr) {
    double sum = list1->data + list2->data;
    result.add_after_elem(result.tail, sum);
    list1 = list1->next;
    list2 = list2->next;
  }
  return result;
}

CDoubleLinkedList CDoubleLinkedList::operator-(const CDoubleLinkedList& other) const {
  CDoubleLinkedList result;
  CElement* list1 = this->head;
  CElement* list2 = other.head;

  if (this->size != other.size)
    throw DifferentSizeException();

  while (list1 != nullptr && list2 != nullptr) {
    double dif = list1->data - list2->data;
    result.add_after_elem(result.tail, dif);
    list1 = list1->next;
    list2 = list2->next;
  }
  return result;
}


CDoubleLinkedList CDoubleLinkedList::operator*(double scalar) const noexcept {
  CDoubleLinkedList result;
  CElement* current = head;
  while (current != nullptr) {
    result.add_after_elem(result.tail, current->data * scalar);
    current = current->next;
  }
  return result;
}

std::istream& operator>>(std::istream& is, CDoubleLinkedList& list) {
  double value;
  try
  {
    is >> value;
    list.add_after_elem(list.tail, value);
  }
  catch (std::istream::failure)
  {
    throw IS_OS_ErrorException();
  }
  return is;
}

std::ostream& operator<<(std::ostream& os, const CDoubleLinkedList& list) {
  CElement* current = list.head;
  while (current != nullptr) {
    try
    {
      os << current->data << " ";
    }
    catch (std::ostream::failure)
    {
      throw IS_OS_ErrorException();
    }
    current = current->next;
  }
  return os;
}

double& CDoubleLinkedList::operator[](int index) {
  if (index >= size)
  {
    throw OutOfRangeException();
  }
  CElement* current = head;
  for (int i = 0; i < index; ++i) {
    current = current->next;
  }
  return current->data;


}