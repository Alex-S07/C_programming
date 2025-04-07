#include<stdio.h>
struct Mystruct{
	int a;
	float b;
	char c;
};
union Myunion{
	int a;
	float b;
	char c;
};
int main(){
	 printf("Size of float : %lu bytes\n",sizeof(float));
	 struct Mystruct s;
	 union Myunion u;
	 printf("size of struct Mystruct:%ld bytes \n",sizeof(s));
	 printf("size of union Myunion :%ld bytes \n",sizeof(u));
	 return 0;
} 
