#include <stdio.h> 
int main()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
{
	int a=5;
	int ans=a/2+5*(1+a);
	printf("ans=%d\n",ans);
	int b,c,d;
	b=c=d=a;
	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
	ans+=c+d;
	printf("ans=%d\n",ans);
	return 0;
}   
