#include<stdio.h>
    struct student {
        char name[10];
        int roll_no;
        float m1,m2,m3,m4,m5,m6;
    }s;
int main(){
    int n;
    printf("enter no. of stu..");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter the details of a students\n");
    for(int i=0;i<n;i++){
        printf("Student %d:\n", i + 1);
        printf("student name\n");
        printf("student roll_no.\n");
        printf("student marks in 6 subjects\n");

    scanf("%s%d%f%f%f%f%f%f",s[i].name,&s[i].roll_no,&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5,&s[i].m6);
    }
    for(int i=0;i<n;i++){
        float total;
        total=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5+s[i].m6);
        float percentage=(total/600)*100;
        printf("Student %d: ", i + 1);
if(percentage>=95)
printf("eligible\n");
else 
printf("not eligible\n");


    }

    return 0;
}