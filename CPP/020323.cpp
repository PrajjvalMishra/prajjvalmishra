#include<iostream>
using namespace std;

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

//print pattern5 number
// int main(){
//     int num=5;
//     for(int i=1;i<=num;i++){
//         for(int j=1;j<=i;j++){
//             cout<<" "<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//print pattern6.1
// int main(){
//     int num=5;
//     for(int row=1;row<=num; row++){
//         for(int col=0;col<=num;col++){
//            if(row == col){
//             cout<<"*";
//            }
//         else { 
//              cout<<" ";
//         }
//      }
//         cout<<endl;
//     }
    
//     return 0;
// }

//print pattern6.2
// int main(){
//     int num=5;
//     for(int row=1;row<=num; row++){
//         for(int col=1;col<=num;col++){
//            if(row+col==num+1){
//             cout<<"*";
//            }
//         else { 
//              cout<<" ";
//         }
//      }
//         cout<<endl;
//     }
    
//     return 0;
// }

//pattern 7 HW
// int main(){
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     for(int row=1;row<=num;row++){
//         for (int col=1;col<=num;col++){
//              int num1=row+col;
//             if(row==col || num1==num+1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         } 
//         cout<<endl;
//     }
//     return 0;
// }

//pattern 8
int  main(){
    int num;
    int k=1;
    cout<<"enter a no."<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        for (int j=1;j<=i;j++){
            cout<<" "<<k;
            k+=1;
        }
        cout<<endl;
    }
  return 0;
}

//pattern 9
