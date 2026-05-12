template <typename T> void Stack<T>::push(const T &item) {
    Node *node { new Node { item } };
    node->next = head;
    head = node;
}

template <typename T> T Stack<T>::pop() {
    if (is_empty())
        throw new std::logic_error { "Stack empty" };
    T item { head->item };
    Node *next { head->next };
    delete head;
    head = next;
    return item;
}