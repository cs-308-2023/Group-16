#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int n;
    while(true){
        cout<<"Enter a positive number: ";
        cin>>n;
        int res = factorial(n);
        if(res==-1){
            cout<<"Entered number is negative."<<"\n";
        }else{
            cout<<"The factorial of "<<n<<" is "<< res << endl;
            break;
        }
    }

    int x = 56, y = 98;
    cout << "GCD of " << x << " and " << y << " is "
         << gcd(x, y);
    cout<<endl;
    cout << "GCD (with recursive function) of " << x << " and " << y << " is "
         << gcdRec(x, y);
    return 0;
}
