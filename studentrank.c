#include<stdio.h>
struct students{
	char name[100];
	int m[6];
	int total;
	int regno;
	int rank;
}s[100],t;
void main{
	int i,j,n;
	printf("Enter the no of students");
	scanf("%d",&n);
	printf("Enter the student details \n");
	for(i=0;i<n;i++){
		printf("enter the name");
		scanf("%s",s[i].name);
		s[i].total=0;
		printf("Enter the mark out of 25");
		for(j=0;j<6;j++){
			scanf("%d",&s[i].m[j]);
			s[i].total+= s[i].m[j];
		}
		printf("enter the register number"
		scanf("%d",&s[i].regno);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[j].total<s.[j+1]total){
				t=s[j]
				s[j]=s[j+1]
				s[j+i]=t
			}
		}
	}
	printf("The rank list);
	printf("\t NAME \t REGISTRATION NO \t RANK \n")
	for(i=0;i<n;i++){
		printf("%s\t%d\t%d\n",s[i].name,s[i].regno,s[i].rank);
	}
	return 0;
}
