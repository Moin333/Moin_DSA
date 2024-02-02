/*An array is a data structure that is used to store multiple values of similar data types 
in a contiguous memory location.

Properties of Arrays in C++
.An Array is a collection of data of the same data type, stored at a contiguous memory location.
.Indexing of an array starts from 0. It means the first element is stored at the 0th index, the 
second at 1st, and so on.
.Elements of an array can be accessed using their indices.
.Once an array is declared its size remains constant throughout the program.
An array can have multiple dimensions.
.The number of elements in an array can be determined using the sizeof operator.
.We can find the size of the type of elements stored in an array by subtracting adjacent addresses.

Array Declaration in C++
In C++, we can declare an array by simply specifying the data type first and 
then the name of an array with its size.

data_type array_name[Size_of_array];

Initialization of Array in C++
In C++, we can initialize an array in many ways but we will discuss some most common ways to 
initialize an array. We can initialize an array at the time of declaration or after 
declaration.

1. Initialize Array with Values in C++
We have initialized the array with values. The values enclosed in curly braces ‘{}’ are assigned to 
the array. Here, 1 is stored in arr[0], 2 in arr[1], and so on. Here the size of the array is 5.
int arr[5] = {1, 2, 3, 4, 5};

2. Initialize Array with Values and without Size in C++
We have initialized the array with values but we have not declared the length of the array, 
therefore, the length of an array is equal to the number of elements inside curly braces.
int arr[] = {1, 2, 3, 4, 5};

3. Initialize Array after Declaration (Using Loops)
We have initialized the array using a loop after declaring the array. This method is 
generally used when we want to take input from the user or we cant to assign elements one by one 
to each index of the array. We can modify the loop conditions or change the initialization values 
according to requirements.
for (int i = 0; i < N; i++) {
    arr[i] = value;
}

4. Initialize an array partially in C++
Here, we have declared an array ‘partialArray’ with size ‘5’ and with values ‘1’ and ‘2’ only. 
So, these values are stored at the first two indices, and at the rest of the indices ‘0’ is stored.
int partialArray[5] = {1, 2};

5. Initialize the array with zero in C++
We can initialize the array with all elements as ‘0’ by specifying ‘0’ inside the curly braces. 
This will happen in case of zero only if we try to initialize the array with a different value 
say ‘2’ using this method then ‘2’ is stored at the 0th index only.
int zero_array[5] = {0};

*/

//Program to find maximum and minimum element of an array
/*#include<iostream>
#include<limits.h>
using namespace std;
int maximumOfanArray(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minimumOfanArray(int arr[],int n)
{
    int min = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[1000]={};
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = maximumOfanArray(arr,n);
    cout<<"The maximum element in the array is "<<max<<endl;
    int min = minimumOfanArray(arr,n);
    cout<<"The minimum element in the array is "<<min<<endl;
    return 0;
}*/

//Program for linear search
/*#include<iostream>
using  namespace std;
int linearSearch(int arr[],int n,int x)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1; // Return -1 If Element Is Not Found In The Array
}
void print(int result){
    if(result != -1)
    {
        cout << "Element is present at index " << result<<endl;
    }
    else
    {
        cout << "Element is not present "<<endl;
    }
}
int main()
{
    int arr[6]={10,9,3,-19,22,14};
    int key;
    cout<<"Enter the element which you have to find: ";
    cin>>key;
    int  result = linearSearch(arr,6,key);
    print(result);
    return 0;
}*/

//Program to reverse an array
#include<iostream>
#include<utility>
using namespace std;
void ReverseOfanArray(int arr[],int n,int start,int end)
{
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void PrintAnArray(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[7]={4,5,66,19,22,15,6};
    ReverseOfanArray(arr,7,0,6);
    PrintAnArray(arr,7);
    return 0;
}