#include <iostream>

// Class template Triad
template<typename T>
class Triad {
public:
    T first;
    T second;
    T third;

    Triad(T a, T b, T c) : first(a), second(b), third(c) {}
};

template<typename T>
void print(const Triad<T>& t) {
    std::cout << "[" << t.first << ", " << t.second << ", " << t.third << "]";
}

int main() {
    Triad t1{ 1, 2, 3 }; 
    print(t1);

    Triad t2{ 1.2, 3.4, 5.6 }; 
    print(t2);

    return 0;
}
