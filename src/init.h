#pragma once

#include "types.h"

struct Position;
struct ThreadData;

extern Bitboard PieceKeys[12][64];
extern Bitboard enpassant_keys[64];
extern Bitboard SideKey;
extern Bitboard CastleKeys[16];

void InitNewGame(ThreadData* td);

// init slider piece's attack tables
void InitAttackTables();

void InitAll();
