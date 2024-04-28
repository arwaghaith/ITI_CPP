#include <iostream>

using namespace std;

template <typename T>
class PointerUtility {
private:
    T* ptr;

public:
    PointerUtility(T* ptr) : ptr(ptr) {}

    T getValue() const {
        return *ptr;
    }

    bool isNull() const {
        return ptr == nullptr;
    }

    friend std::ostream& operator<<(std::ostream& os, const PointerUtility<T>& myptr) {
        os << myptr.getValue();
        return os;
    }

    explicit operator bool() const {
        return ptr != nullptr;
    }
};

template <typename T>
class PointerUtility<T*> {
private:
    T* ptr;

public:
    PointerUtility(T* ptr) : ptr(ptr) {}

    T getValue() const {
        return *ptr;
    }

    bool isNull() const {
        return ptr == nullptr;
    }

    friend std::ostream& operator<<(std::ostream& os, const PointerUtility<T*>& myptr) {
        os << myptr.getValue();
        return os;
    }

    explicit operator bool() const {
        return ptr != nullptr;
    }
};

int main() {
    int* ptr = new int(10);
    PointerUtility<int> myptr(ptr);
    if (myptr) {
        cout << myptr << endl;
    } else {
        cout << "Pointer is null" << endl;
    }

    PointerUtility<int*> myptr2(ptr);
    if (myptr2) {
        cout << myptr2.getValue() << endl;
    } else {
        cout << "Pointer is null" << endl;
    }

    delete ptr;
    return 0;
}
