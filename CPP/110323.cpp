#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//insertion Sort
// void insertionSort(vector<int> &arr){
//  int n=arr.size();
//  for(int i=1;i<n;i++){
//     int temp=arr[i];
//     int j =i-1;
//     while(j>=0 && arr[j]>temp){
//         arr[j+1]= arr[j];
//         j--;
//     }
//     arr[j+1]=temp;
// }
//  return;
// }

// int main(){
//     vector<int>myArr = {7,6,5,4,3,2,1};
//     insertionSort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }
//  return 0;
// }


/////i/p-->0,0,1,1,0,0,1,1,0,0,0   --->o/p-->0,0,0,0,0,0,0,1,1,1,1
// void swap(vector<int> &arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     return;
// }
// void sort(vector<int>&arr){
//     if(arr.size()==0){
//         return;
//     }
//     int n=arr.size();
//     int p=-1;
//     int idx=0;
//     while(idx<n){
//     if(arr[idx]==0){
//         swap(arr,++p,idx);   
//     }
//     idx++;
//  }
//     return;
// }
// int main(){
//     vector<int>myArr = {0,0,1,1,0,0,1,1,0,0,0};
//     sort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }

// }


//i/p-->4,-3,6,7,2,-8,-9,10,11,12,-19  --->o/p-->-ve one side +one side
void swap(vector<int> &arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return;
}
void sort(vector<int>&arr){
    if(arr.size()==0){
        return;
    }
    int n=arr.size();
    int p=-1;
    int idx=0;
    while(idx<n){
    if(arr[idx]<0){
        swap(arr,++p,idx);   
    }
    idx++;
 }
    return;
}
int main(){
    vector<int>myArr = {4,-3,6,7,2,-8,-9,10,11,12,-19 };
    sort(myArr);
    for(int i=0;i<myArr.size(); i++){
        cout<<myArr[i]<<" ";
    }

}

//i/p-->0,0,1,2,1,1,2,2,0,0,1,0,1,2,2 --->o/p-->-zeros ones and then twos
// void swap(vector<int> &arr, int i, int j){
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//     return;
// }
// void sort(vector<int>&arr){
//     if(arr.size()==0){
//         return;
//     }
//     int n=arr.size();
//     int p1=-1;
//     int idx=0;
//     int p2 =n-1;
//     while(idx<=p2){
//     if(arr[idx]==0){
//         swap(arr,++p1,idx);   
    
//     idx++;
//     }
//     else if(arr[idx]==2){
//         swap(arr,p2--,idx);
//     }
//     else{
//         idx++;
//     }
//  }
//     return;
// }
// int main(){
//     vector<int>myArr = {0,0,1,2,1,1,2,2,0,0,1,0,1,2,2};
//     sort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }

// }