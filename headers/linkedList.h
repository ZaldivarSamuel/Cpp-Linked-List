

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "node.h"

template <class T>
class MyLinkedList{
private:

  Node<T> *head;
  Node<T> *tail;

  int listLength;

public:

  /*
  Constructors
  */
  MyLinkedList<T>();

  /*
  List Manipulation
  */

  void insert(Node<T> *node);


  /*
  Output
  */
  void printList();
  Node<T>* getNodeAt(int index);
};

#include "linkedList.tpp"

#endif
