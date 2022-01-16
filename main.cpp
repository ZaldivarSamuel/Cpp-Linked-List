#include<iostream>
#include "linkedList.h"
using namespace std;

int main(){

  MyLinkedList<int> list;

  Node<int> *node1 = new Node<int>(10);
  Node<int> *node2 = new Node<int>(20);

  list.insert(node1);
  list.insert(node2);

  list.printList();
}
