#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// /Binary Search Tree
// int binarySearch(vector<int>&arr,int num){
//     // int n=arr.size();
//     // int si=0;
//     // int ei=n-1;
//     // while(si<=ei){
//     // int mid=(si+ei)/2;
//     // if(arr[mid]==num){
//     //     return mid;
//     // } else if(arr[mid]>num){
//     //     ei=mid-1;
//     // }else{
//     //     si =mid+1;
//     // }
//     // }
//     // return -1;
// }

// int main(){
//     vector<int>myArr = {10,20,30,40,60,110,120,130,170};
//     int num=110;
//     binarySearch(myArr,num);
//    cout<<binarySearch(myArr,num)<<endl;
// }


/////Binary searc for occurance for 1st element

int firstOccurance(vector<int>&arr,int num){
    int n=arr.size();
    int si=0;
    int ei=n-1;
    while(si<=ei){
    int mid=(si+ei)/2;
    if(arr[mid]==num){
        if (mid-1>0 && arr[mid-1]==num){
           ei=mid-1;
    }else{
           return mid;
         }    
    } else if(arr[mid]>num){
        ei= mid-1;
    }else{
        si=mid+1;
    }
}
    return -1;
};

int main(){
    vector<int>myArr = {1,2,2,2,3,3,3,4,4,6,11,12,13,17};
    int num=2;
    firstOccurance(myArr,num);
   cout<<firstOccurance(myArr,num)<<endl;
}

/////Binary searc for occurance for last element

// int lastOccurance(vector<int>&arr,int num){
//     int n=arr.size();
//     int si=0;
//     int ei=n-1;
//     while(si<=ei){
//     int mid=(si+ei)/2;
//     if(arr[mid]==num){
//         if (mid+1>arr.size() && arr[mid+1]==num){
//            si=mid+1;
//          }else{
//            return mid;
//          }    
//     } else if(arr[mid]>num){
//         ei= mid-1;
//     }else{
//         si=mid+1;
//     }
// }
//     return -1;
// };

// int main(){
//     vector<int>myArr = {1,2,2,2,2,3,3,3,4,4,6,11,12,13,17};
//     int num=2;
//     lastOccurance(myArr,num);
//    cout<<lastOccurance(myArr,num)<<endl;
// }
