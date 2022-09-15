#ifndef QUEUE_H
#define QUEUE_H

class Queue {
 
public:
    Queue();
    ~Queue();
 
    int dequeue();
    void enqueue(int const& x);
    int peek();
    int getSize();
    bool isEmpty();

private:
    struct Node
    {
        int Element;
        Node * next;
    };
    
    int size;
    Node * first;
    Node * last;

    void createNode(Node* & n, int const& x);
};

#endif