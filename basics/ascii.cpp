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

 //range of int x is -2147483648 to 2147483647 i.e. 2^31 to 2^31-1
// range of long long int is -9223372036854775808 to 9223372036854775807 i.e. 2^63 to 2^63-1
//range of short int is -32768 to 32767 i.e. 2^15 to 2^15-1
//double and float are used to store decimal values and real numbers double is more precise than float and takes more memory space than float

// 1 byte = 8 bits, int takes 4 bytes of memory space, long long int takes 8 bytes of memory space, short int takes 2 bytes of memory space, char takes 1 byte of memory space, float takes 4 bytes of memory space, double takes 8 bytes of memory space