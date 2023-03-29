#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//pattern1
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pattern2
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=5;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern3
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int row=1;row<=n;row++){
//         for(int col=n;col>row;col--){
//             cout<<" ";
//         }
//         for(int st=1;st<=row;st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pattern4
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     int nsp=0;
//     int nst= n;
//     for(int row=1;row<=n;row++){
//         for(int csp=1;csp<=nsp;csp++){
//             cout<<" ";
//         }
//         for(int cst=1;cst<=nst;cst++){
//             cout<<"*";
//         }
//         nst--;
//         nsp++;
//         cout<<endl;
//     }
//     return 0;
// }

//pattern6.1
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i==j){
//                  cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern6.2
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i+j==n+1){
//                  cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern 7
// int main(){
//     int n;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i+j==n+1 || i==j){
//                  cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern 8.1
// int main(){
//     int n,a=1;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             {
//                  cout<<" "<<a;
//                  a++;
//             }
           
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern 8.2
// int main(){
//     int n,a=1;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int a=i;
//         for(int j=1;j<=i;j++){
//             {
//                  cout<<" "<<a;
//                  a++;
//             }
           
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//pattern9
// int main(){
//     int n,a=1;
//     cout<< "enter the num"<<endl;
//     cin>>n;
//     int innerspacing=-1;
//     int outerspacing=n/2;
//     for(int row=1;row<=n;row++){
//         for(int col=1;col<=outerspacing;col++){
//             cout<<" "; 
//         }
//         cout<<"*";
//         for(int col=1;col<=innerspacing;col++){
//             cout<<" ";
//         }
//         if(row>1&&row<n){
//             cout<<"*";
//         }
//         if(row<=n/2){
//             innerspacing+=2;
//             outerspacing--;
//         }
//         else{
//             innerspacing-=2;
//             outerspacing++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

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

//pattern 14
// int main(){
//     int n,s=1;
//     cin>>n;
//     for(int row=1; row<=n;row++){
//         for(int col=1; col<=n%2;col++){
//             for(int col=1; col<=row;col++){
//              cout<<s;
//               s++;
//             }
        
//             for(int col=1; col<=2*(n-row);col++){
//             cout<<" ";
//             }
           
//             for(int col=1; col<=row;col++){
           
//             cout<<s;
//             s--;
//             }
//         } 
//         cout<<endl;
    
//     }  
//     return 0;
// } 

//pattern 15
// int main(){
//     int num=65;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//                char ch = char(num);
// 		    cout << ch << " ";
//         }
//         num=num+1;
//         cout<<endl;
//     }
//     return 0;
// }

//pattern 16
// int main(){
//     int num=65;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//                char ch = char(num);
// 		          cout << ch << " ";
//                 num=num+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//


//find minimum element
// int minimumElement(vector<int>&arr){
//     int minEle=(int)10e9;
//     for(int i=0;i<arr.size();i++){
//         minEle=min(arr[i],minEle);
//     }
//     return minEle;
// }

// int main(){
//     vector<int>arr(5,0);
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     cout<<"minimum ele is"<<minimumElement(arr);
// }
