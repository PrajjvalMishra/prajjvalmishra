#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

// /o(n) complexity
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
// void bubbleSort(vector<int> &arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     return;
// }
// int main(){
//     vector<int>myArr{7,6,5,4,3,2,1};
//     bubbleSort(myArr);
//     for(int i=0;i<myArr.size();i++){
//         cout<<myArr[i];
//     }
    
// }

////selectionSort
// void selectionSort(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[minIndex]>arr[j]){
//                 minIndex=j;
//         }
//         if(minIndex !=i){
//             int temp = arr[i];
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }
// }
// return;
// }

// int main(){
//     vector<int>myArr = {7,6,5,4,3,2,1};
//     selectionSort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }
//  return 0;
// }

//insertion sort
// void insertionSort(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0&& arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;
//     }
// }
// int main(){
//     vector<int>myArr = {7,6,5,4,3,2,1};
//     insertionSort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }
//  return 0;
// }

//i/p-->4,-3,6,7,2,-8,-9,10,11,12,-19  --->o/p-->-ve one side +one side
// void swap(vector<int>&arr, int i ,int j){
//     int temp= arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     return;
// }
// void sort(vector<int>&arr){
//     int n=arr.size();
//     int p=-1;
//     int idx=0;
//     while(idx<n){
//         if(arr[idx]<0){
//             swap(arr,++p,idx);
//         }
//             idx++;
//     }
//     return;
// }
// int main(){
//     vector<int>myArr = {4,-3,6,7,2,-8,-9,10,11,12,-19};
//     sort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }
// }


//i/p-->0,0,1,2,1,1,2,2,0,0,1,0,1,2,2 --->o/p-->-zeros ones and then twos
// void swap(vector<int>&arr, int i ,int j){
//     int temp= arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     return;
// }
// void sort(vector<int>&arr){
//     int n=arr.size();
//     int p1=-1;
//     int idx=0;
//     int p2= n-1;
//     while(idx<=p2){
//         if(arr[idx]==0){
//             swap(arr,++p1,idx);
//             idx++;
//         } else if(arr[idx]==2){
//             swap(arr,p2--,idx);
//         }
//         else{
//              idx++;
//         }
//     }
//     return;
// }
// int main(){
//     vector<int>myArr = {0,0,1,2,1,1,2,2,0,0,1,0,1,2,2};
//     sort(myArr);
//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }
// }


////binary Search
// int binarySearch(vector<int>&arr, int num){
//     int n=arr.size();
//     int si=0;
//     int ei=n-1;
//     while(si<=ei){
//         int mid=(si+ei)/2;
//         if(arr[mid]==num){
//             return mid;
//         }
//         else if(arr[mid]>num){
//              ei=mid-1;
//     }else{
//         si =mid+1;
//     }
//     }
// }

// int main(){
//     vector<int>myArr = {10,20,30,40,60,110,120,130,170};
//     int num=110;
//     binarySearch(myArr,num);
//    cout<<binarySearch(myArr,num)<<endl;
// }


/////Binary searc for occurance for 1st element
// int firstOccurance(vector<int>&arr,int num){
//     int n=arr.size();
//     int si=0;
//     int ei=n-1;
//     while(si<=ei){
//     int mid=(si+ei)/2;
//     if(arr[mid]==num){
//         if (mid-1>0 && arr[mid-1]==num){
//            ei=mid-1;
//     }else{
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
//     vector<int>myArr = {1,2,2,2,3,3,3,4,4,6,11,12,13,17};
//     int num=2;
//     firstOccurance(myArr,num);
//    cout<<firstOccurance(myArr,num)<<endl;
// }

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


///////////
int firstIndex(vector<int> &arr, int data){
        int si = 0;
        int ei = arr.size()-1;

        while(si <= ei){
            int mid = (si+ei)/2;
            if(arr[mid] == data){
                if(mid-1>=0 && arr[mid-1] == data){
                    ei = mid-1;
                } else{
                    return mid;
                }
            } else if(arr[mid] > data){
                ei = mid - 1;
            } else {
                si = mid+1;
            }
        }
        return -1;
    }
     int lastIndex(vector<int> &arr, int data){
        int si = 0, ei = arr.size()-1;
        while(si<=ei){
            int mid = (si+ei)/2;
            if(arr[mid] == data){
                if(mid+1 < arr.size() && arr[mid+1] == data){
                    si=mid+1;
                } else {
                    return mid;
                }
            } else if(arr[mid] > data){
                ei = mid-1;
            } else {
                si = mid+1;
            }
        }
        return -1;
    }
     void searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0] = firstIndex(nums, target);
        ans[1] = lastIndex(nums, target);
        for(int i=0;i<2;i++){
            cout<<"["<<ans[i]<<"]"<<" ";
        }
        return;

    }
    int main(){
    vector<int>myArr = {1,2,2,2,2,3,3,3,4,4,6,11,12,13,17};
    searchRange(myArr,2);
}