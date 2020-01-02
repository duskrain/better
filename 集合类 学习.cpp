
#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <string.h> //����memset
class Set
{
public:
	int items[20];			
	int number; 
	Set() 
	{
		number = 0;
		memset(items, 0, sizeof(items)); //�ڴ�����
	}
	
	void init(int items[], int num);
	
	bool add_item(int item);
	
	bool remove_item(int item);
	
	Set operator+ (Set set2);  //���������
	
	Set operator* (Set set2);  //ͬ��
 
	void display();
 
	int is_exist(int item);
 
	void clear();
 
	void count();
};
#endif // CLASS_H_INCLUDED

//��Դ�ļ���
#include "set"
#include <iostream>
using namespace std;
 
int Set::is_exist(int item)	//�ж�Ԫ���Ƿ���ڣ�����λ
{
	for (int i = 0; i < number; i++)
	{
		if (items[i] == item) 
			return i;
	}
	return -1;
}
 
bool Set::add_item(int item)
{
	if (is_exist(item) >= 0 || this->number >= 20) 
		return false;  //�����ϴ��ڸ�Ԫ�أ����߼������������˳�
	items[number] = item; //���򽫼������������β��
	number++;
	return true;
}
 
bool Set::remove_item(int item)
{
	int pos = is_exist(item);
	if (pos == -1) 
		return false;//�������в�����Ԫ�أ��˳�
	for (int i = pos; i < number - 1; i++)
		items[i] = items[i + 1];//Ԫ��ǰ�ƣ�����Ҫɾ��ֵ
	number--;
	return true;
}
 
Set Set::operator* (Set set2)
{
	Set result;
	for (int i = 0; i < this->number; i++)//thisָ����øú����Ķ���
	{
		if (set2.is_exist(this->items[i]) >= 0) //���α���
		{
			result.items[result.number] = this->items[i];
			result.number++;
		}
	}
	return result;
}
 
Set Set::operator+ (Set set2)
{
	Set result;
	for (int i = 0; i<number; i++)
	{ //��Ԫ�غϲ���ͬһ�������ظ�
		result.items[result.number] = this->items[i];
		result.number++;
	}
	for (int j = 0; j<number;j++)
	{
		if (result.is_exist(set2.items[j]) == -1)
		{ //���ϲ���ļ�����ԭ���ϱȽϣ��޳��ظ���
			result.items[result.number] = set2.items[j];
			result.number++;
		}
	}
	return result;
}
 
void Set::init(int items[], int num)
{
	for (int i = 0; i < num;i++)
	{
		this->items[i] = items[i];
	}
	number = num;
}
 
 
void Set::display()
{
	for (int i = 0; i < number;i++)
	{
		cout << items[i] << " ";
	}
	cout << endl;
}
 
void Set::clear()
{
	number = 0;
	memset(items, 0, sizeof(items));
}
 
void Set::count()
{
	cout << number<<endl;
}


//�������ļ���
#include "set"
#include <iostream>
using namespace std;
 
int main()
{
	Set set1, set2;
	int set_one[] = { 1, 23, 5, 6, 89, 54 };
	int set_two[] = { 23, 9, 6, 56, 77 };
	
	set1.init(set_one, sizeof(set_one) / sizeof(set_one[0]));
	set2.init(set_two, sizeof(set_two) / sizeof(set_two[0]));
 
	cout << "��ʼ�����ֵ��" << endl;
	set1.display();
	set2.display();
 
	set1.add_item(3);
	set2.add_item(4);
 
	cout << "��Ӻ��ֵ��" << endl;
	set1.display();
	set2.display();
 
	set1.remove_item(23);
	set2.remove_item(77);
 
	cout << "ɾ�����ֵ��" << endl;
	set1.display();
	set2.display();
 
	cout << "������" << endl;
	Set set3 = set1 * set2;
	set3.display();
 
	cout << "������" << endl;
	Set set4 = set1 + set2;
	set4.display();
 
	cout << "������" << endl;
	set4.count();
 
	cout << "��գ�" << endl;
	set1.clear();
	set1.display();
 
	
	return 0;
}
