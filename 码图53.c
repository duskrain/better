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


//дһ������ʵ��ð�������ܣ�����ԭ�ͣ�
//                   void  bubbleSort(int data[],int n);
//���������ݴ洢��һά��������data�У������Ľ��Ҳ�洢�ڸ������С������ڲ��������κ����������������
//���������������������ȷʵ�������������������ð�����򣬿��Ե�һ��ķ���������д�������ݴ�������۷֡�
//����Ҫ���Լ�дmain������������bubbleSort�����Ƿ��ܹ���ȷ���У����Խ�����ɾ��main�����ٵݽ���


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
