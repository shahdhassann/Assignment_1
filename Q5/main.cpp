#include <iostream>

using namespace std;

int main()
{
    //Q5. Take a number and print whether it's positive, negative, or zero.
   int x ;
    cout << "Please enter you number:" <<endl ;
    cin >> x ;

    if (x > 0){

        cout <<"This is a Positive Number " << endl;
    }
    else if (x < 0 )
    {
       cout <<"This is a Negative Number" << endl;
    }
    else
    {
       cout <<"This is Zero " << endl;
    }
    return 0;
}
