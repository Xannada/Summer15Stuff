#ifndef PIECE_H
#define PIECE_H

#include <QString>

struct location
{
    int row;
    char col;
};

class Piece
{
private:
    location start;
    location currentSpace;
    QString name;


public:
    Piece();
    void move();
    void MovePiece();

};

#endif // PIECE_H
