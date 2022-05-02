#pragma once
#include <iostream>
#include "Artist.h"
using namespace std;
class Artist;
class Creation
{
 protected:
    char* name;
    int year;
    char* current;
    float height;
    Artist* artist;

public:
    Creation(char *name, int year, char *current, float height, Artist *artist);
    virtual ~Creation()=0;
    void Memory_error()const;
    void print()const;
    Creation();
    Creation(const Creation& ob);
};

