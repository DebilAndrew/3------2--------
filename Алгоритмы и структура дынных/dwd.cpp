#include <windows.h>
#include <iostream>
#include <ctime>

using namespace std;

struct Eltype {
	char family[10];
	char home[10];
	bool attestat;
	bool obsh;	
};

struct CellType {
	CellType* next;
	CellType* prev;
	Eltype data;
};

struct list {
	CellType* first;
	CellType* last;
	CellType* ptr;	
};

