/*Kattis Project Description
Mirko has found an old chessboard and a set of pieces in his attic. Unfortunately, the set contains only white pieces,
and apparently an incorrect number of them. A set of pieces should contain:

One king, One queen, Two rooks, Two bishops, Two knights, Eight pawns

Mirko would like to know how many pieces of each type he should add or remove to make a valid set.

Input
The input consists of 6 integers on a single line, each between 0 and 10 (inclusive).
The numbers are, in order, the numbers of kings, queens, rooks, bishops, knights and pawns in the set Mirko found.

Output
Output should consist of 6 integers on a single line; the number of pieces of each type Mirko should add or remove. 
If a number is positive, Mirko needs to add that many pieces. If a number is negative, Mirko needs to remove pieces.
*/

#include <iostream>

using namespace std;

int main()
{
    int king, queen, rook, bishop, knight, pawn;
    int kingdif, queendif, rookdif, bishopdif, knightdif, pawndif;

    //Enter counts for each chess piece
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;

    //Find the number of pieces that need to be added or removed for each piece
    if (king != 1)
        kingdif = 1 - king;
    else
        kingdif = 0;
    if (queen != 1)
        queendif = 1 - queen;
    else
        queendif = 0;
    if (rook != 2)
        rookdif = 2 - rook;
    else
        rookdif = 0;
    if (bishop != 2)
        bishopdif = 2 - bishop;
    else
        bishopdif = 0;
    if (knight != 2)
        knightdif = 2 - knight;
    else
        knightdif = 0;
    if (pawn != 8)
        pawndif = 8 - pawn;
    else
        pawndif = 0;
    //Display results
    cout << kingdif << " " << queendif << " " << rookdif << " " << bishopdif << " " << knightdif << " " << pawndif;
    return 0;
}
