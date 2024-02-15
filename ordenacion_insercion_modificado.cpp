#include <iostream>

using namespace std;

typedef int tv[10];

main()
{
	tv n{4,8,1,6,2,7,3,9,5};
	int i,j,a,o=8,k;
	
	for(i=o-1;i>=0;i--)
	{
		a=n[i];
		j=i+1;
		while(j<=o && a>n[j])
		{
			n[j-1]=n[j];
			j++;
		}
		n[j-1]=a;
	}
	
	for(k=0;k<=o;k++)
	{
		cout<<"["<<k<<"] : "<<n[k]<<endl;
	}
}
