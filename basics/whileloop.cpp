// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=10){
//         cout<<i<<" ";
//         i++;
//     }
// }

// int t=4;
// while(t--){
//     cout<<"Hello"<<endl;
// }//this will print Hello 4 times because t is decremented after each iteration and when t becomes 0 the loop will stop

// int t=4;
// while(--t){
//     cout<<"Hello"<<endl;
// }//this will print Hello 3 times because t is decremented before each iteration and when t becomes 0 the loop will stop

// int main(){
//     int t=10;
//     while(t/=2}{
//         cout<<"hello"<<endl;
//     }//this will print Hello 3 times because t is divided by 2 after each iteration
// }

//count digit of a number
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     if(n==0) count++;
//     while(n !=0){
//     n/=10;
//     count++;
//     }
//     cout<<count;
//  }

//print sum of digits of a number
// int n;
// cin>>n;
// int sum=0;
// while(n!=0){
//     int lastDigit=n%10;
//     sum+=lastDigit;
//     n/=10;
// }
// cout<<sum;

//Reverse a number
// int n;
// cin>>n;
// int rev=0;
// while(n!=0){
//     rev *=10;
//     rev += (n%10);
//     n/=10;
// } 
// cout<<rev; 

//Factorial of a number-->n!=1**2*3...n
// int n;
// cin>>n;
// long long fact=1;
// for(int i=2;i<=n;i++){
//     fact *=i;
// }
// cout<<fact;

//'a' raise to the power 'b'-->a^b
// int a,b;
// cin>>a>>b;
// int ans=1;
// for(int i=1;i<=b;i++){//yh loop b baar chal rha hai
//     ans *= a;
// if(a==1) break;//to prevent unnecessary iterations if a is 1, since 1 raised to any power is always 1
// }
// if(a==0 && b==0) cout<<"undefined";
// else cout<<ans;
