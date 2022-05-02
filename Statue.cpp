#include"Statue.h"
Statue::Statue(char* name, int year, char* current, float height,  Artist* artist, float space, float weight) :Creation(name, year, current, height, artist)
{
    this->space = space;
    this->weight = weight;
}
Statue::Statue(const Statue& A) : Creation(A)
{
    this->space = A.space;
    this->weight = A.weight;
}
void Statue::print2()const
{
    Creation::print();
    cout << this->space << endl << this->weight << endl;
}
