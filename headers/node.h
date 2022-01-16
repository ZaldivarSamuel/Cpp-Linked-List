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
    Node();
    Node(T d);

    /*
    Data
    */
    T getData();
    void setData(T);
};

#include "node.tpp"

#endif



/*************
Implimentation
***************/
#include<iostream>
using namespace std;
