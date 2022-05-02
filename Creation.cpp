#define _CRT_SECURE_NO_WARNINGS 
#include"Creation.h"
Creation::Creation(char* nema, int year, char* current, float height,  Artist* artist)
{
    this->name = new char[strlen(nema) + 1];
    if (!this->name)
    {
        Memory_error();
    }
    strcpy(this->name, nema);
    this->year = year;
    this->current = new char[strlen(current) + 1];
    if (!this->current)
    {
        Memory_error();
    }
    strcpy(this->current, current);
    this->height = height;
    this->artist = artist;
}

Creation::~Creation()
{
    delete[] name;
    delete[] current;
}

/*Creation::set()
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name ,name);
    this->year = year;
    this->current = new char[strlen(current) + 1];
    strcpy(this->current ,current);
    this->height = height;
    this->artist = artist;
}
*/
void Creation::Memory_error()const
{
    cout << "Memory error" << endl;
    exit(1);
}

void Creation::print()const
{
    cout << "name of creation: " << this->name << endl << "year: " << this->year << endl << "art's current: " << this->current << endl << "height of creation: " << this->height << endl;
}

Creation::Creation()
{
     name=NULL;
    year=0;
    current=NULL;
    height=0.0;
     artist=NULL;
}
Creation::Creation(const Creation& ob)
{
    this->name = new char[strlen(ob.name) + 1];
    strcpy(name, ob.name);
    this->current = new char[strlen(ob.current) + 1];
    strcpy(current, ob.current);
    this->year = ob.year;
    this->height = ob.height;
    this->artist = ob.artist;
}