#ifndef DECLARATION_H
#define DECLARATION_H


#include<stdlib.h>

#define DEBUG                         // after completion fo the program just
                                      //comment #define DEBUG so it will not 
#ifndef DEBUG                         // output assert called in the program
    #define ASSERT(n)  
#else

    #define ASSERT(n)                            \
    if(!(n))                                     \
    {                                            \
        printf("%s - Failed ",#n);               \
        printf("on %s "__DATE__);                \
        printf("at %s "__TIME__);                \
        printf("in the file (%s) "__FILE__);     \
        printf("at Line-> (%s) "__LINE__);       \
        exit(1);                                 \
    }                                            \

#endif


typedef unsigned long long U64;

#define NAME "CLAY Engine"
#define BOARD_SQ_NUMBER 120
#define MAX_MOVE 2048

enum {EMPTY, wP, wN, wB, wR, wQ, wK, bP, bN, bB, bR, bQ, bK}; //EMPTY=0 bK=12
enum {FILE_A, FILE_B, FILE_C, FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NO};
enum {RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_NO};

enum {WHITE, BLACK, BOTH};
enum
{
    A1=21, B1, C1, D1, E1, F1, G1, H1,
    A2=31, B2, C2, D2, E2, F2, G2, H2,
    A3=41, B3, C3, D3, E3, F3, G3, H3,
    A4=51, B4, C4, D4, E4, F4, G4, H4,
    A5=61, B5, C5, D5, E5, F5, G5, H5,
    A6=71, B6, C6, D6, E6, F6, G6, H6,
    A7=81, B7, C7, D7, E7, F7, G7, H7,
    A8=91, B8, C8, D8, E8, F8, G8, H8, NO_SQ,
};

enum {WKCA=1, WQCA=2, BKCA=4, BQCA=8};


typedef struct
{
    int move;
    int castle;
    int enPas,fiftyMove;
    int posKey;

}UNDO;

typedef struct 
{
    int pieces[BOARD_SQ_NUMBER];
    U64 PAWNS[3];                   // 64 bit 8*8 representing the full board for
                                    // white,black and both
    int king_sq[2];
    int side;
    int enPas, fiftyMove, ply, history_ply;
    int castle;

    U64 posKey;

    int piece_num[13];
    int big_piece[3];
    int major_piece[3];
    int minor_piece[3];

    UNDO history[MAX_MOVE];

    // piece list for all the pieces in the board
    int pList[13][10]; // 13 different pieces and max of each piece can be 10

}BOARD;



//Macros
#define SQ120(F,R) ((A1+F) + (R*10))     //convert (file,rank)---> sq120 number
#define SQ64(sq120) sq120_sq64[sq120]    //convert  sq120 ---> sq64 base system
#define CNT(bb) CountBits(bb)


//global
extern int sq120_sq64[BOARD_SQ_NUMBER];
extern int sq64_sq120[64];


//functions

//convert.c
extern void convert();
extern void print_BitBoard(U64);

//bitboard.c
extern int CountBits(U64);



#endif