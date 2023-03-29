#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// int minElement(vector<int>&arr){
//     int minEle=(int)10e9;
//     int secondMinEle=(int)10e9;
//     for(int i=0;i<arr.size();i++){
//         minEle=min(arr[i],minEle);
//     }
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]<secondMinEle&& minEle<arr[i])
//         {
//            secondMinEle=arr[i];   
//         }
//     }
   
//     return secondMinEle;
// }

// int main(){
//     vector<int>arr(5);
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     cout<< minElement(arr);
// }


int main(){
    int n;
    cout<< "enter the num"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=n;col>row;col--){
            cout<<" ";
        }
        for(int st=1;st<=row;st++){
            cout<<"*";
        }
         for(int st=1;st<=row-1;st++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}