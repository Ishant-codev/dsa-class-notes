//write a program to write all the factors of a given number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){//factor mil gya
//             cout<<i<<" ";
//         }
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
//int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){//factor mil gya
//             cout<<i<<" "<<" ";
//             if(i!=n/i) cout<<n/i<<" ";//to avoid printing the square root twice
//         }
//     }
// } //if we put input 49 we get output 7 1 49

//write a program to know if a number is prime or composite
//#include <iostream>
//#include <cmath>
//using namespace std;
//int main(){
//    int n;
//    cout<<"Enter a number: ";
//    cin>>n;
//    int factors=0;
// for(int i=1;i<=n;i++){
//     if(n%i==0){
//         factors++;
//     }
// }
// if (factors==1) cout<<"Neither prime nor composite";
// else if(factors==2) cout<<"Prime";
// else cout<<"Composite"; 
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//    int n;
//    cout<<"Enter a number:";
//    cin>>n;
//    bool flag=false;//false means prime
//    for(int i=2;i<=sqrt(n);i++){
//     if(n%i==0){//factor mil gya expect 1 and n
//     flag=true;
//          break;
//     }
// }
//if(n==1) cout<<"Neither prime nor composite";
// else if(flag==true) cout<<"composite number";
// else cout<<"prime number";
// }






