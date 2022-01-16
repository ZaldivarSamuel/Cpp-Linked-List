#include<iostream>
#include "linkedList.h"
using namespace std;

int main(){

  MyLinkedList<int> list;

  Node<int> *node1 = new Node<int>(10);
  Node<int> *node2 = new Node<int>(20);
  Node<int> *node3 = new Node<int>(30);

  list.insert(node1);
  list.insert(node2);
  list.insert(node3);

  list.printList();

  cout << list.getNodeAt(2)->getData() << endl;
}
