//2019.3.30
//10.8 main.cpp
//201730101313
#include<iostream>
#include"Integer.h"
using namespace std;

int main() {
	int Arr1[20],Arr2[20];
	for (int i = 0;i < 20;i++) { 
		Arr1[i] = 2*i;
		Arr2[i] = 4*i;
	}
	//创建四个对象，对象a,d为空集合，对象b为以数组Arr1初始化的集合，对象c为以数组Arr2初始化的集合
	Interger a,d;
	Interger b(Arr1, 20);
	Interger c(Arr2, 20);
	a.printSet();//打印a集合
	b.printSet();//打印b集合
	c.printSet();//打印c集合
	a=b.unionOfSets(c);//c与b的并集等于a
	a.printSet();
	d = b.intersectionOfSets(c);//c与b的交集等于d
	d.printSet();
	d.insertElement(100); //d集合增加100
	d.deleteElementElement(4);//d集合删除4
	d.printSet();///打印d集合
	cout << a.isEqualTo(a)<<endl;
	system("pause");
}