#include<iostream>
using namespace std;
int main(){
    int x = 0;
    if(x) cout<<"Anjali";
    else cout<<"Nitin";

}

//this program will print "Nitin" because the value of x is 0 which is considered as false in C++.
//if the value of x was any non-zero value, it would have printed "Anjali" because non-zero values are considered as true in C++.
//(x==0) will give Anjali beacause (x==0) is a comparison operation which checks if x is equal to 0 and returns true if it is, and false otherwise. Since x is 0, the condition (x==0) evaluates to true, and the program will print "Anjali". 
//(x=0) will give nitin because x=0 is an assignment operation which assigns the value 0 to x and returns 0 which is false.
  
// if('w') cout<<"Anjali";
// else cout<<"Nitin";
//this program will print "Anjali" because the character 'w' has a non-zero ASCII value (119), which is considered as true in C++.

// int x = 4;
// if(x++) cout<<x;
// else cout<<"prem";
//this program will print "5" because the value of x is 4 which is considered as true in C++. The post-increment operator (x++) increments the value of x after the condition is evaluated, so the value of x becomes 5 after the if statement. Therefore, the output will be "5".

// int x = 4, y = 6;
// if(x++ || y++ ) cout<<x<<y;
// else cout<<"Ayush";
// this will give output 56

// int x = 0;
// if(x++) cout<<"aniket";
// else cout<<"sheetal";
// this will give output sheetal because the value of x is 0 which is considered as false in C++. The post-increment operator (x++) increments the value of x after the condition is evaluated, so the value of x becomes 1 after the if statement. Therefore, the else block is executed and "sheetal" is printed.

