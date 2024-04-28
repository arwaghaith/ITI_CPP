#include <iostream>

template<typename T>
class Stack
{
private:
    int size;
    int top;
    T* arr;

public:
    Stack(int size);
    ~Stack();
    void push(T data);
    T pop();
    bool isEmpty();
    bool isFull();
    Stack<T>& operator<<(T data);
    template<typename U>
    friend std::ostream& operator<<(std::ostream& os, const Stack<U>& stack);
};

template <typename T>
Stack<T>::Stack(int size)
{
    this->size = size;
    this->top = 0;
    arr = new T[size];
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] arr;
}

template <typename T>
void Stack<T>::push(T data)
{
    if (isFull())
    {
        std::cout << "Stack is full" << std::endl;
    }
    else
    {
        arr[top] = data;
        top++;
    }
}

template <typename T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        std::cout << "Stack is empty" << std::endl;
        return T();
    }
    else
    {
        top--;
        return arr[top];
    }
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return top == 0;
}

template <typename T>
bool Stack<T>::isFull()
{
    return top == size;
}



template <typename T>
std::ostream& operator<<(std::ostream& os, const Stack<T>& stack)
{
    for (int i = 0; i < stack.top; i++)
    {
        os << stack.arr[i] << " ";
    }
    return os;
}

int main()
{
    Stack<int> s(5);
    s.push(1);
    s.push(2);

    std::cout << s << std::endl;
    
    std::cout << s.pop() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s << std::endl;

    return 0;
}
