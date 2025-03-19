#include <stdio.h>
int main()
{  int hour1,minute1;
int hour2,minute2;

scanf("%d %d",&hour1,&minute1);
scanf("%d %d",&hour2,&minute2);

int ch= hour1-hour2;
int cm= minute1-minute2;

if(cm<0){
	 cm = cm+60;
	 ch--;
}
printf ("时差是%d小时%d分钟\n",ch,cm);
}
 

