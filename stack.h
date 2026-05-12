#ifndef STACK_H
#define STACK_H

#include <exception>
#include <iostream>

template <typename T> class Stack {
public:
    Stack() = default;
    // ~Stack();
    void push(const T &item);
    T pop();
    bool is_empty() const {
        return head == nullptr;
    }

private:
    class Node {
    public:
        T item {};
        Node *next {};
        Node(const T &item) : item { item }, next { nullptr } {};
    };

    Node *head {};
};

#include "stack.hpp"

#endif