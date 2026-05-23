#ifndef STACK_H
#define STACK_H

#include <exception>
#include <iostream>

template <typename T> class Stack {
public:
    Stack() = default;
    Stack(const Stack<T> &stack);
    ~Stack();
    void push(const T &item);
    T pop();
    bool is_empty() const {
        return head == nullptr;
    }

    Stack<T> &operator=(const Stack<T> &stack);

private:
    class Node {
    public:
        T item {};
        Node *next {};
        Node(const T &item) : item { item }, next { nullptr } {};
    };

    // struct Node {
    //     T item {};
    //     Node *next {};
    //     Node(const T &item) : item { item }, next { nullptr } {
    //     }
    //     Node(const Node &node) {
    //         item = node.item;
    //         next = node.next;
    //     }
    // };

    Node *head {};
};

#include "stack.hpp"

#endif