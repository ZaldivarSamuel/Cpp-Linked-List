#ifndef NODE_H
#define NODE_H

template <class T>
class Node{
  private:
    T data;
  public:
    //Pointer to next node in list
    Node *next;

    /*
    Constructors
    */
    Node(T d);

    /*
    Data
    */
    T getData();
    void setData(T);
};

#endif



/*************
Implimentation
***************/
#include<iostream>
using namespace std;

/*
Constructors
*/
template <class T>
Node<T>::Node(T d){
  this->data = d;
  next = NULL;
}

/*
Data
*/
template <class T>
T Node<T>::getData(){
  return this->data;
}

template <class T>
void Node<T>::setData(T d){
  this->data = d;
}
