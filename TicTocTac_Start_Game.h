#ifndef __TICTOCTAC_START_GAME_H__
#define __TICTOCTAC_START_GAME_H__

class Start
{
private:
    int x[5] {0};
    int o[4] {0};
    int col = 0;
    int row = 0;
public:
    void start_game();
};
#endif // __TICTOCTAC_START_GAME_H__