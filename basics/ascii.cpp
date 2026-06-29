#include <iostream>
using namespace std;
int main(){
    char x = 'A';
    int ascii = (int)x; // explicit typecasting char to int to get ascii value
    cout<<"the ascii value of "<<x<<" is "<<ascii<<endl;    
}
//char x = 'A'
//int ascii = x;//implicit typecasting
//cout<<ascii;
// this will give output 65 which is the ascii value of 'A'

// int x = 74;
// cout<<(char)x; // implicit typecasting int to char to get character from ascii value
// this will give output J

//char ch1 = 'A';//A ascii value is 65
//char ch2 = 'a';//a ascii value is 97
// cout<<ch1+ch2<<endl; 
 // this will give output 162 which is the sum of ascii values of A and a