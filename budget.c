#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    int total;
    printf("\n MONTHLY POCKET MONEY: ");
    scanf("%d",&a);
    printf("\n MONTHLY FOOD EXPENSES: ");
    scanf("%d",&b);
    printf("\n TRAVEL EXPENSES:");
    scanf("%d",&c);
    printf("\n COLLEGE AND STATIONARY EXPENSES:");
    scanf("%d",&d);
    printf("\n MONEY SPENT ON ENTERTAINMAINT:");
    scanf("%d",&e);
    printf("\n OTHER EXPENSES:");
    scanf("%d",&f);
    total = b+c+d+e+f;
    printf("\n TOTAL EXPENSES=%d",total);
    int remaining;
    remaining = a-total;
    printf("\n REMAINING MONEY=%d",remaining);
    if(remaining>=1000)
    {
        printf("\n YOU CAN AFFORD THE HEADPHONES");
    }
    else
    {
        printf("\n YOU CANNOT AFFORD THE HEADPHONES");
    }
    return 0;
}