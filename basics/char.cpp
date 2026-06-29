#include <iostream>
using namespace std;
int main(){
    char c = 'a';
    cout<<c<<endl;
    c = '%';// char can also store special characters
    cout<<c<<endl;
    c = '1'; // char can also store numbers but it will be treated as character
    cout<<c<<endl;//ascii value of '1' is 49 and 'a' is 97 and 'A' is 65
}