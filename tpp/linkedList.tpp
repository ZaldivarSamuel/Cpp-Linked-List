#include <iostream>
//#include <stdlib.h>
#include "linkedList.h"

using namespace std;

/*
Constructors
*/
template <class T>
MyLinkedList<T>::MyLinkedList(){

  head = NULL;
  tail = NULL;

  listLength = 0;
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

  listLength++;
}

template <class T>
void MyLinkedList<T>::deleteAt(int index){

}

/*
Output
*/
template <class T>
void MyLinkedList<T>::printList(){

  Node<T> *currentNode = head;
  while(currentNode != NULL){
    cout << currentNode->getData() << " -> ";
    currentNode = currentNode->next;
  }
  cout << endl;
}

template <class T>
Node<T>* MyLinkedList<T>::getNodeAt(int index){

  //Check to see if index is in bounds
  if((index < 0 || index > listLength) ||
      listLength == 0){
    cout << "Index: " << index << " is out of bounds." << endl;
    exit(1);
  }

  /*
  Traverse the list until i = index
  */
  Node<T> *currentNode = head;
  int i = 0;

  while(i < index){
    currentNode = currentNode->next;
    i++;
  }

  //Error checking
  if(currentNode == NULL){
    cout << "Node at index: " << index << " is NULL.";
    exit(1);
  }

  return currentNode;
}
