#include "TicTocTac_board.h"
#include "TicTocTac_Start_Game.h"
#include <iostream>

void Board::print_board()
{
    std::cout << "   1 2 3" << std::endl; 
    for(int i = 0; i < 3; ++i)
    {
        std::cout << i + 1 << " ";
        for(int j = 0; j < 3; ++j) 
        {
            std::cout << " " << ((board[i][j] == 'X') || (board[i][j] == 'O') ? board[i][j] : '*');
        }
        std::cout << std::endl;
    }
}
Board open_bord;
Start st;

void Start::start_game()
{
    std::cout << std::endl;
    std::cout << "--------------GAME START'S------------" << std::endl;
    std::cout << std::endl;
    
    std::cout << "X's Start" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    st.x[0] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'X';
    system("cls");

    std::cout << "O's Start" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'X')
    {
        std::cout << "Game Over!" << " " << "This is Position 'X'" << std::endl;
        exit(1);
    }
    st.o[0] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'O';
    system("cls");

    std::cout << "X's Step Two" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'O')
    {
       std::cout << "Game Over!" << " " << "This is Position 'O'" << std::endl;
       exit(1); 
    }
    st.x[1] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'X';
    system("cls");

    std::cout << "O's Step Two" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'X')
    {
        std::cout << "Game Over!" << " " << "This is Position 'X'" << std::endl;
        exit(1);
    }
    st.o[1] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'O';
    system("cls");

    std::cout << "X's Step Tree" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'O')
    {
       std::cout << "Game Over!" << " " << "This is Position 'O'" << std::endl;
       exit(1); 
    }
    st.x[2] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'X';
    system("cls");

    if(st.x[0] + st.x[1] + st.x[2] == 15)
    {
        std::cout << "X's Winner" << std::endl;
        exit(1);
    }

    std::cout << "O's Step Tree" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'X')
    {
        std::cout << "Game Over!" << " " << "This is Position 'X'" << std::endl;
        exit(1);
    }
    st.o[2] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'O';
    system("cls");

    if(st.o[0] + st.o[1] + st.o[2] == 15)
    {
        std::cout << "O's Winner";
        exit(1);
    }

    std::cout << "X's Step Four" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'O')
    {
       std::cout << "Game Over!" << " " << "This is Position 'O'" << std::endl;
       exit(1); 
    }
    st.x[3] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'X';
    system("cls");

    if(st.x[0] + st.x[1] + st.x[3] == 15 || st.x[0] + st.x[3] + st.x[2] == 15 || st.x[3] + st.x[1] + st.x[2] == 15)
    {
        std::cout << "X's Winner";
        exit(1);
    }

    std::cout << "O's Step Four" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'X')
    {
        std::cout << "Game Over!" << " " << "This is Position 'X'" << std::endl;
        exit(1);
    }
    st.o[3] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'O';
    system("cls");

    if(st.o[0] + st.o[1] + st.o[3] == 15 || st.o[0] + st.o[3] + st.o[2] == 15 || st.o[3] + st.o[1] + st.o[2] == 15)
    {
        std::cout << "O's Winner";
        exit(1);
    }

    std::cout << "X's Step Five" << std::endl;
    open_bord.print_board();
    std::cin >> st.col >> st.row;
    if(open_bord.board[st.col - 1][st.row - 1] == 'O')
    {
       std::cout << "Game Over!" << " " << "This is Position 'O'" << std::endl;
       exit(1); 
    }
    st.x[4] = open_bord.board[st.col - 1][st.row - 1] - '0';
    open_bord.board[st.col - 1][st.row - 1] = 'X';
    system("cls");

    if (st.x[2] + st.x[3] + st.x[4] == 15 || st.x[1] + st.x[3] + st.x[4] == 15 || st.x[1] + st.x[2] + st.x[4] == 15 ||
        st.x[0] + st.x[3] + st.x[4] == 15 || st.x[0] + st.x[2] + st.x[4] == 15 || st.x[0] + st.x[1] + st.x[4] == 15)
    {
        std::cout << "X's Winner" << std::endl;
        exit(1);
    }
    else
    {
        std::cout << "Draw!!!";
        exit(1);
    }
}
