#include <iostream>

using namespace std;

int main()
{
//Q10. Write a program that takes two numbers and an operator (+, -, *, /) as input, and uses a switch statement to perform the operation.
float x , y ;
char op;
start2:
cout <<"Please enter you numbers:" <<endl ;
cin >> x ;
cin >> y ;
start1:
cout << "What operation (+, -, *, /) do you want ? ";
cin >> op;

switch (op){
case '+':
cout << "Result:" << x + y <<endl ;
break;
case '-':
cout << "Result:" << x - y <<endl ;
break;
case '*':
cout << "Result:" << x * y <<endl ;
break;
case '/':
if (y != 0 ){
cout << "Result:" << x / y <<endl ;
}
else{
    cout << "Error:Cannot Divide by Zero!" <<endl ;
    goto start2 ;
}
break;
default:
    cout << "Invalid operator!" <<endl ;
    goto start1;

    return 0;
}
}
