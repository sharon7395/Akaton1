#define _CRT_SECURE_NO_WARNINGS 
#include <typeinfo>
#include"Artist.h"
#include "Handing.h"
using namespace std;
int main()
{
	//Artist(char* name, const Date &Date_of_birth, const Date &Date_of_eath);
	Date op(1, 1, 1900), oj(1, 1, 1999);
	char name[10] = "neoray";
	Artist ob(name,op,oj);
	ob.addArtwork();
	return 0;
}
