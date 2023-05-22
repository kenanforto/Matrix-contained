#include <stdio.h>

int matrica_sadrzana(int m[][100],int a,int b,int n[][100],int c,int d)
{

	int pnu=0,i,j,k,l;
	
	if(c>a || d>b)
	{
		pnu=0;
		i=a;
		j=b;
	}
	else
	{
	for(i=0;i<a;++i)
	{
		for(j=0;j<b;++j)
		{
			if(m[i][j]==n[0][0])
			{
				for(k=0;k<c;k++)
				{
					for(l=0;l<d;l++)
					{
						if(a<(i+c) || b<(j+d))
						{
							pnu=0;
							k=c;
							l=d;
							break;
						}
					  	else if(m[i+k][j+l]==n[k][l]) 
						{
						pnu=1;
						}
						else if(k==c && l==d && pnu==1)
						{
							i=a;
							j=b;
						}
						else if(m[i+k][j+l]!=n[k][l])
						{
							pnu=0;
							k=c;
							l=d;
							break;
						}
					}
				}
			}
			
		}
	}
	}
	return pnu;
}
int main() {
	printf("Zadaća 3, Zadatak 4");
	return 0;
}