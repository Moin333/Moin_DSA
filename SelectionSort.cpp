#include<iostream>
#include<utility>
using namespace std;
void SelectionSort(int arr[],int n){

    for(int i = 0; i<n-1;i++)
    {
        int min_index = i; //min index is assumed as first element of array.
        for(int j = i+1; j < n; j++)   //compare with all the elements in remaining part of array
        {
            if(arr[j] < arr[min_index])   //if we found a smaller element, update the minimum index
            {
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
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
    int arr[7]={23,19,-18,4,3,56,78};
    SelectionSort(arr,7);
    printArray(arr,7);
}