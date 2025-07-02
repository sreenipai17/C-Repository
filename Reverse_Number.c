#include <stdio.h>

int reverse_num(int num)
{
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

int main() 
{
    int num = 12345;
    int num2 = reverse_num(num);
    printf("Reversed Number is %d\n", num2);
    return 0;
}
