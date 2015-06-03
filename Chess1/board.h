#ifndef BOARD_H
#define BOARD_H

#include <QDebug>
//#include "piece.h"

struct location
{
    bool inUse;
    int row;
    char col;
};

class Board
{
private:
    location wholeboard[64];

public:
    Board();
};

#endif // BOARD_H
