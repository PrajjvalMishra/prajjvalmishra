#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"length of array:"<<size<<endl;
//    // cout<<arr[2]<<endl;
//     arr[2]=40;
//     //cout<<arr[2];

//   //  for(int i=0;i<5;i++){
//   //     cout<<arr[i]<<" ";
//   //  }

//    array<int, 5>myArray {1,2,3,4,5};
//    cout<<myArray.size()<<endl;

//  for(int i=0; i<size;i++){
//     cout<<arr[i]<<" ";
//  }



//     return 0;
// }


//vector
// int main(){
//     vector<int>myArr(5,0);
//     for(int i=0; i<myArr.size();i++){
//         cout<<myArr[i]<<" ";
//     }
// }

//vector ANOTHER 
// int main(){

//     vector<int>myArr;
//     myArr.push_back(5);
//     myArr.push_back(14);
//      for(int i=0; i<myArr.size();i++){
//         cout<<myArr[i]<<" ";
//     }
// }


//vector ANOTHER METHOD AND IS "DYNAMIC" ONE

// int main(){

//     vector<int>myArr(5);
//     myArr.push_back(5);
//     myArr.push_back(14);
//      for(int i=0; i<myArr.size();i++){
//         cout<<myArr[i]<<" ";
//     }
// }
 
 //input and print array
// int main(){
//     vector<int>myArr(5,0);
//     for(int i=0;i<myArr.size();i++){
//         cin>>myArr[i];
//     }
//      for(int i=0; i<myArr.size();i++){
//         cout<<myArr[i]<<" ";
//     }
// }


//Find an element in an array(arr,num)
// int findElement(vector<int>myArr, int num){
//     for(int i=0;i<myArr.size();i++){

//     }
// }

// vector<int>myArr(5);
//     for(int i=0; i<myArr.size();i++){
//         cin>>myArr[i]; 
//     }

//     for(int i=0;i<myArr.size(); i++){
//         cout<<myArr[i]<<" ";
//     }



//     void minimum(vector<int> &arr)
// {
//     int min = arr[0];
//     for (int i{0}; i < arr.size(); i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << min << endl;
// }


///maximum Element
// int maxElement(vector<int>myArray){
//     int maxEle = -(int)10e9;
//     for(int i=0;i<myArray.size();i++){
//         maxEle=max(myArray[i],maxEle);
//     }
//     return maxEle;
// }

// int main(){
//     vector<int>myArray(5,0);
//     for(int i=0;i<myArray.size();i++){
//         cin>>myArray[i];
//     }
//     cout<<maxElement(myArray)<<endl;
// }
