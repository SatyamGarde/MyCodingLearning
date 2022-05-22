// There are two header files
// 1. systeam header files : It comes with compiler
#include <iostream>
// 2. user defined header files : this is written by programmer
//#include "This.h" //This will produce an error when This.h will not present in current directry
using namespace std;
int main()
{
     int a = 4, b = 5;
     cout << "Operators in c++";
     cout << "Following are the types operators in c++";
     // Arithmetic operators
     cout << "\nThe value of a + b is\n"
          << a + b;
     cout << "\nThe value of a - b is\n"
          << a - b;
     cout << "\nThe value of a * b is\n"
          << a * b;
     cout << "\nThe value of a / b is\n"
          << a / b;
     cout << "\nThe value of a % b is\n"
          << a % b;
     cout << "\nThe value of a ++  is\n"
          << a++;
     cout << "\nThe value of a --  is\n"
          << a--;
     cout << "\nThe value of --a   is\n"
          << --a;
     cout << endl;

     // assignment operators-->used to assign values to variables
     // int a=3, b=9;
     // char d='d';

     // comparison operator
     cout << "\nfollowing are the comparision operators";
     cout << "\nThe value of a == b is\n"
          << (a == b);
     cout << "\nThe value of a != b is\n"
          << (a != b);
     cout << "\nThe value of a > b is\n"
          << (a > b);
     cout << "\nThe value of a < b is\n"
          << (a < b);
     cout << "\nThe value of a <= b is\n"
          << (a <= b);
     cout << "\nThe value of a >= b is\n"
          << (a >= b);

     // logical operators
     cout << "following are the logical operators";
      cout << "\nThe value of and logical operator is\n"
          << (a == b) && (a < b);
     cout << "\nThe value of or logical operator is\n"
          << (a == b) ||
         (a < b);
     cout << "\nThe value of a != b is\n"
          << (a != b);
     cout << "\nThe value of a > b is\n"
          << (a > b);
     cout << "\nThe value of a < b is\n"
          << (a < b);
     cout << "\nThe value of a <= b is\n"
          << (a <= b);
     cout << "\nThe value of a >= b is\n"
          << (a >= b);
     ;

     return 0;
}