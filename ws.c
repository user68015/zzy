#include<stdio.h>
int ws(int n)
{
int a,b;
b=0;
for(a=1;a<n;a++)
{
	if(n%a==0)
	b=b+a;
}
if(n==b)
return 1;
else return 0;		
}
void main()
{
	int n;
	for(n=1;n<=1000;n++)
	if(ws(n)==1)printf("%d\n",n);
 } 
	
	

