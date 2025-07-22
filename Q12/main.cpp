#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

bool isPrime(int num){
if (num <=1 ){
    return false;
}
for (int i = 2; i < num; i++ ){
    if (num % i == 0)
       return false ;
}
  return true ;
}


int main()
{

// Q12. Write a function that checks whether a number is a prime or not.

int x;
cout << "Enter a number to check if it is a prime number." <<endl ;
cin >> x ;
if(isPrime(x)){
    cout << x << " is a prime number. \n";
}
else {
    cout << x << " is not a prime number. \n";
}


    return 0;
}
