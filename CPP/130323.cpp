#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/////Binary search for nearest index

int nearestIndex(vector<int>&arr,int num){
    int n=arr.size();
    int si=0;
    int ei=n-1;
    while(si<=ei){
    int mid=(si+ei)/2;
    if(arr[mid]==num){
        return mid;
    } else if(arr[mid]>num){
        ei=mid-1;
    }else{
        si =mid+1;
    }
    }
return((num-arr[ei])<(arr[si]-num)?ei:si);
   
};

int main(){
    vector<int>myArr = {1,3,12,14,23,34,55,65,75,78};
    int num=69;
    nearestIndex(myArr,num);
   cout<<nearestIndex(myArr,num)<<endl;
}