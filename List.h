/*********************
* Name: Masaki Takahashi
* File: List.h
*********************/

#pragma once

#include <string>
#define ARRAYMAX 20
using namespace std;


// list declarations 
template <class item>
class list
{
public:
	list ();						   		 // Constructor (empty)
	~list ();								  // Destructor
	void push (item entry);					 // Push - add a value to the list
	item pop ();							 // Pop - remove a value from the list, and return that value
	void set_method (string i);			     // Set_Method - use parameter to set the Method variable
	int size ();							 // Size - return count of values in the list	

private:
	string method;
	item data[ARRAYMAX];				 //[] array of values / Head pointer to linked list (do not use built in classes) 
	int count;							 // count value
};