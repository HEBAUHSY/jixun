#include<stdio.h>
#include<string.h>
long long int a[50000],b[50000];
double x[50000]={-1};
int main() 
{ 
    int n,m,flag,i,j,c,d,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%lld %lld",&a[i],&b[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&c,&d);
		for(j=0;j<n;j++)
		{
			x[j]=(double)(d-b[j])/(a[j]-c);
		}
		max=0;
		for(j=1;j<n;j++)
		{
			if(x[j]>x[max])
			{
				max=j;
			}
		}
		if(x[max]<0)
			printf("No cross\n");
		else
			printf("%.15lf\n",x[max]);
	}
    return 0; 
}
