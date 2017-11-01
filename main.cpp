#include <iostream>
#include <cassert>
#include "List.h"

using namespace std;

void Test1() { //List containing only one element using pushback and iterating through it. 
	List a;
	assert(a.empty() == true); 
	assert(a.size() == 0);  
	a.push_back(90);
	assert(a.empty() == false);
	assert(a.size() == 1); 

	Iterator ii = a.begin();
	Iterator ee = a.end();
	assert(*ii == 90);
	++ii;
	assert(ii == ee);
}

void Test2() { //List containing more than one element and iterating through it. 
	List a;
	a.push_back(90);
	a.push_back(21);
	a.push_back(0);
	assert(a.empty() == false);

	Iterator ii = a.begin();
	Iterator ee = a.end();
	assert(*ii == 90);
	++ii;
	assert(*ii == 21);
	++ii;
	assert(*ii == 0);
	++ii;
	assert(ii == ee);
}

void Test3() {// List containing only one element using pushback and popfront.
	List a;
	a.push_back(1);
	a.pop_front();
	assert(a.empty() == true);
}

void Test4() { // List containing only two elements using pushback and popfront.
	List a;
	a.push_back(90);
	a.push_back(12);
	assert(a.size() == 2);
	assert(a.empty() == false);

	Iterator ii = a.begin();
	assert(*ii == 90);
	a.pop_front();
	assert(a.size() == 1);
	assert(a.empty() == false);

	ii = a.begin();
	assert(*ii == 12);
	a.pop_front();
	assert(a.begin() == a.end());
	assert(a.empty() == true);
}

void Test5() { // List containing more than two elements using pushback and popfront.  
	List a;
	a.push_back(0);
	a.push_back(12);
	a.push_back(90);
	a.pop_front();

	Iterator ii = a.begin();
	assert(*ii == 12);
	++ii;
	assert(*ii == 90);
	++ii;
	assert(ii == a.end());
	assert(a.empty() == false);
	a.pop_front();

	ii = a.begin();
	assert(*ii == 90);
	++ii;
	assert(ii == a.end());
	assert(a.empty() == false);
	a.pop_front();

	ii = a.begin();
	assert(ii == a.end());
	assert(a.empty() == true);
}

void Test6() { // List containing one element using pushback and popback.
	List a;
	a.push_back(9);
	assert(a.size() == 1);

	Iterator ii = a.begin();
	assert(*ii == 9);
	assert(a.empty() == false);
	a.pop_back();
	assert(a.size() == 0);
	assert(a.empty() == true);
}

void Test7() { // List containing more than one element using pushback and popback. 
	List a;
	a.push_back(0);
	a.push_back(12);
	a.push_back(21);
	a.pop_back();

	Iterator ii = a.begin(); 
	assert(a.size() == 2); 
	assert(*ii == 0);
	++ii; 
	assert(*ii == 12); 
	++ii; 
	assert(ii == a.end()); 
	assert(a.empty() == false); 
	a.pop_back(); 

	ii = a.begin();
	assert(a.size() == 1);
	assert(*ii == 0);
	++ii;
	assert(ii == a.end());
	a.pop_front(); 

	ii = a.begin(); 
	assert(ii == a.end()); 
	assert(a.empty() == true); 
}

void Test8() { //List containing only one element using pushfront and iterating through it.
	List a;
	assert(a.empty() == true);
	assert(a.size() == 0);
	a.push_front(90);
	assert(a.empty() == false);
	assert(a.size() == 1);

	Iterator ii = a.begin();
	Iterator ee = a.end();
	assert(*ii == 90);
	++ii;
	assert(ii == ee);
}

void Test9() {// List containing more than one element and iterating through it. 
	List a;
	a.push_front(90);
	a.push_front(21);
	a.push_front(0);
	assert(a.empty() == false);

	Iterator ii = a.begin();
	Iterator ee = a.end();
	assert(*ii == 0);
	++ii;
	assert(*ii == 21);
	++ii;
	assert(*ii == 90);
	++ii;
	assert(ii == ee);
}

void Test10() { //List containing only one element using pushfront and popfront.
	List a;
	a.push_front(1);
	a.pop_front();
	assert(a.empty() == true);
}

void Test11() { //list containing only two elements using pushfront and popfront
	List a;
	a.push_front(0);
	a.push_front(12);
	a.push_front(90);
	a.pop_front();

	Iterator ii = a.begin();
	assert(*ii == 12);
	++ii;
	assert(*ii == 0);
	++ii;
	assert(ii == a.end());
	assert(a.empty() == false);
	a.pop_front();

	ii = a.begin();
	assert(*ii == 0);
	++ii;
	assert(ii == a.end());
	assert(a.empty() == false);
	a.pop_front();

	ii = a.begin();
	assert(ii == a.end());
	assert(a.empty() == true);
	assert(a.size() == 0); 
}

void Test12() { // List containing one element using pushback and popback.
	List a;
	a.push_back(9);
	assert(a.size() == 1);

	Iterator ii = a.begin();
	assert(*ii = 9);
	++ii;
	assert(ii == a.end());
	assert(a.empty() == false);
	a.pop_back();
	
	ii = a.begin(); 
	assert(ii == a.end());
	assert(a.size() == 0);
	assert(a.empty() == true); 
}

void Test13() { // List containing more than one element using pushback and popback.
	List a;  
	a.push_back(12);
	a.push_back(21);
	a.push_back(24);
	a.pop_back();

	Iterator ii = a.begin(); 
	assert(*ii == 12);
	++ii; 
	assert(*ii == 21);  
	++ii; 
	assert(ii == a.end());
	a.pop_back();

	ii = a.begin();
	assert(*ii == 12);
	++ii; 
	assert(ii == a.end());
	a.pop_front();

	ii = a.begin(); 
	assert(ii == a.end());
	assert(a.size() == 0);
	assert(a.empty() == true); 
}

void Test14() {// Testing insert function list with only one element. 
	List a; 
	a.push_back(2);
	assert(a.size() == 1);

	Iterator ii = a.begin(); 
	assert(*ii == 2); 
	a.insert(ii, 1); 
	assert(a.size() == 2); 

	ii = a.begin(); 
	assert(*ii == 1);  
	++ii; 
	assert(*ii == 2); 
	++ii; 
	assert(ii == a.end());     
}

void Test15() { // Testing insertfunction with multiple elements iterator pointing in the middle.
	List a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(4);

	Iterator it = a.begin();
	++it;
	++it;
	assert(*it == 4);
	a.insert(it, 3);

	it = a.begin();
	assert(*it == 1);
	++it;
	assert(*it == 2);
	++it;
	assert(*it == 3);
	++it;
	assert(*it == 4);
	++it;
	assert(it == a.end());
}

void Test16() { // Testing insertfunction with multiple elements iterator pointing to the end.
	List a;
	a.push_back(90);
	a.push_back(23);
	
	Iterator ii = a.begin(); 
	assert(*ii == 90); 
	++ii;
	assert(*ii == 23);
	++ii; 
	assert(ii == a.end());
	assert(a.size() == 2); 
	a.insert(ii, 12); 

	ii = a.begin(); 
	assert(*ii == 90);
	++ii;
	assert(*ii == 23);
	++ii;
	assert(*ii == 12);
	assert(a.size() == 3);
	++ii; 
	assert(ii == a.end());
}

void Test17() { // List containing only one element, erasing one element.
	List a; 
	a.push_back(90); 

	Iterator ii = a.begin();  
	a.erase(ii); 
	assert(a.size() == 0);
	assert(a.empty() == true); 
}

void Test18() { // List containing more than one element, erasing link with the iterator pointing to the middle
	List a;
	a.push_back(90);
	a.push_back(12);
	assert(a.size() == 2);

	Iterator ii = a.begin();
	++ii;
	a.erase(ii);
	assert(a.size() == 1);

	ii = a.begin();
	a.erase(ii);
	assert(a.size() == 0);
	assert(a.empty() == true);
}

void Test19() { // List containing more than one element, erasing link with the iterator pointing to the end 
	List a;
	a.push_back(90);
	a.push_back(12);
	a.push_back(2);
	assert(a.size() == 3);

	Iterator ii = a.begin();
	assert(*ii == 90); 
	++ii;
	assert(*ii == 12); 
	++ii;
	assert(*ii == 2);
	a.erase(ii);
	assert(a.size() == 2);

	ii = a.begin();
	assert(*ii == 90);
	++ii;
	assert(*ii == 12);
	++ii;
	assert(ii == a.end());
}
	
int main() {
	Test1();
	cout << "Test 1 passed." << endl; 
	Test2();
	cout << "Test 2 passed." << endl;
	Test3(); 
	cout << "Test 3 passed." << endl;
	Test4();  
	cout << "Test 4 passed." << endl;
	Test5(); 
	cout << "Test 5 passed." << endl;
	Test6(); 
	cout << "Test 6 passed." << endl;
	Test7(); 
	cout << "Test 7 passed." << endl;
	Test8(); 
	cout << "Test 8 passed." << endl;
	Test9(); 
	cout << "Test 9 passed." << endl;
	Test10(); 
	cout << "Test 10 passed." << endl;
	Test11(); 
	cout << "Test 11 passed." << endl;
	Test12();
	cout << "Test 12 passed." << endl; 
	Test13();
	cout << "Test 13 passed." << endl;
	Test14();
	cout << "Test 14 passed." << endl;
	Test15();
	cout << "Test 15 passed." << endl;
	Test16();
	cout << "Test 16 passed." << endl;
	Test17();
	cout << "Test 17 passed." << endl;
	Test18();
	cout << "Test 18 passed." << endl;
	Test19();
	cout << "Test 19 passed." << endl; 
	cout << "All tests passed. " << endl;
}
