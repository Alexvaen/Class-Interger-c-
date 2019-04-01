//Interger.h
#include <iostream>
#include<vector>
using namespace std;

class Interger {
public:
	static const int size1 = 101;
	Interger();//init constructor
	Interger(int a[], int size);//overload constructor
	Interger unionOfSets(const Interger Test1)const;
	Interger intersectionOfSets(const Interger Test1)const;
	void insertElement(int k);
	void deleteElementElement(int m);
	void printSet()const;
	bool isEqualTo(const Interger arr)const;
private:
	bool emptyArr;
	vector<bool>Arr;

}; 
