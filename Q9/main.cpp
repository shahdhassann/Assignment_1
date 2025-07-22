#include <iostream>

using namespace std;

int main()
{
    //Q9. Print the factorial of a number using a loop.
    int x , fact = 1 ;
 cout << "How Number you want the factorial for ?" <<endl;
 cin >> x  ;
 for (int i = 1 ; i <= x ; i ++ ) {
    fact = fact * i;
 }
cout << "Factorial = " <<fact <<endl ;

    return 0;
}
