/*In this day we learn about Bitwise operator Right Shift(>>) & Left Shift(<<)
Also when we Right shift any Integer number by 1 bit That will throw output as 
Divided by 2 of that particular number.


Our Computer Systems understands Binary Numbers it means our device only deal with 0's & 1's

We have different types of number systems like Decimal (Base 10), Hexa (Base 16), Octal (Base 8)
and Binary (Base 2) according to my understanding as of now.

Let's Focus on our main goal of the Day!!!!!
Today we are going to convert Decimal number system into Binary number system.
For that we divide our given number by 2 and store remainder and reverse it for our required output.

In Points
. / by 2
. Store remainder
. Repeat until num==0
. Reverse remainder

For Code we have formula As ans = bit*pow(10,i)+ans
Lets Code
*/
//code for converting decimal to binary
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    int ans = 0;
    int i = 0;
    while(n!=0)
    {
        int bit = n & 1;
        int powerOfTen = 1;
        for(int j = 0; j < i; j++)
        {
            powerOfTen *= 10;
        }
        ans = bit*powerOfTen+ans;
        n = n >> 1;
        i++;
    }
    cout<<"Decimal  To Binary Conversion is : "<<ans<<endl;
    return 0;
}*/

//code for converting binary to decimal

/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n!=0)
    {
        int digit = n % 10;
        if(digit == 1)
        {
            int powerOfTwo = 1;
            for(int j  = 0; j < i; j++)
            {
                powerOfTwo *= 2;
            }       
            ans = ans + powerOfTwo;
        }
        n = n/10;
        i++;
    }
    cout<< ans <<endl;
    return 0;
}*/


