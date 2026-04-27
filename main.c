#include <stdio.h>
#include <stdlib.h>

// Recursively print numbers from n down to 0
void countDown(int number)
{
    if(number==0)
    {
        printf("%d",number);
    }
    else
    {
        printf("%d\n",number);
        countDown(number-1);
    }
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    countDown(n);

    return 0;
}
