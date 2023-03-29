#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

///reverse given digit




///o(n) complexity
// int linearSearch(vector<int> &myArr,int data){
//     int n = myArr.size();
//     for(int i=0;i<n;i++){
//      if(myArr[i]== data){
//         return i;
//      }
//    }
//    return -1;
// }

// int main(){
//     vector<int>myArr{1,2,3,4,5,6,7};
//     int data=6;
//     cout<<"Index is "<<linearSearch(myArr, data);
// }



////bubble sort
void bubbleSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return;
}
int main(){
    vector<int>myArr{7,6,5,4,3,2,1};
    bubbleSort(myArr);
    for(int i=0;i<myArr.size();i++){
        cout<<myArr[i];
    }
    
}
