#include "node.cpp"
template <class T>
Node::Node(T data, T* next)
{
    this->data = data;
    this->*next = *next;
}
void Node::PrintNode()
{
    cout<<"Data: "<<data<<"\nNext* = "<<*next;
}
