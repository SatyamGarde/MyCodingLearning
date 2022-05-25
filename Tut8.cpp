#include <iostream>
using namespace std;
int main()
{
    // int a =45;
    // cout<<"The value of a was"<<a;
    // a =34;
    // cout<<"The value of a is"<<a;

    // constants in c++
    // const int a = 3;
    // cout << "the value of a was" << a;
    // a = 45;  //We get an error becouse we already declared 'a' as a constant
    // cout << "The value of a is" << a;

    //   Manipulators in C++
    // int a = 3, b = 45, c = 20;
    // cout << "The value of a without setw is: " << a << endl;
    // cout << "The value of a without setw is: " << b << endl;
    // cout << "The value of a without setw is: " << c << endl;

    // cout << "The value of a with setw is :" << setw(4) << a << endl;
    // cout << "The value of a with setw is: " << setw(4) << b << endl;
    // cout << "The value of with setw a is:" << setw(4) << c << endl;
         
         //Operator Precedence
         int a =3, b= 4;
         //int c = (a*5)+b;          search operator precedence on google
         int c = ((((a*5)+b)-45)+87);
         cout<<c;
         


    return 0;
}
