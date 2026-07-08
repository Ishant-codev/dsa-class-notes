//#include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         if(i==5)break;//this will break the loop when i=5
//         cout<<i<<" ";
//     }
// }//this will print 1 2 3 4 because when i=5 the loop will break and it will not print 5

// for(int i=1;i<=10;i++){
//         cout<<i<<" ";
//         if(i==5)break;
// }//this will print 1 2 3 4 5 because the cout statement is before the break statement

//print numbers from 1 to 30 skipping multiples of 3
// for(int i=1;i<=30;i++){
//     if(i%3==0)continue;//this will skip the multiples of 3
//     cout<<i<<" "; 
// }   

// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y)
//         continue;
//         else
//         cout<<x<<" "<<y<<endl;
//     }
}//2 2 will be skipped because of continue statement
//output is 3 1,1 3,0 4,-1 5

// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         if(x==y)
//         break;
//         else
//         cout<<x<<" "<<y<<endl;
//         x--;
//         y++;
//     }
// }//output is 4 0,3 1  as break stops the code
