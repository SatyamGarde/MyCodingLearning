#include<iostream>
using namespace std;


class Complex
{
    int p, q;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << p << " + " << q << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    p = x;
    q = y;
    // cout<<"Hello world";
}

int main(){
    // Implicit call
    Complex p(4, 6);
    p.printNumber();

    // Explicit call
    Complex q = Complex(5, 7);
    q.printNumber();

    return 0;
}
