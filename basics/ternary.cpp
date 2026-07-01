#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    (n%2==0) ? cout<<"Even" : cout<<"Odd";
}

//nested ternary operator
// int x = 6;
// int y = (x <= 23) ? ((x > 12) ? x-4 : x*4) : ((x < 12) ? x/4 : x+4);
// cout<<y;
// this will give output 24 because the value of x is 6 which is less than or equal to 23, so the first condition (x <= 23) is true. Then, the second condition (x > 12) is false, so the expression evaluates to x*4 which is 6*4 = 24. Therefore, the output will be "24".

