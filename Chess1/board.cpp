#include "board.h"

Board::Board()
{
    int colToLetter;

    for(int i = 0; i < 64;i++)
    {
        wholeboard[i].inUse = false;
        wholeboard[i].row = (i / 8) + 1;
        colToLetter = (i % 8) + 65;
        wholeboard[i].col = colToLetter;
        qDebug() << i << wholeboard[i].row << wholeboard[i].col;
    }

    //ab gh
    for(int i = 0; i  < 64; i++)
    {
        wholeboard[i].inUse = true;
        i++;
        wholeboard[i].inUse = true;
        i += 5;
        wholeboard[i].inUse = true;
        i++;
        wholeboard[i].inUse = true;
    }

}
