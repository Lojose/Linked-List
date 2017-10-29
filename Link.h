#pragma once

class Link {
private:
	Link(int val) : next(0),val(val) {}
	int val;
	Link *next;
	friend class List; 
	friend class Iterator;
};
