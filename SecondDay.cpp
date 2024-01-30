//Let's Play with while loop to form some intresting patterns
#include<iostream>
using namespace std;
int main(){
    int i = 1,j;
    int n = 8;
    /*while(i <= n)
    {                             12345678
        j = 1;                    12345678
        while(j <= n)             12345678
        {                         12345678
            cout<< j ;            12345678
            j++;                  12345678
        }                         12345678
        cout<< endl;              12345678
        i++;                    
    }*/


    /*while(i <= n)
    {
        j = 1;                    87654321
        while(j <= n)             87654321
        {                         87654321
            cout<<(n - j + 1);    87654321
            j++;                  87654321
        }                         87654321
        cout<< endl;              87654321
        i++;                      87654321
    }*/

    /*while(i <= n)
    {                             *
        j = 1;                    **
        while(j <= i)             ***
        {                         ****
            cout <<"*";           *****          We can change * into any other character or number 
            j++;                  ******         depending upon our requirement to produce multiple 
        }                         *******        form of this shape of pattern.
        cout<< endl;              ********
        i++;
    }*/


    /*int count = 1;
    while(i <= n)
    {
        j = 1;                           1
        for(int j = 1 ;  j <= i ; j++)   2 3
        {                                4 5 6
            cout<<count<<" ";            7 8 9 10
            count++;                     11 12 13 14 15
        }                                16 17 18 19 20 21
        cout<< endl;                     22 23 24 25 26 27 28
        i++;                             29 30 31 32 33 34 35 36
    }*/


    /*while(i <= n)
    {
        int j=1;
        int value = i;        1
        while(j <= i)         2 3
        {                     3 4 5
            cout<<value<<" "; 4 5 6 7 
            value++;          5 6 7 8 9 
            j++;              6 7 8 9 10 11
        }                     7 8 9 10 11 12 13
        cout<<endl;           8 9 10 11 12 13 14 15
        i++;
    }*/


    /*while(i <= n)
    {
        int j=1;                  1
        while(j <= i)             2 1
        {                         3 2 1
            cout<<(i-j+1)<<" ";   4 3 2 1 
            j++;                  5 4 3 2 1 
        }                         6 5 4 3 2 1
        cout<<endl;               7 6 5 4 3 2 1
        i++;                      8 7 6 5 4 3 2 1
    }*/

    /** while(i <= n)       
    {
        int j = 1;                        A A A A A A A A
        while(j <= n)                     B B B B B B B B
        {                                 C C C C C C C C
            cout<<char('A' + i - 1)<<" "; D D D D D D D D
            j++;                          E E E E E E E E
        }                                 F F F F F F F F
        cout<<endl;                       G G G G G G G G
        i++;                              H H H H H H H H
    }*/

    while(i <= n)
    {
        int space = n - i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j <= i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}