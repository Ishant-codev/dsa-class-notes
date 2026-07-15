// #include<iostream>
// using namespace std;
// int main(){ 
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=5;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// this prints 3 rows of 5 asterisks each

// int m,n;
// cout<<"Enter rows and column:";
// cin>>m>>n;
// for(int i=1;i<=m;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n; //n<=26 as there are 26 alphabets
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n; //n<=26 as there are 26 alphabets
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i%2==0) cout<<(char)(i+64)<<" ";
//             else cout<<char(i+96)<<" ";
//         }
//         cout<<endl;
//     }
// }

//star triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

//star triangle horizontally flipped
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

//Hollow rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"Enter rows and columns:";
//     cin>>m>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==m || j==1 || j==n) cout<<"* ";
//             else cout<<" "
//         }
//         cout<<endl;
//     }
// }

//Floyd's triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a++<<" ";
//         }
//         cout<<endl;
//     }
// }

//odd number triangle-in each line you have to print first "i" odd numbers
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<2*j-1<<" ";
//         }
//         cout<<endl;
//     }
// }

//Binary triangle
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0) cout<<1<<" ";
//             else cout<<0<<" ";
//         }
//         cout<<endl;
//     }
// }

//star triangle vertically flipped
//method-1
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j>n)) cout<<"*";
//             else cout<<" "; 
//         }
//         cout<<endl;
//     }
// }

//method-2
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){ //n+1-i ki jaga n-1 krdiya
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//         }
// }

// star rhombus
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){ //n+1-i ki jaga n-1 krdiya
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//         }
// }

//Pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//ulta pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int nst=2*n-1,nsp=0;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         nsp++;
//         nst-=2;
//         cout<<endl;
//     }
// }

//Diamond
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int nsp=n-1,nst=1;
//     for(int i=1;i<=2*n-1;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         if(i<n){
//             nsp--;
//             nst+=2;
//         }
//         else{
//             nsp++;
//             nst-=2;
//         }
//         cout<<endl;
//     }
        
// }

//bridge - alag se 2n-1 stars ko print kro in first row
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //First row (2n-1 stars)
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    // 1 loop me 3 loop
    n--;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n+1-i;j++){//stars (hori. flipped triangle)
            cout<<"*";
        }
        for(int j=1;j<=2*i-1;j++){// spaces (odd triangle)
            cout<<" ";
        }
        for(int j=1;j<=n+1-i;j++){//stars (hori. flipped triangle)
            cout<<"*";
        }
        cout<<endl;
    }

}



