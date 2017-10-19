#include "List.h"
#include "Iterator.h"
#include <cassert>

List::List () {
	Listfront = nullptr;
	Listback = nullptr;  
	n = 0, x = 0; 
}
List::~List () {
}
 
bool List::empty() const {
	return Listfront == nullptr;
}

void List::Prepend( Link *x) {
	if (Listback = nullptr) {
		Prepend(Listfront->next); 
	}
}
void List::push_back (int val) {
	Link *pt1 = new Link (val);
	if (empty()) {
		Listfront = Listfront = pt1;
	} else {
		Listback->next = pt1; 
		for (Link * cur = Listfront; )
		Listfront->next = pt1;
	}
	n++; 
}

void List::push_front(int val) {
	Link *pt2 = new Link(val); 
	if (empty ()) {
		Listback = Listfront = pt2; 
	}
	else {
		Listfront->next = pt2; 
		Listfront = pt2; 
	}
	n++; 
}
void List::pop_back() {
	Link *p = Listback; 
	delete p; 
	Listfront->next = Listback; 
	++x; 
}

int List::size() {
	n = n - x; 
	return n; 
 }
