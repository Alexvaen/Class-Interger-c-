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
	//�����ĸ����󣬶���a,dΪ�ռ��ϣ�����bΪ������Arr1��ʼ���ļ��ϣ�����cΪ������Arr2��ʼ���ļ���
	Interger a,d;
	Interger b(Arr1, 20);
	Interger c(Arr2, 20);
	a.printSet();//��ӡa����
	b.printSet();//��ӡb����
	c.printSet();//��ӡc����
	a=b.unionOfSets(c);//c��b�Ĳ�������a
	a.printSet();
	d = b.intersectionOfSets(c);//c��b�Ľ�������d
	d.printSet();
	d.insertElement(100); //d��������100
	d.deleteElementElement(4);//d����ɾ��4
	d.printSet();///��ӡd����
	cout << a.isEqualTo(a)<<endl;
	system("pause");
}