/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class base {
    
    protected:
        int i,j;
    
    public:
        void set(int a, int b) {
            i = a;
            j = b;
        }
        
        void show() {
            cout << i << " " << j << "\n";
        }
};

class derieved1: private base {
    
    int k;
    
    public:
        void setk() {
            k = i*j;
        }
        
        void showk() {
            cout << k << "\n";
        }
};

class derieved2: public derieved1 {
    
    int m;
    
    public:
        void setm() {
            m = i-j;
        }
        
        void showm() {
            cout << m << "\n";
        }
};

using namespace std;

int main()
{
    derieved1 ob1;
    dereived2 ob2;
    
    ob1.set(1,2);
    ob1.show();
    ob2.set(3,4);
    ob2.show();
    
    return 0;
}
