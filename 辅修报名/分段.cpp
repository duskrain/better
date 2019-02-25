/*实现一个函数，根据分数返回对应的字符串
函数原型：const char* get_level(int score);
100分返回字符串"Great"
90-99分返回字符串"S"
80-89分返回字符串"A"
70-79分返回字符串"B"
60-69分返回字符串"C"
0-59分返回字符串"D"
其他返回"Error"*/ 
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


