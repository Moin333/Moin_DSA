/*Switch allows you to execute block of code among many alternatives.
We can do to same thing using if-else statement but it will be more verbose and harder to read.
Syntax of the Switch Case statements easily understandable than If Else Statement.
Lets see Syntax of switch-case statement,

switch(expression)
{
    case value 1:  //execute this block when expression matches with value1
    //code block for execution when condition is true;
    break;   //optional in each case, But recommended as good programming practice. It helps us

    case value 2:  //execute this block when expression matches with value1
                  //Code Block
                  break;

    case value 3:  //execute this block when expression matches with value1
                   //Code Block
                   break;
    .
    .
    case value n:  //execute this block when expression matches with value1
                   //Code Block
                  break;

    default:      //execute this block when none of the cases match with the given expression

}

From above syntax we can say that, The expression is evaluated once and compared with the 
values of each case label.

If there is a match, the corresponding code after the matching label is executed. For example,
if the value of the variable is equal to constant2, the code after case constant2: is executed 
until the break statement is encountered.
If there is no match, the code after default: is executed.

Let's Make Simple Calculator using Switch-Case Statements.*/

//Program for simple calculator using Switch-Case Statements

/*#include<iostream>
using namespace std;
int main()
{
    char oper;
    int num1,num2;
    cout<<"Enter an arithmetic operation (+,-,*,/): ";
    cin>>oper;
    cout<<"\nEnter two numbers :";
    cin>>num1>>num2;
    switch (oper)
    {
    case '+':
        cout<< num1 << "+" << num2 << "="<< num1 + num2 ;
        break;

    case '-':
        cout<< num1 << "-" << num2 << "="<< num1 - num2;
        break;

    case '*':
        cout<< num1 << "*" << num2 << "="<< num1 * num2;
        break;

    case '/':
        cout<< num1 << "/" << num2 << "="<< num1 / num2;
        break;

    default:
        cout<< "Invalid Operator";
        break;
    }
    return 0;
}*/

/*                                FUNCTIONS
Functions are the well defined task which create complex programs readable and reusable.
Suppose we have to draw and color an image we can divite it into to simple chunks
1.Draw an Image function.
2.Color an Image function.
This will create a program easily Understandable & Reusable

In cpp we have Two types of Functions
1.Predefined Functions (Standard Library Function)
2.User Defined Functions.

Syntax for Function Declaration,

returntype Function_Name (Parameter 1, Parameter 2,..., Parameter n)
{
    // Code Body Of The Function
}
 
Now let's Create a similar Simple Calculator with the help of Functions.
*/
//Program of simple calculator using Functions.
#include<iostream>
using namespace std;
int  add(int x, int y)
{
    return x + y;
}
int subtract(int x , int y )
{
    return x - y ;
}
int multiply(int x, int y)
{
    return x * y;
}
int  divide(int x, int y)
{
    if(y == 0) {
        return  -1;
    } else {
       return x / y;
    }
}
int main()
{
    char oper;
    int num1,num2;
    cout<<"Enter an arithmetic operation (+,-,*,/): ";
    cin>>oper;
    cout<<"\nEnter two numbers :";
    cin>>num1>>num2;
    switch (oper)
    {
    case '+':
        cout<< num1 << "+" << num2 << "="<< add(num1,num2) ;
        break;

    case '-':
        cout<< num1 << "-" << num2 << "="<< subtract(num1,num2);
        break;

    case '*':
        cout<< num1 << "*" << num2 << "="<< multiply(num1,num2);
        break;

    case '/':
        cout<< num1 << "/" << num2 << "="<< divide(num1,num2);
        break;

    default:
        cout<< "Invalid Operator";
        break;
    }

    return 0;
    
}