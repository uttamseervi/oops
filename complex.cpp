#include <iostream>
using namespace std;

class complex {
public:
    int real, img;

    void getdata(int a, int b);
    void printdata();

    // Function to add an integer and a complex number
    complex add(int a);

    // Function to add two complex numbers
    complex add(const complex& s2);
};

void complex::getdata(int a, int b) {
    real = a;
    img = b;
}

void complex::printdata() {
    cout << "Complex number = " << real << " + " << img << "i" << endl;
}

complex complex::add(int a) {
    complex res;
    res.real = real + a;
    res.img = img;
    return res;
}

complex complex::add(const complex& s2) {
    complex res;
    res.real = real + s2.real;
    res.img = img + s2.img;
    return res;
}

int main() {
    complex s1, s2, result1, result2;

    s1.getdata(2, 3);
    s2.getdata(1, 2);

    result1 = s1.add(5);
    result2 = s1.add(s2);

    cout << "Result 1: ";
    result1.printdata();

    cout << "Result 2: ";
    result2.printdata();

    return 0;
}
