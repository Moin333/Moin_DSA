#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[9]={-19,-1,10,12,22,34,56,78,88};
    int key;
    cout<<"Enter the number you want to search for: ";
    cin>>key;
    int sol = BinarySearch(arr,9,key);
    if(sol==-1){
        cout<<"Number Not Found!";
    }
    else{
        cout<<"Element is present at index " << sol;
    }
    return 0;
}