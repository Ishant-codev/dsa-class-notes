#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if((int)ch<=90 && (int)ch>=65){
        cout<<ch<<" is a capital letter"<<endl;
    }
    else{
        cout<<ch<<" is not a capital letter"<<endl;
    }
}