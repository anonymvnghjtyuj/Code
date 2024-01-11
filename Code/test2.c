#include "stdio.h"
#include "windows.h"
#include "string.h"
#include "stdlib.h"


typedef struct{
    int month;
    int time;
}Date;

typedef int (*Date_t)(void);

Date_t date;

int Get_Date(void)
{
    Date times = {3,5};
    Date *pointer = &times;

    return pointer->time;
}


int main(int argc, char **argv)
{
    date = Get_Date;

//    value = value * 10;
//     b = value /10;

    printf("%d\n",(*date)());
    system("pause");
    return 0;
}




