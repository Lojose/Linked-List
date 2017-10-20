#pragma once
#include "iterator.h"
#include "Link.h" 

class List {
public:
	List();
	~List();
	bool empty() const;
	void push_back (int val);
	void push_front (int val);
	int size(); 
	void pop_back();
	void pop_front();
	Iterator begin();
	Iterator end();
private:
	Link *Listfront;
	Link *Listback; 
	void prepop_back(int val); 
	void prepop_front(int val); 
	int n; 
	int x; 
};
 
