#include <iostream>
using namespace std;
int main(){
    int x = 39;
    int y = 10;
    cout<< x + y <<endl;
    cout<< x - y <<endl;
    cout<< x * y <<endl;
    cout<< x/y <<endl;
}

//cout<<5/2<<endl; // this will give output 2 because both 5 and 2 are integers and integer division is performed
//cout<<5.0/2<<endl; // this will give output 2.5 because 5.0 is a double and double division is performed
//cout<<5/2.0<<endl; // this will give output 2.5 because 2.0 is a double and double division is performed
//cout<<5.0/2.0<<endl; // this will give output 2.5 because both 5.0 and 2.0 are doubles and double division is performed

//int x = 2/3*6; // this will give output 0 because 2/3 is 0 and 0*6 is 0
//according to operator precedence, division and multiplication have the same precedence and are evaluated from left to right. So, 2/3 is evaluated first which gives 0 and then 0*6 is evaluated which gives 0.

//x++;// x = x + 1; // this is post increment operator, it will first return the value of x and then increment it by 1
//for example, if x is 5, then cout<<x++; will return 5 and then increment x to 6. So, if we print x after this operation, it will give 6.
//++x;// x = x + 1; // this is pre increment operator, it will first increment the value of x by 1 and then return it
//x--;// x = x - 1; // this is post decrement operator, it will first return the value of x and then decrement it by 1
//--x;// x = x - 1; // this is pre decrement operator, it will first decrement the value of x by 1 and then return it