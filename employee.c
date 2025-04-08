#include<stdio.h>
struct employees{
	char name[100];
	int empno;
	int salary;
    int phone;
}s[100],t;
void main(){
	int i,j,n;
	printf("Enter the no of employees");
	scanf("%d",&n);
	printf("Enter the employee details \n");
	for(i=0;i<n;i++){
		printf("enter the name");
		scanf("%s",s[i].name);
		printf("enter the employee number");
		scanf("%d",&s[i].empno);
        printf("enter the employee salary");
		scanf("%d",&s[i].salary);
        printf("enter the employee phone number");
        scanf("%d",&s[i].phone);
	}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(s[j].salary<s[j+1].salary){
                t=s[j];
                s[j]=s[j+1];
                s[j+i]=t;
            }
        }
    }
    printf("The employee list\n");
    printf("NAME\tEMPLOYEE NO\tSALARY\tPHONE\n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%d\t%d\n",s[i].name,s[i].empno,s[i].salary,s[i].phone);
    }
}