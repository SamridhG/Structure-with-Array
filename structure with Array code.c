#include<stdio.h>
#include<stdlib.h>
typedef struct details{
char name[20];
char last_name[10];
int roll_no;
int Marks;
} data;
int main()
{
  int i;
  int number_of_entry;
  printf("Enter the number of entery:");
  scanf("%d",&number_of_entry);
  data p[100];
  printf("Enter details As follow namw,last name,roll no.,marks\n");
  for(i=0;i<number_of_entry;i++)
  {
   scanf("%s%s%d%d",&p[i].name,&p[i].last_name,&p[i].roll_no,&p[i].Marks);
   fflush(stdin);
  }
  printf("\n-------------------------------------------------------------\n");
  for(i=0;i<number_of_entry;i++)
  {
   printf("Student %d details\n",i+1);
   printf("Name:%s\nLast name:%s\nRoll number:%d\nMarks:%d",p[i].name,p[i].last_name,p[i].roll_no,p[i].Marks);
   printf("\n-------------------------------------------------------------\n");

  }


}
