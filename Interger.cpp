//Interger.cpp
#include "Integer.h"
#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;


Interger::Interger():Arr(size1) {
	for (int i = 0;i <size1;i++) {
		Arr[i] = false;
	}
}

Interger::Interger(int a[], int size) :Arr(size1) {
	
	for (int i = 0;i < size;i++) {
		if (a[i] <size1) Arr[a[i]] = true;
	}
	
}

Interger Interger::unionOfSets(const Interger Test1) const{
	Interger temp;
	for (int i = 0;i < size1;i++) {
		if (this->Arr[i] == true || Test1.Arr[i] == true) {
			temp.Arr[i] = true;
		}
		else { temp.Arr[i] = false; }
	}
	return temp;
}

Interger Interger::intersectionOfSets(const Interger Test1)const {
	Interger temp;
	for (int i = 0;i <size1;i++) {
		if (this->Arr[i] == true && Test1.Arr[i] == true) {
			temp.Arr[i] = true;
		}
		else { temp.Arr[i] = false; }
	}
	
	return temp;
}

void Interger::insertElement(int k) {
	if (k >= 0 && k <size1) Arr[k] = true;
}

void Interger::deleteElementElement(int m) {
	if (m >= 0 && m <size1) Arr[m] = false;
}

void Interger::printSet()const {
	bool empty = true;
	int x = 0;
	cout << "该集合为:" << endl;
		for (int i = 0;i <size1;i++) {
			if (Arr[i] == true) {
				cout << setw(4) << i ;
				empty = false;
				x++;
				if (x % 5 == 0 && x != 0)cout << endl;
			}	
		}
	if (empty)
	{
		cout << "---" << endl;
	}
	cout << endl;
}

bool Interger::isEqualTo(const Interger arr)const {
	for (int i = 0; i < size1; i++) {
		if (this->Arr[i] != arr.Arr[i]){ return 0;
		
	}
	}
	return 1;
}