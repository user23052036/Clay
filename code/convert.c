#include"declaration.h"

int sq120_sq64[BOARD_SQ_NUMBER]={[0 ... BOARD_SQ_NUMBER-1]=65};
int sq64_sq120[64]={[0 ... 64-1]=120};

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
            sq120 = SQ120(file,rank);
            
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