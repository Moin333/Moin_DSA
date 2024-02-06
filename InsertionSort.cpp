#include<iostream>
using namespace std;
void InsertionSort(int arr[], int size) {
    int i = 1;
    while (i < size) {
        int j = i - 1;
        int temp = arr[i]; // copy the current element to be inserted

        /* Move elements that are greater than the value of the current element, one position ahead. */
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j]; // place the previous one in the correct position
            j--;
        }
        arr[j + 1] = temp; // put the value of the current element at its right place
        i++;
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
    int arr[7]={8,4,22,19,16,23,11};
    InsertionSort(arr,7);
    printArray(arr,7);
}