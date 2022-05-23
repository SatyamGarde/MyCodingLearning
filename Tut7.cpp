#include <iostream>
using namespace std;
int c = 45;
int main()
{ //*********Build in Data types**********
    // int a, b, c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is " << endl;
    // cout << c;
    // cout << "\nThe global c is " << ::c; //Scope resolution operator

    //*********Float, double and long double literals********
    float e = 34.4F;       // f  for flote
    long double d = 34.4l; // l for double

    cout << "The Value of d is" << d << endl
         << "The Value of e is" << e << endl;
    cout << "The size of 34.4F  " << sizeof(34.4F) << endl;
    cout << "The size of 34.4   " << sizeof(34.4) << endl;
    cout << "The size of 34.4L  " << sizeof(34.4L) << endl;
    cout << "The size of 34.4f  " << sizeof(34.4f) << endl;
    cout << "The size of 34.4l  " << sizeof(34.4l) << endl;

    //*********Reference Variables********
     //  Elon---> Tesla CEO---> Spacex CEO
    float x= 43.5;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;

     // ***********Typecasting************
    int a = 45;
    float b = 43.9;
    cout << "The value of a is\n" << (float)a;
    cout << "The value of a is\n" << float(a);

    cout << "\nThe value of b is\n" << (int)b;
    cout << "\nThe value of b is\n"<< int(b);

    int c = int(b);
    cout<<"The expression is \n"<<a + b<<endl;
    cout << "The expression is \n" << a + (int)b;
    cout<<"The expression is \n"<<a + (int)b<<endl;

    return 0;
}