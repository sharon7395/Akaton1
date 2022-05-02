#include "Handing.h"
Handing::Handing(int num_screws, char *name, int year, char* current, float height,  Artist* artist, float length, float space, float weight):Creation(name, year, current, height, artist), Picture(name, year, current, height, artist, length), Statue(name, year, current, height, artist, space, weight)
{
	this->num_screws = num_screws;
}
Handing::~Handing()
{

}
void Handing::printp()const
{
	cout << "length:" << length << endl << "space:" << space << endl << "weight:" << weight << endl << "num crews:" << num_screws << endl;
}