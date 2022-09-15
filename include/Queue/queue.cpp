#include "queue.h"

Queue::Queue(){
    first = nullptr;
    last = nullptr;
    size = 0;
}

int Queue::dequeue(){
    int toReturn = first->Element;
    Node* it = new Node;
    it = last;
    for(int i=0; i<size-1; i++){
        it = it->next;
    }
    first = it;
    delete it;
    size--;
    return toReturn;
}

void Queue::createNode(Node* & n, int const& x){
    n = new Node;
    n->Element = x;
    n->next = nullptr;
}

void Queue::enqueue(int const& x){
    Node * n;
    createNode(n, x);
    if (size == 0){
        first = n;
    }
    n->next = last;
    last = n;
    size++;
}

int Queue::peek(){
    if (size != 0){
        return first->Element;
    }
    return -1;
}

int Queue::getSize(){
    return size;
}

bool Queue::isEmpty(){
    return size == 0;
}

Queue::~Queue(){
    for(int i = 0; i < size; i++){
        dequeue();
    }
    first = nullptr;
    last = nullptr;
}
