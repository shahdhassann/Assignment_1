#include <iostream>

using namespace std;

int main()
{
    //Q8. Print the multiplication table of a given number.
int x;
 cout << "How Number do you want to Multiple(until 10)?" <<endl;
 cin >> x ;
 for (int i ; i < 10 ; i ++ ) {
    cout << i+1  << " * " << x << " = " << (i+1)*x <<endl ;
 }

    return 0;
}
