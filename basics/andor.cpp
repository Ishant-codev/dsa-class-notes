//check if number is 4 digit or not
#include <iostream>
using namespace std;
int main(){        
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>=1000 && num<=9999){
        cout<<num<<" is a 4 digit number"<<endl;
    }
    else{
        cout<<num<<" is not a 4 digit number"<<endl;
    }
}

//&& for and operator,|| for or operator, ! for not operator