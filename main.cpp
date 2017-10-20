#include <iostream>
#include <cassert>
#include "List.h"

using namespace std;

int main() {
	List a;
	assert(a.empty() == true); 
	assert(a.size() == 0); 
	a.push_back(5);
	assert(a.size() == 1);
	assert(a.empty() == false); 
	a.push_back(4);
	assert(a.size() == 2);
	a.push_back(23);
	assert(a.size() == 3);
	a.push_front(10);
	assert(a.size() == 4);
	a.push_front(13);
	assert(a.size() == 5);
	a.push_front(0);
	assert(a.size() == 6);
	a.pop_back();
	assert(a.size() == 5);
	a.pop_back();
	assert(a.size() == 4);
	a.pop_back();
	assert(a.size() == 3);
	a.pop_back();
	assert(a.size() == 2);
	a.pop_back();
	assert(a.size() == 1);
	a.pop_back();
	assert(a.size() == 0);
/*
	list<int>::iterator
	it = a.begin();
	it = nullptr; 
	cout << *it << endl;
	//assert(*it == 3);
	assert(*it == 3);
	++it;
	assert(*it == 10);
	++it;
	assert(it == a.end());

	it = a.begin();
	assert(*it == 3);
	*it += 1;
	cout << *it << endl;


	cout << "All test passed." << endl;
	/*a.pop_back();
	assert(a.size() == 1);
	//a.pop_back(); 
	/*assert(a.size() == 0); 
	assert(a.empty() == true); 
	list<int>::iterator it = a.begin();
	//it = nullptr; 
	cout << *it << endl; 
	//assert(*it == 3);
	assert(*it == 3);
	++it;
	assert(*it == 10);
	++it;
	assert(it == a.end());

	it = a.begin();
	assert(*it == 3);
	*it += 1;
	cout << *it << endl;
	
*/	
	cout << "All tests passed." << endl;
}

