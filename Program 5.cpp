/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Base {
    
    int x;
    
    public:
        Base() {
            cout << "base default constructor\n";
        }
};

class Derieved: public Base {
    
    int y;
    
    public:
        Derieved() {
            cout << "derieved default constructor\n";
        }
        
        Derieved(int i) {
            cout << "derieved paremeterized constructor\n";
        }
};

int main()
{
    Base b;
    Derieved d1;
    Derieved d2(10);

    return 0;
}
