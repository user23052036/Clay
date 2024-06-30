#include<stdio.h>
#include"declaration.h"

int main()
{
    for(int index=0; index<BOARD_SQ_NUMBER; index++)
    {
        if(index!=0 && index%10 == 0)
            printf("\n");
        printf("%d " ,sq64_sq120[index]);
    }
    
    for(int index=0; index<64; index++)
    {
        if(index!=0 && index%8 == 0)
            printf("\n");
        printf("%d " ,sq120_sq64[index]);
    }
    return 0;
}