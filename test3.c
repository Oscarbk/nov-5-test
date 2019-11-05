#include <stdio.h>
#include <string.h>
 
void arraystuff(){
int myarray[10];
  int *my;
  int i,j,k;
  for (i=0;i<10;i++) myarray[i]=i;
  my=myarray;
  j = *(my+3);
  k = myarray[3];
  /* Ques.1: what is printed by the statement below */
  printf("Question1: j= %d  k= %d \n", j,k);
  my=myarray+4;
  /* Ques.2: What is printed by statement below */
  printf("Question 2: *my= %d *(myarray+4)= %d myarray[4]= %d\n", *my,*(myarray+4), myarray[4]);
  /* Ques.3: what is the output of the print statement below */
  printf("Question 3:  *(myarray+10)= %d \n", *(myarray+10));
}


int main()
{ 
  int i;
  int *ip=&i;
  int x=3;
  int y=72;
  int *px= &x;
  int *py = &y;
  int **ptr=NULL;
   
  float  gpa;
 
    /* Determine what are printed by the program by each printf statement */
  arraystuff();
    i=20;
  *ip=10;
  /* Ques.4: what is printed */

  printf("Question 4: Value of i is %d\n", i);
 
  py=px;
  /* Ques.5: what is printed below */ 
  printf("Question 5: contents at px %d  and py  %d\n", *px, *py);
  /* Ques.6: what is printed below */

  printf("Question 6:  value of x is %d \n", x);

  
  x=99;
  /* Ques.7: what is printed below */
  printf("Question 7:  value of y is %d  value of *py is %d \n", y, *py);

  ip = &x;
  /* Ques.8: what is printed */
  printf("Question 8: Value of *ip is %d\n", *ip);
  ptr= &py;
  /* Ques.9: what is printed */
  printf("Question 9: Value of **ptr is %d\n", **ptr);
    ptr=&px;
	/* Ques.10: what is printed below */
  printf("Question 10: Value of **ptr is %d\n", **ptr);



  
  

}


