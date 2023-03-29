#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Selection Sort
void selectionSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for( int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        if(minIndex !=i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main(){
    vector<int>myArr = {7,6,5,4,3,2,1};
    selectionSort(myArr);
    for(int i=0;i<myArr.size(); i++){
        cout<<myArr[i]<<" ";
    }
 return 0;
}