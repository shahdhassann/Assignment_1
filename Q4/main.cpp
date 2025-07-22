#include <iostream>

using namespace std;

int main()
{
    //Q4. Take a number and check if it is odd or even.
    int x ;
    cout << "Please enter you number:" <<endl ;
    cin >> x ;

    if (x % 2 == 0){

        cout <<"This is an Even Number" << endl;
    }
    else
    {
       cout <<"This is an Odd Number" << endl;
    }

    return 0;
}
