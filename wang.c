#include <stdio.h>
int imin(int ,int);
int main(void)
{
int l1,l2;
while(scanf("%d %d",&l1,&l2)==2)
printf("the kesser of %d and %d is %d\n",l1.l2,imin(l1,l2));
}
int imin(int n,int m)
{
int min;
if(n<m)
	min=n;
else
	min=m;
return min;

}

