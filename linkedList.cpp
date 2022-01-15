#include<iostream>
#include "node.h"
using namespace std;

int main(){

  Node<int> n(10);
  cout << n.getData() << endl;

  n.setData(20);
  cout << n.getData() << endl;
}
