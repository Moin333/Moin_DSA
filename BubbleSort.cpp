#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
     for(int i = 0; i<n;i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])  
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}
void  printArray(int arr[], int size)
{
    int i;
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7] = {10,17,-9,8,-19,20,22};
    BubbleSort(arr,7);
    printArray(arr,7);
    return 0;
}