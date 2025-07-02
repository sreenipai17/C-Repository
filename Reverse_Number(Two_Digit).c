// Online C compiler to run C program online
#include <stdio.h>
int reverse_num(int num)
{
    int a,b,c;
    a=num/10;
    b=num%10;
    c=b*10+a;
    
    return c;
}
int main() 
{
    
    int num=54;
    int num2=reverse_num(num);
    printf("Reversed Number is %d", num2);

    return 0;
}
