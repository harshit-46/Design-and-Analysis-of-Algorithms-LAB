#include<iostream>
using namespace std;

void insertionSort(int n, int arr[]) {
    int pass=0, shift=0, key, j;
    for(int i=1;i<n;i++) {
        pass++;
        key = arr[i];
        j=i-1;
        for(int k=j;k>=0;k--){
            if(arr[k]>key) {
                arr[k+1]=arr[k];
                arr[k]=key;
                shift++;
            }
            key = arr[i-1];
        }
    }
    cout<<"Number of Passes are: "<<pass<<endl;
    cout<<"Number of Shifts are: "<<shift<<endl;
}

void printArray(int n, int arr[]) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" "<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter number of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    insertionSort(n,arr);
    printArray(n,arr);
}