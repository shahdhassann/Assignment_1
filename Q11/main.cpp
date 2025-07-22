#include <iostream>

using namespace std;

int main()
{
/*
Q11. FizzBuzz Challenge
Print numbers from 1 to 100:
•	If divisible by 3 → print "Fizz"
•	If divisible by 5 → print "Buzz"
•	If divisible by both 3 and 5 → print "FizzBuzz"
•	Otherwise → print the number
*/

    for (int i = 1 ; i <=100; i++ ){
    if (i%3 == 0 && i%5 == 0){
        cout << "FizzBuzz\n";
    }
    else if (i%3 == 0){
        cout << "Fizz\n";
    }
    else if (i%5 == 0){
        cout << "Buzz\n";
    }
    else {
        cout << i << endl ;
    }
}

    return 0;
}
