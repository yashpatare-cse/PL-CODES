#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() { cout << "Area of generic shape is unknown." << endl; }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) { length=l; width=w; }
    void area() override { cout << "Area of rectangle = " << length*width << endl; }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) { radius=r; }
    void area() override { cout << "Area of circle = " << 3.1416*radius*radius << endl; }
};

int main() {
    Shape *s1, *s2;
    Rectangle rect(10,5);
    Circle circ(7);
    s1=&rect; s2=&circ;
    cout << " --- Virtual Function Demonstration --- \n";
    s1->area(); s2->area();
    return 0;
}
Here’s the continuation with **UNIT V** so you have the complete set of codes from your document:

---

## **UNIT V**
### Experiment 15 – Swapping Using Templates
```cpp
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    float p = 5.5, q = 9.8;
    char c1 = 'A', c2 = 'Z';

    cout << " --- Swapping Integers --- " << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    cout << "\n --- Swapping Floats --- " << endl;
    cout << "Before swap: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swap: p = " << p << ", q = " << q << endl;

    cout << "\n --- Swapping Characters --- " << endl;
    cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}
