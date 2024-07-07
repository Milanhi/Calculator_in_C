#include<stdio.h>

int main()
{
    int num1,  num2;
    char op;

    printf("Insert  operator:\n  ");
    scanf("%c",&op);

    printf("insert number 1:\n  ");
    scanf("%d",&num1);
    
    printf("insert number 2:\n  ");
    scanf("%d",&num2);

    

    if(op == '+')
    {
        printf("Addition: %d",(num1+num2));
    }
    else if(op == '-')
    {
        printf("Subtraction:%d",(num1-num2));
    }
    else if(op == '*')
    {
        printf("Multiplication:%d", (num1*num2));
    }
    else if(op == '/')
    {
        printf("Division:%d", (num1/num2));
    }








    




    return  0;    
}