/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class base {
    
    int i,j;
    
    public:
        void set(int a, int b) {
            i = a;
            j = b;
        }
        
        void show() {
            cout << i << " " << j;
        }
};

class derieved: private base {
    
    int k;
    
    public:
        derieved(int x) {
            k = x;
        }
        
        void showk() {
            cout << k;
        }
};

using namespace std;

int main()
{
    derieved ob(3);
    ob.set(1,2);
    ob.show();
    // ob.showk()

    return 0;
}
