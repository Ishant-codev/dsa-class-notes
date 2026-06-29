#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the cost price and selling price of product:";
    cin>>a>>b;
    if(a>b) cout<<"loss of "<<a-b;//if the first condition is true then it will not check the second condition
    else if(a<b) cout<<"profit of "<<b-a;
    else cout<<"no profit no loss";
}

//use if else if else for 3 or more conditions