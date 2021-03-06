#ifndef SUDOKUCELL_H
#define SUODKUCELL_H

#include<set>
#include<vector>
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <thread>
#include <mutex>
#include <queue>
#include <utility>  //for std::pair

using namespace std;

class Cell
{
    uint row_id;
    uint col_id;
    uint value;
    std::set<uint> possibles;
    bool autoFillCell();

public:
    Cell(uint row, uint col, uint size);
    Cell(uint row, uint col, uint val, uint size);
    ~Cell();
    bool isEmpty();
    uint getVal();
    void setVal(uint val);
    bool removePossibleValue(uint val);
    bool removePossibleValue(std::vector<uint> &vals);
    uint getRowId();
    uint getColId();
    void dump();
    std::vector<uint> getPossibleValues();
    bool operator == (Cell &rhs);
};

#endif  //SUDOKUCELL_H
