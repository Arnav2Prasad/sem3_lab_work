#include<stdio.h>

int main()
{
    int a,b;
    printf("\nEnter the numbers whose gcd is to be found\n");
    scanf("%d\n%d", &a,&b);

    int gcd;
    if(a<b)
    {
        if(b%a==0)
        {
            gcd=a;
        }
        else{
            for(int i=1;i<=a;i++)
            {
                if(b%i==0 && a%i==0)
                {
                    gcd=i;
                }
            }
        }
    }
    else if(a==b)
    {
        gcd=a;
    }
    else 
    {
        if(a%b==0)
        {
            gcd=b;
        }
        else
        {
            for(int i=1;i<b;i++)
            {
                if(a%i==0 && b%i==0)
                {
                    gcd=i;
                }
            }
        }


    }

    printf("The gcd of %d and %d is %d\n", a,b,gcd);


    return 0;
}
