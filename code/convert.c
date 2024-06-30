#include"declaration.h"


void convert_sq120_sq64()
{
    int file = FILE_A;
    int rank = RANK_1;
    int sq120 = A1;
    int sq64 = 0;

    for(rank=RANK_1; rank<=RANK_8; rank++)
    {
        for(file=FILE_A; file<=FILE_H; file++)
        {
            //dont think of the conversion image think of 2 diff array :)
            sq120 = FR2SQ(file,rank);
            sq64_sq120[sq64] = sq120;   // sq64_sq120[0]=21; sq64_sq120[1]=22;
            sq120_sq64[sq120] = sq64;   // sq120_sq64[21]=0; sq120_sq64[22]=1;
            sq64++;
        }
    }
}

void convert()
{
    convert_sq120_sq64();
}