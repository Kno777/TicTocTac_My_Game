#ifndef __TICTOCTAC_BOARD_H__
#define __TICTOCTAC_BOARD_H__

const int size = 3;
class Board
{
public:
    char board[size][size] = 
    {
        {'2','7','6'} ,
        {'9','5','1'} ,
        {'4','3','8'}
    };
public:
    void print_board();
};
#endif //__TICTOCTAC_BOARD_H__