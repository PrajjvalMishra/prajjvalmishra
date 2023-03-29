#include<iostream>
using namespace std;

// Division code--------------------
// int main(){
//     int divisor,dividend,quo,remain;
//     cout<<"Enter divisor"<<endl;
//     cin>>divisor;
//     cout<<"Enter dividend"<<endl;
//     cin>>dividend;
//     quo=dividend/divisor;
//     cout<<"Quotient is "<<quo<<endl;
//     remain=dividend%divisor;
//      cout<<"Remainder is "<<remain<<endl;
    
// return 0;
// }

//Reverse no.
// int main(){
//     int num,s;
//     cout<<"enter no"<<endl;
//     cin>>num;
//     while(num!=0){
//         s=num%10;
//         num=num/10;
//         cout<<s;
//     }
    
// return 0;
// }

//ALTERNATIVE APPROACH
// int main(){
//     int num,r,ans=0;
//     cout<<"enter no"<<endl;
//     cin>>num;
//     while(num!=0){
//         r=num%10;
//         ans=ans*10+r;
//         num=num/10;
//     }
    
// return 0;
// }


//Pallindrome
// int main(){
//     int num,r,ans=0;
//     cout<<"enter no"<<endl;
//     cin>>num;
//     int num1=num;
//     while(num1!=0){
//         r=num1%10;
//         ans=ans*10+r;
//         num1=num1/10;
//     }
//    if(ans==num){
//     cout<<"It is a palindrome"<<endl;
//    }
//    else{
//     cout<<"It is not a palindrome"<<endl;
//    }
// return 0;
// }

//prime or not
// int main(){
//     int n,num=2;
//     cout<<"enter a no"<<endl;
//     cin>>n;
//     bool isPrime = true;
//    for(int i=2;i<n;i++){
//      if(n%i==0){
//         isPrime =false;
//         break;
//      }
//    }

//  if(isPrime== true){
//     cout<<"prime"<<endl;
//  }else{
//     cout<<" not prime"<<endl;
//  }
//  return 0;
// }

 ///prime or not another approach
int main(){
    int n,num=2;
    cout<<"enter a no"<<endl;
    cin>>n;
    bool isPrime = true;
   for(int i=2;i<=n/2;i++){
     if(n%i==0){
        isPrime =false;
        break;
     }
   }

 if(isPrime== true){
    cout<<"prime"<<endl;
 }else{
    cout<<" not prime"<<endl;
 }
 return 0;
}

//prime no. practice

// int main(){
//   int num;
//   bool isPrime = true;
//   cout<<"enter a no"<<endl;
//   cin>>num;
//   if(num==0|| num==1){
//     isPrime=true;
//   }
//   for(int i=2;i<num;i++)
//   {
//     if(num%i==0){
//         isPrime= false;
//     }
//   }
//   if(isPrime==true){
//     cout<<"Prime no."<<endl;
//   } else{
//     cout<<"not a prime no"<<endl;
//   }
//   return 0;
// }

 //count number 
//  int main(){
//     int num,count=0;
//     cout<<"enter no"<<endl;
//     cin>>num;
//     int num1=num;
//     while(num1!=0){
//         num1=num1/10;
//         count+=1;
//     }
//    cout<<count<<endl;
// return 0;
// }



