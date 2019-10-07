/*******************************************************************************
** Program name: Final Project - Storm Area 51 (text based game)
** Author:       Elaine Kim
** Date:         August 9, 2019
** Description:  Header file for the Research class. Inherits from Space.
*******************************************************************************/
#ifndef RESEARCHLAB_HPP
#define RESEARCHLAB_HPP

#include "Space.hpp"

class ResearchLab : public Space
{
private:
    Space *up,
          *down,
          *left,
          *right;
    int spaceNum;
    
public:
    ResearchLab();
    virtual void spaceInfo();
    virtual Space* spaceMenu(Player*);
    virtual int getSpace();
    virtual void setUp(Space*);
    virtual void setDown(Space*);
    virtual void setLeft(Space*);
    virtual void setRight(Space*);
};
#endif