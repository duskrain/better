/*ʵ��һ�����������ݷ������ض�Ӧ���ַ���
����ԭ�ͣ�const char* get_level(int score);
100�ַ����ַ���"Great"
90-99�ַ����ַ���"S"
80-89�ַ����ַ���"A"
70-79�ַ����ַ���"B"
60-69�ַ����ַ���"C"
0-59�ַ����ַ���"D"
��������"Error"*/ 
#include<iostream> 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
const char* get_level(int score){
        static   char   s[10]; 
	if(score>=0 &&score<=100){
		switch(score/10){
			case 10:   strcpy(s,   "Great"); break;
			case 9: strcpy(s,   "S"); break;
			case 8: strcpy(s,   "A"); break;
			case 7: strcpy(s,   "B"); break;
			case 6: strcpy(s,   "C"); break;
            default: strcpy(s,   "D"); 
		}
	}
	else{
		strcpy(s,   "Error");}
		    return   s; 
}

int main()
{  int x=100;
    const char * name2;
    name2 = get_level(x);
    printf("%s\n",name2);
    return 0;
}


