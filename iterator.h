#pragma once
#include "Link.h"

class Iterator {
public:
	void operator++(); 
	void operator--();
	int & operator*();
private:
	Iterator(Link *link); 
	//Iterator(Link *link) : link(link) {}
	Link *link; 
	friend class List; 
};

Iterator::Iterator(Link *link) {
	link = link; 
}
void Iterator::operator++() {
	if (link->next == nullptr)
		link = link->next; 
}

int & Iterator::operator*() {
	return link->val; 
}
