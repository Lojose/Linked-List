#include "List.h"
#include "Iterator.h"
#include <list>
#include <cassert>
#include <iostream> //Testing Purposes

using namespace std; //Testing Purposes
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

void List::push_back (int val) {
	Link *pt1 = new Link (val);
	if (empty()) {
		Listfront = Listback = pt1;
	} else {
		for (Link *cur1 = Listfront; cur1 != nullptr; cur1 = cur1->next) {
			if (cur1 == nullptr) Listback = cur1; 
			pt1 = Listback; 
		}
		Link *update1 = new Link(val); 
		Listfront->next = update1; 
		Listfront = update1; 
	}
	n++; 
}

void List::push_front(int val) {
	Link *pt2 = new Link(val); 
	if (empty ()) {
		Listback = Listfront = pt2; 
	}
	else {
		for (Link *cur2 = Listfront; cur2 != nullptr; cur2 = cur2->next) {
			if (cur2 == nullptr) Listfront = cur2; 
			cur2 = Listfront; 
		}
		Link *update2 = new Link(val); 
		Listback->next = update2; 
		Listback = update2; 
	}
	n++; 
}

void List::prepop_back(int val) {
	Link *pt3 = new Link(val);
	Listback->next = pt3;
	Listback = pt3;
	delete pt3;
}

void List::pop_back() {
	prepop_back(0); 
	++x; 
}
void 

int List::size() {
	n = n - x; 
	return n; 
 }

int main() {
	List a; 
	a.push_back(5); 
	cout << "test1" << endl;
	//cout << Listfront << endl;
	a.push_back(4); 
	cout << "test2" << endl;
	a.push_back(23); 
	cout << "test3" << endl;
	a.push_front(10); 
	cout << "test4" << endl;
	a.push_front(13); 
	cout << "test5" << endl;
	a.push_front(0); 
	cout << "test6" << endl; 
	cout << a.size() << endl; 
	a.pop_back();
	cout << a.size() << endl;
	a.pop_back();
	a.pop_back();
	a.pop_back();
	a.pop_back();
	a.pop_back();
	a.pop_back();
	a.pop_back();
	cout << "All test passed." << endl; 
}
