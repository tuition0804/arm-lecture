#include <stdio.h>
#include <time.h>
extern int fibonacci(int x);
int main(int argc, char **argv)
{
int number=0;
int result=0;
clock_t t1,t2;
scanf("%d",&number);
t1=clock();
result = fibonacci(number);
t2=clock();
printf("The fibonacci sequence at %d is: %d\nIt cost %lf seconds and %d cycles.\n\n", number, result,(t2-t1)/(double)(CLOCKS_PER_SEC),(int)(t2-t1));
}
