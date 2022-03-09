/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class A {
    public:
        int i;
};

class B: virtual public A {
    public:
        int j;
};

class C: public virtual A {
    public:
        int k;
};

class D: public B, public C {
    public:
        int sum;
};

int main()
{
    D obj1;
    
    obj1.i = 10;
    obj1.j = 20;
    obj1.k = 30;
    
    obj1.sum = obj1.i + obj1.j + obj1.k;
    
    cout << obj1.sum;
    // cout << obj1.j << obj1.k;

    return 0;
}
