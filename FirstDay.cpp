/*
Flow of problem solving 
. Understand problem first
. Given values
. Approach
. Program
In programming section we write code which is machine understandable and also before 
programming we draw a Flowcharts and write Psuedocodes

char = 1 byte
bool = 1 byte
int = 4 byte        
float = 8 byte 
double = 8 byte
long double = 16 byte
In General Cases
sizeof() operator to know how much memory particular variables takes
In bit values any positive number can be determined by it's first bit as zero from left 
And negative number can be determined by it's first bit as one from left


Operators 
.Arithmetic Operator
.Relational Operator
.Logical Operator
.Assignment Operator
.Bitwise Operator

Conditional Statements
.If
.If-else
.If-elif-else
.While-loop
.Switch Cases

*/

//Write Hello World Program, Showcase sizeof() operator & Find the sum of all even numbers  between 0 and n (n>2)
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    
    cout<<"Hello World"<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<"Please enter the  value of n or from where you want to sumup the even numbers: ";
    cin>>n;
    int i = 0;
    while (i<=n)
    {
        if (i%2==0)
        {
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of all even numbers: "<<sum;
    return 0;
}