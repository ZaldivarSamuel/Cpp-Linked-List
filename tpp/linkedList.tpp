#include <iostream>
#include "linkedList.h"

using namespace std;

/*
Constructors
*/
template <class T>
MyLinkedList<T>::MyLinkedList(){

  head = NULL;
  tail = NULL;
}


/*
List Manipulation
*/
template <class T>
void MyLinkedList<T>::insert(Node<T> *newNode){

  /*
  List is empty. Both head and tail is set to the newNode
  */
  if(head == NULL){
    head = newNode;
    tail = newNode;
  }
  /*
  List is not empty.
  The last node points to the newNode.
  newNode points to NULL.
  Tail points to newNode
  */
  else{

    tail->next = newNode;
    tail = newNode;
  }
}
