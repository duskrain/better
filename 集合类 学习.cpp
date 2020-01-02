
#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include <string.h> //包含memset
class Set
{
public:
	int items[20];			
	int number; 
	Set() 
	{
		number = 0;
		memset(items, 0, sizeof(items)); //内存清零
	}
	
	void init(int items[], int num);
	
	bool add_item(int item);
	
	bool remove_item(int item);
	
	Set operator+ (Set set2);  //运算符重载
	
	Set operator* (Set set2);  //同上
 
	void display();
 
	int is_exist(int item);
 
	void clear();
 
	void count();
};
#endif // CLASS_H_INCLUDED

//类源文件：
#include "set"
#include <iostream>
using namespace std;
 
int Set::is_exist(int item)	//判断元素是否存在，并定位
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
		return false;  //若集合存在该元素，或者集合已满，则退出
	items[number] = item; //否则将集合添加至集合尾部
	number++;
	return true;
}
 
bool Set::remove_item(int item)
{
	int pos = is_exist(item);
	if (pos == -1) 
		return false;//若集合中不含该元素，退出
	for (int i = pos; i < number - 1; i++)
		items[i] = items[i + 1];//元素前移，覆盖要删的值
	number--;
	return true;
}
 
Set Set::operator* (Set set2)
{
	Set result;
	for (int i = 0; i < this->number; i++)//this指向调用该函数的对象
	{
		if (set2.is_exist(this->items[i]) >= 0) //二次遍历
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
	{ //将元素合并到同一，不管重复
		result.items[result.number] = this->items[i];
		result.number++;
	}
	for (int j = 0; j<number;j++)
	{
		if (result.is_exist(set2.items[j]) == -1)
		{ //将合并后的集合与原集合比较，剔除重复者
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


//主程序文件：
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
 
	cout << "初始化后的值：" << endl;
	set1.display();
	set2.display();
 
	set1.add_item(3);
	set2.add_item(4);
 
	cout << "添加后的值：" << endl;
	set1.display();
	set2.display();
 
	set1.remove_item(23);
	set2.remove_item(77);
 
	cout << "删除后的值：" << endl;
	set1.display();
	set2.display();
 
	cout << "交集：" << endl;
	Set set3 = set1 * set2;
	set3.display();
 
	cout << "并集：" << endl;
	Set set4 = set1 + set2;
	set4.display();
 
	cout << "个数：" << endl;
	set4.count();
 
	cout << "清空：" << endl;
	set1.clear();
	set1.display();
 
	
	return 0;
}
