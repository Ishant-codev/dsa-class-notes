// #include <iostream>
// using namespace std;
// void fun(){
//    cout<<"Hi Anu"<<endl; 
// }
// int main(){
//     fun(); //call lagai
//     cout<<"Hi Harry"<<endl;
//     fun(); //call lagai
// }

// #include <iostream>
// using namespace std;
// void sumit(){
//     cout<<<"hi sumit"<<endl;
// }
// void arjun(){
//     cout<<"Hi arjun"<<endl;
//     sumit();
// }
// void anu(){
//     cout<<"Hi Anu"<<endl;
//     arjun();
// }
// int main(){
//     anu();
// }

//arguements 
//min. of two functions
#include <iostream>
using namespace std;
void minoftwo(int a, int b){ //2 nos ko recieive lrega aur uska min dega
    if(a<b) cout<<a<<endl;
    else cout<<b;
}
int main(){
    minoftwo(71,34);
}

//sum of three
#include <iostream>
using namespace std;
void sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}
int main(){
    sum(71+34+42)
}

