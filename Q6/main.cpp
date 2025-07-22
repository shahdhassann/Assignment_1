#include <iostream>

using namespace std;

int main()
{
    // Q6. Take three numbers and print the largest.

int x , y , z , large ;
cout << "Enter Your Numbers:" <<endl ;
cin >> x ;
cin >> y ;
cin >> z ;
if (x > y ){

    if ( x > z ) {
            cout << "The largest Number is " << x <<endl ;
   }
}
else if(y > z){
        cout << "The largest Number is " << y <<endl ;
    }
else{
        cout << "The largest Number is " << z <<endl ;
    }

    return 0;
}
