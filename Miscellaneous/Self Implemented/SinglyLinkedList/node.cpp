#include "node.h"
#include <bits/stdc++.h>
using namespace std;

template <class T>
Node<T>::Node(T data)
{
    this->data = data;
    this->next = NULL;
}
void Node<T>::PrintNode()
{
    cout<<"Data: "<<data<<"\nNext* = "<<*next;
}
