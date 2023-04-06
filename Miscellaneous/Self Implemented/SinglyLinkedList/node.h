#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
template <class T>
class Node
{
private:
    T data;
    Node<T>* next;
public:
    Node(T,T*);
    ~Node();
    void PrintNode();
};


#endif // NODE_H_INCLUDED
