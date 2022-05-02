#pragma once
#include<iostream>
using namespace std;
#include"Date.h"
#include"Creation.h"
class Creation;
class Artist 
{
private:
	Date Date_of_birth, Date_of_death;
	char* name;
	Creation** names_Artwork;
	int num_Artwork;
	void Memory_error()const;
public:
	Artist(char* name, const Date &Date_of_birth, const Date &Date_of_eath);
	 ~Artist ();
	void addArtwork();
	Artist(const Artist& ob);
	 friend ostream& operator<<(ostream& os,  const Artist& A);

};


