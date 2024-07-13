#include<stdio.h>
#include"declaration.h"

int main()
{
    convert();
    U64 play = 0ULL;

    play |= (1ULL<<SQ64(B2));
    play |= (1ULL<<SQ64(B2));
    play |= (1ULL<<SQ64(B2));

    printf("Bitboard: \n\n");
    print_BitBoard(play);

    return 0;
}