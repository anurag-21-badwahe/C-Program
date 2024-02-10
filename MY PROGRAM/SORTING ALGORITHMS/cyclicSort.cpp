// #include<iostream>
// #include<algorithm>
// using namespace std;
// void printArr(int *arr,int size){
//     cout <<"PRINTING THE ARRAY"<<endl;
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
// }

// void cyclicSort(int arr[], int size){
//     int i = 0;
//     while(i < size){
//         int current = arr[i]-1;
//         if(arr[i] != arr[current]){
//             swap(arr[current],arr[i]);
//         }
//         else{
//             i++;
//         }
//     }
//     printArr(arr,size);

// }
// int main(){
//     int n ;
//       cout << "ENTER THE SIZE OF THE ARRAY :"<<endl;
//       cin >> n;
//       //TAKING INPUT DYNAMICALLY
//       int *arr = new int[n];
//       cout << "Please enter number between 0 to n-1";
//       for(int i = 0; i < n; i++){
//         cin >> arr[i];
//       }
//       cyclicSort(arr,n);
// }

#include <iostream>
using namespace std;
// #include<bits/stdc++.h>
  void swap(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;
  }


int firstMissingPositive(int *arr) {
        int i = 0;
        int n = 4;
        while(i < n){
            int current = arr[i]-1;
            if( current >= 0 && arr[i] != arr[current]){
                swap(arr[i],arr[current]);
            }
            else{
                i++;
            }
        }

        for(int i = 0; i < n; i++){
            if(arr[i] != i+1){
                return i+1;
                break;
            }
        }
        return n+1;
    }
int main() {
    int arr[4] = {3,4,-1,1};
    cout << firstMissingPositive(arr);
    
    return 0;
}
