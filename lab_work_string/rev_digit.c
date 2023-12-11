#include<stdio.h>

int main()
{
    printf("Enter the number you want to reverse : ");
    int n;
    scanf("%d", &n);

    int m=n;
    int rev=0;
    while(n!=0)
    {
        int d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    printf("Original number :  %d\n", m);
    printf("Reversed number :  %d\n", rev);

    return 0;
}
