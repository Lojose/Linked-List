#pragma once
#include "iterator.h"
#include "Link.h" 

class List {
public:
	List():listfront(nullptr), listback(nullptr) {}
	~List();
	bool empty() const;
	void push_back (int val);
	void push_front (int val);
	int size(); 
	void pop_back();
	void pop_front();
	void insert(Iterator it, int val); 
	void erase(Iterator it);
	Iterator begin();
	Iterator end();
private:
	Link *listfront;
	Link *listback;
	friend class Iterator;
};
