template <typename T> Stack<T>::Stack(const Stack<T> &s) {

    head = new Node { *s.head }; // duplicate head

    Node *_head { head }; // copy curr head

    Node *__head { s.head }; // copy s.head

    while ((__head = __head->next)) {
        _head->next = new Node { *__head }; // duplicate
        _head = _head->next;
    }
}

template <typename T> Stack<T>::~Stack() {
    std::cout << "stack destructor: ";
    while (head) {
        Node *next { head->next };
        std::cout << head->item << ": ";
        std::cout << &(head->item) << " ";
        delete head;
        head = next;
    }
    std::cout << std::endl;
}

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

template <typename T> Stack<T> &Stack<T>::operator=(const Stack<T> &s) {
    Stack<T> _s { s };
    std::swap(head, _s.head);
    return *this;
}

