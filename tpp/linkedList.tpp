#include <iostream>
#include "linkedList.h"

template <class T>
T MyLinkedList<T>::test(T t){
  T myT = t + t;

  return myT;
}
