#include "List.h"

List::~List () {
	delete listfront, listback; 
}
 
bool List::empty() const {
	return listfront == nullptr; 
}

void List::push_back(int val) {
	Link *pt1 = new Link(val);
	if (empty()) { 
		listfront = listback = pt1;
	}
	else { 
		listback->next = pt1;
		listback = pt1; 
	}
}

void List::push_front(int val) {
	Link *pt2 = new Link(val);
	if (empty()) {
		listback = listfront = pt2;
	}
	else {
		pt2->next = listfront;
		listfront = pt2;
	}
}

void List::erase(Iterator it) {
	if (it.link == listfront) { 
		Link *pt = listfront->next;
		delete listfront;
		listfront = pt; 
		return; 
	}
	else {
		Link *prev = listfront;
		while (prev->next != it.link) {
			prev = prev->next;
		}
		Link *o = prev->next;
		prev->next = prev->next->next;
		delete o;
	}
}

void List::insert(Iterator it, int val) {
	if (it.link == listfront) {
		push_front(val);
		return;
	}
	else {
		Link *n = new Link(val);
		Link *prev = listfront;
		while (prev->next != it.link) {
			prev = prev->next;
		}
		prev->next = n;
		n->next = it.link;
	}
}

void List::pop_back() { 
	if (listfront == listback) { 
		Link *pt11 = listback->next; 
		delete pt11; 
		listback = nullptr; 
		listfront = nullptr; 
	}
	else {
		Link *pt12 = listback->next;  
		delete listback; 
		listback = pt12; 
	}
}

void List::pop_front() {
	if (listfront == listback) {
		Link *pt11 = listfront->next; 
		delete pt11; 
		listfront = nullptr; 
		listback = nullptr; 
	}
	else {
		Link *pt10 = listfront->next;
		delete listfront;
		listfront = pt10;
	}
}

int List::size() { 
	Link * link = listfront;
	int count = 0; 
	while (link != nullptr) {
		++count;
		link = link->next;
	}
	return count;
}

Iterator List::begin() {
	return Iterator(listfront);  
}

Iterator List::end() {
	return Iterator(nullptr);
}
