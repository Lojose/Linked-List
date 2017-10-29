#include "iterator.h"
#include <cassert>

void Iterator::operator++() {
	assert(link != nullptr); 
	link = link->next; 
}

int & Iterator::operator*() {
	assert(link != nullptr); 
	return link->val;
}
bool Iterator::operator==(const Iterator & rhs) {
	return link == rhs.link; 
}
