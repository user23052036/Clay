#include<stdio.h>
#include"declaration.h"


int CountBits(U64 bb)
{
    int cnt=0;
    while(bb != 0)
    {
        bb &= (bb-1);
        cnt++;
    }
    return cnt;
}

void print_BitBoard(U64 bb)
{
    int rank=0,file=0;
    int sq120=0,sq64=0;

    printf("\n");
    for(int rank=RANK_8; rank>=RANK_1; rank--)
    {
        for(int file=FILE_A; file<=FILE_H; file++)
        {
            sq120 = SQ120(file,rank);
            sq64 = SQ64(sq120);

            if((1ULL<<sq64) & bb)
                printf(" X ");
            else
                printf(" - ");
        }
        printf("\n");
    }
    printf("\n\n");
}