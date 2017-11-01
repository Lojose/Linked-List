#pragma once
#include "Link.h"

class Iterator {
public:
	void operator++();
	int & operator*();
	bool operator ==(const Iterator & rhs); 
	bool operator !=(const Iterator & rhs);

private:
	Iterator(Link *link) : link(link) {}
	Link *link = nullptr; 
	friend class List; 
};
