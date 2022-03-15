#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if ( num <= 9)
    {
    printf("%d\n",num);
    }
    else if ( num > 9 && num <= 35)
    {
	num=num+55;
    printf("%c\n",num);
    }
    return 0;
}
