/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class ABC {
    public:
        void display() {
            cout << "this is parent class\n";
        }
};

class XYZ: public ABC {
    public:
        void display() {
            cout << "this is child class\n";
        }
};
int main()
{
    XYZ x;
    
    x.display();
    x.ABC::display();

    return 0;
}
