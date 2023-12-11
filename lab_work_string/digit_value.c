#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char str[1000];
    printf("Enter a string\n");
    fgets(str,1000,stdin);
    int count=0;
    int i;
    for(i=0;str[i]!='\0';i++){
	    if (!(str[i]>='0' && str[i]<='9')){
		    count++;
		    break;
	    }
    }
    int m=0;
    int j=i;
    j--;
    if(count==0)
    {
        while(j>=0)
        {
            int d=(int)str[j]-48;
            m=m*10+d;
            j--;
        }
        printf("The integer value of the string is: %d\n", m);
    }

    return 0;
}
