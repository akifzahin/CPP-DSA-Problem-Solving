#include "node.h"
#include <bits/stdc++.h>
using namespace std;

template <class T>
Node<T>::Node(T data)
{
    this->data = data;
    next = new T;
}
void Node<T>::PrintNode()
{
    cout<<"Data: "<<data<<"\nNext* = "<<*next;
}
