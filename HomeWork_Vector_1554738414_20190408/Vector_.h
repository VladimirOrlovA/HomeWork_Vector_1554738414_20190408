#include<iostream>
using namespace std;

class vector_
{
	int size;
	int *arr;
public:
	vector_();
	vector_(int size, int val = 0);
	vector_(const vector_ & obj);
	void push_back(int num);
	void pop_back();
	void erase(int pos);
	void clear();
	int getSize();
	bool empty();
	int getElement(int pos);
	void print();
	~vector_();
};
