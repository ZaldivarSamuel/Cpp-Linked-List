

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

template <class T>
class MyLinkedList{
private:

  Node<T> *head;
  Node<T> *tail;

public:

  /*
  Constructors
  */
  MyLinkedList<T>();

  /*
  List Manipulation
  */

  void insert(Node<T> *node);

};

#include "linkedList.tpp"

#endif
