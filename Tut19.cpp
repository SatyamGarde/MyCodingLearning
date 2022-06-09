#include <iostream>
using namespace std;
int main()
{
    int age; // 1.  if else- if else ladder
    cout << "Tell me your age" << endl;
    cin >> age;
    // if (age < 18)
    // {
    //     cout << "You can not come to party";
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid and you will get a kid pass to the party";
    // }
    // else if (age>50)
    // {
    //     cout<<"You can not come to party";
    // }
    // else
    // {
    //     cout << "you can come to party";
    // }

    //   2  selection control structure: switch case statements

    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 22";
        break;

    case 2:
        cout << "You are 2";
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}