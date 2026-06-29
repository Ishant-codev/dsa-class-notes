#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter a real No:";
    cin>>x;
    int y = (int)x; // explicit typecasting float to int
    if(x==y) cout<<"Integer";
    else cout<<"Not an Integer";
   
}

//a=b means put value of b in a "assignment operator
//a==b means check if a is equal to b "equality operator"