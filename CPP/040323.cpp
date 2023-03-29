#include<iostream>
using namespace std;

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
// int  main(){
//     int num;
//     int k=1;
//     cout<<"enter a no."<<endl;
//     cin>>num;
//     for(int i=1;i<=num;i++){
//         for (int j=1;j<=i;j++){
//             cout<<" "<<k;
//             k+=1;
//         }
//         cout<<endl;
//     }
//   return 0;
// }

//pattern 9
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>> n;

//     int outerspacing=n/2;
//     int innerspacing=-1;

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=outerspacing; col++){
//             cout<<" ";
//         }
//      cout<<"*";
//      for(int col=1;col<=innerspacing; col++){
//         cout<<" ";
//      }
//      if(row>1&&row<n){
//         cout<<"*";
//      }
//      if(row <=n/2){
//         outerspacing--;
//         innerspacing+=2;
//      }else{
//         outerspacing++;
//         innerspacing-=2;
//      }
//      cout<<endl;
//     }
// }


//pattern 10 hw
int main(){
    int n;
    cout<<"enter no"; 
    cin>>n;
    for (int row=1;row<=n;row++){
        for(int col=1;col<=n;col++){
            if(col==1 || col==n){
                     cout<<"*";
               } else if((row>n/2)&&((row==col)||(row+col ==n+1))){
                    cout<<"*";
                }     
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

//pattern 11
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>> n;

//     int outerspacing=n/2;
//     int innerspacing=-1;

//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=outerspacing; col++){
//             cout<<" ";
//         }
//      cout<<"*";
//      for(int col=1;col<=innerspacing; col++){
//         cout<<"*";
//      }
//      if(row>1&&row<n){
//         cout<<"*";
//      }
//      if(row <=n/2){
//         outerspacing--;
//         innerspacing+=2;
//      }else{
//         outerspacing++;
//         innerspacing-=2;
//      }
//      cout<<endl;
//     }
// }


//pattern 12
// int main(){
//     int n;
//     cin>>n;
//     for(int row=1; row<=n;row++){
//         for(int col=1; col<=n%2;col++){
//             for(int col=1; col<=row;col++)
//              cout<<"1";
//             for(int col=1; col<=2*(n-row);col++)
//             cout<<" ";
//             for(int col=1; col<=row;col++)
//             cout<<"1";
            
//         cout<<endl;
//     } 
//     }  
//     return 0;
// } 

