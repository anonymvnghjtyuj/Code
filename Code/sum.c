#include "stdio.h"
#include "windows.h"

int nums=2;
int sum(int a,int b)
{
    int sum = 0;
    sum=a+b;
    sum+=nums;
    return sum;
}

int main()
{
    int a = 1,b = 2;
    int num;

    num = sum(a,b);
    printf("%d\n",num);

    system("pause");
    return 0;
}