#include "node.h"



/*
Constructors
*/

template <class T>
Node<T>::Node(){

}

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
