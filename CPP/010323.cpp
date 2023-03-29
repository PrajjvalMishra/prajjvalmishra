#include<iostream>
using namespace std;

//count total no. 
//  int main(){
//     int num1,count=0;
//     cout<<"enter no"<<endl;
//     cin>>num1;
//     while(num1!=0){
//         num1=num1/10;
//         count+=1;
//     }
//    cout<<count<<endl;
// return 0;
// }


//prime number till n
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                isPrime =false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<""<<endl;
        }
    }
    return 0;
}
//prime number till n another method
// int main(){
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         bool isPrime=true;
//         for(int j=2;j<=(i/2);j++){
//             if(i%j == 0){
//                 isPrime =false;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout<<i<<""<<endl;
//         }
//     }
//     return 0;
// }

//print pattern1
// int main(){
//     int num=5;
//     for(int i=1;i<=num;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//print pattern 2
// int main(){
//     int num=5;
//     for(int i=1;i<=num;i++){
//         for(int j=5;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//print pattern 2 alternative

// int main(){
//     int num;
//     cin>>num;
//     for(int i=num;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pattern 3 HW
// int main(){
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     for(int i=1;i<num+1;i++){
//         for(int j=1;j<=num;j++){
//             if(j<=num-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
       
//         cout<<endl;
//     }
//     return 0;
// }


 //pattern 4 HW
// int main(){
//     int num;
//     cout<<"enter a number"<<endl;
//     cin>>num;
//     for(int i=num;i>=1;i--){
//         for(int j=num-i;j>0;j--){
//         cout<<" "; 
//         }
//         for(int k=i;k>0;k--){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
//     return 0;
// }

//pattern 3 Class logic
// int main(){
//     int num;
//     cout<<"enter the number";
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         for(int j=num-i;j>0;j--){
//             cout<<" ";
//          }
//           for(int k=i;k>=1;k--){
//             cout<<"*";
//           }
//     cout<<endl;
// }
// return 0;
// }

//pattern3 my logic
// int main(){
//     int num;
//     cin>>num;
//     for(int row=1;row<=num;row++)
//     {
//         for(int col=num;col>=row+1; col--){
//             cout<<" ";
//         }
//         for (int star=1;star<=row;star++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pattern 3 class logic
// int main(){
//     int n;
//     cout<<" enter the number";
//     cin>>n;

//     int nsp=n-1;
//     int nst=1;

//     for(int row=1;row<=n;row++){
//         //nsp
       
//         for(int csp=1; csp<=nsp;csp++){
//             cout<<" ";
//         }
//         for(int cst=1;cst<=nst;cst++){
//             cout<<"*";
//         }
//         nsp--;
//         nst++;
//         cout<<endl;
//     }
//  return 0;
// }

//Pattern 4 Class logic
// int main(){
//     int n;
//     cout<<" enter the number";
//     cin>>n;

//     int nsp=0;
//     int nst=n;

//     for(int row=1;row<=n;row++){
//         //nsp
       
//         for(int csp=1; csp<=nsp;csp++){
//             cout<<" ";
//         }
//         for(int cst=1;cst<=nst;cst++){
//             cout<<"*";
//         }
//         nsp++;
//         nst--;
//         cout<<endl;
//     }
//  return 0;
// }

int main(){
    int n;
    cout<<" enter the number";
    cin>>n;



    for(int row=1;row<=n;row++){
        //nsp
       
        for(int csp=n; csp>=row;csp--){
            cout<<"*";
        }
        cout<<endl;
    }
         for(int cst=1;cst>=n;cst++){
            cout<<" ";
        }
 return 0;
}
