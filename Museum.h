#pragma once
#include "Handing.h"
#include "Artist.h"
//class Artist;
//class Creation;
class Museum
{
public:
	Museum();
	~Museum();
	void menu();
	void add_artistz();
	void add_creation();
	void sub_creation(int index);
	void print_atrs_creation();
	void print_creation();
	void print_picture();
	void print_statue();
	void print_specific_art_creation();
	void print_specific_current();
	void print_atrs_picture();
	void print_atrs_statue();
	void print_statue_weight();

private:

	Artist** a_arr;
	Creation** c_arr;
	int size_a_arr, size_carr;
};


