#include<iostream>
using namespace std;

// void countSort(int arr[],int n){
//     int i = 0;
//    while(i < n){
//     int current = arr[i]-1;
//         if(arr[i] != i+1){
//             swap(arr[i],arr[current]);
//         }
//         else{
//             i++;
//         }
//     }
//     for(int  i = 0; i < n; i++){
//         cout << arr[i];
//     }
// }
void countSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        int current = arr[i];
        if(arr[i] != i){
            swap(arr[current],arr[i]);
        }
    }
   for(int  i = 0; i < size; i++){
        cout << arr[i];
    }
}


int main(){
    int n;
    cout << "Size of the Array";
    int *arr = new int[n];
    for(int  i = 0; i < n; i++){
        cin >> arr[i];
    }
    countSort(arr,n);

}