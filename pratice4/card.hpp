// Practice 4
// Brian Schwartz
// Dr. Sutton
// Implement a card whose value is represented using a bitfield 
// (or bitfields). You should support the following operations:

//      1. Default constructible
//      2. Copyable
//      3. Destructible (trivial)
//      4. Equality operators (==, !=)
//      5. Ordering (< and friends)

// *Probably remove these*
#pragma once
#include <iostream>

enum Rank {
  Ace,
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine,
  Ten,
  Jack,
  Queen,
  King
};

enum Suit {
  Hearts, 
  Diamonds,
  Clubs, 
  Spades
};


class Card{
public:
    // Defualt Constructor
    // This is also indeterminate
    Card() {}

    // Unsigned integers
    Card(Rank r, Suit s) : bits((unsigned)s << 4 | (unsigned)4) {}

    Rank get_rank() const {
    return (Rank)(0b001111 & bits); // 0xf & bits
    }

  Suit get_suit() const {
    return (Suit)((0b110000 & bits) >> 4);
    } 


private:
};