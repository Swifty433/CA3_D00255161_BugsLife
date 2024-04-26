//
// Created by josep on 23/04/2024.
//

#ifndef CA3_D00255161_BUGSLIFE_BUG_H
#define CA3_D00255161_BUGSLIFE_BUG_H

#include <utility>
#include <list>
#include "direction.h"

using namespace std;

class bug {
protected:
    char type;
    int id;                                 //id of bug
    pair<int, int> position;                //position of bug (x,y)
    direction dir;                          //direction bug is facing
    int size;                               //size of bug
    bool alive;                             //bug alive or deal bool
    list<pair<int, int>> path;              //List to store path of bug


public:

    virtual void move() = 0;

    virtual ~bug();

    //constructor
    bug(int id, int x, int y, int dir, int size);
    //default constructor
    bug();

    int getId() const;

    int setId(int id);

    const pair<int, int> &getPosition() const;

    void setPosition(const pair<int, int> &position);

    direction getDir() const;

    void setDir(direction dir);

    int getSize() const;

    void setSize(int size);

    bool isAlive() const;

    void setAlive(bool alive);

    const list<pair<int, int>> &getPath() const;

    void setPath(const list<pair<int, int>> &path);

};

#endif //CA3_D00255161_BUGSLIFE_BUG_H
