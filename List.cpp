/*************************
* Name: Masaki Takahashi
* Class: CPSC 231 - Fall 2016 
* File: List.cpp 
************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "List.h"
using namespace std;



template <class item> 
list<item>::list(){
	count = 0;
}

template <class item>
list<item>::~list(){

}

template <class item>
void list<item>::push (item entry)
{
	const int total = 20;

	if (count < total)
	{
		if (method == "queue")
		{
			data[count++] = entry;
		}
		else
		{
			for (int i = size()-1; i >-1; i--)
			{
				if (i >= total - 1)
					continue;
				data[i + 1] = data[i];
			}
			data[0] = entry;
			count++;
		}
	}
	else
		cout << "Exceeds the limit of 20" << endl;
}

template <class item>
item list<item>::pop()
{
		int i;
		item temp;


		// Pop item if count > 0
		if (size() > 0)
		{
			if (method == "stack")
			{
				temp = data[0];

				// Shift number
				for (i = 0; i < size (); i++)
				{
					data[i] = data[i + 1];
				}
				count--;
				return temp;

				//temp = data[--count];
				//data[count] = NULL;
				//return temp;
			}

			//else will be a queue 
			else
			{
				temp = data[count - 1];
				count--;
				return temp;
				//temp = data[0];

				//// Shifts numbers
				//for (i = 0; i < size(); i++)
				//{
				//	data[i] = data[i + 1];
				//}
				//count--;
				//return temp;
			}
		}
		// including testing for underflow 
		else
		{
			cout << "underflow"  << endl;
			return item();
		}
}
			
template <class item>
void list<item>::set_method (string input){



	if (input == "Stack")
	{
		method = "stack";
	}
	else if (input == "Queue")
	{
		method = "queue";
	}
}

template <class item>
int list<item>::size () {
	return count;
}