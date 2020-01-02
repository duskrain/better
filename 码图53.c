#include <stdio.h>

void bubbleSort(int data[],int n)
{
	int i,j,temp;
	for(i=n;i>0;i--)
	{
		for(j=n-i;j>0;j--)
		{
			if(data[j]<data[j-1])
			{
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
			}
		}
	}
}

int main()
{
	return 0;
}


//写一个函数实现冒泡排序功能，函数原型：
//                   void  bubbleSort(int data[],int n);
//待排序数据存储在一维整型数组data中，排序后的结果也存储在该数组中。函数内部不能有任何输入与输出操作。
//如果函数采用其他方法正确实现了排序操作，而不是冒泡排序，可以得一半的分数，如果有错误，则根据错误情况扣分。
//你需要先自己写main函数测试您的bubbleSort函数是否能够正确运行，测试结束后删除main函数再递交。


//void bubbleSort(int data[],int n)
//{
//	int i,j,temp;
//	for(i=0;i<n-1;i++)
//	{
//		for(j=0;j<n-i;j++)
//		{
//			if(data[j]<data[j+1])
//			{
//				temp=data[j];
//				data[j]=data[j+1];
//				data[j+1]=temp;
//			}
//		}
//	}
//}
