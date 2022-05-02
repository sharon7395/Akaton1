#pragma once
#include"Picture.h"
#include"Statue.h"
class Handing :public Statue, public Picture
{
private:
	int num_screws;

public:
	Handing(int num_screws, char *name, int year, char* current, float height,  Artist* artist, float length, float space, float weight);
	~Handing();
	 void printp()const;
};