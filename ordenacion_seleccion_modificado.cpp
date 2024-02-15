#include <iostream>

using namespace std;

typedef int tv [10];

main()
{
	int i,j,o=8,k,a,f;
	bool c;
	tv n{5,7,3,1,9,2,8,4,6};
	
	for(i=o;i>=1;i--)
	{
		a=n[i];
		c=false;
		for(j=i-1;j>=0;j--)
		{
			if(n[j]<a)
			{
				a=n[j];
				f=j;
				c=true;
			}
		}
		if(c==true)
		{
			n[f]=n[i];
			n[i]=a;
		}
	}
	
	
	for(k=0;k<=o;k++)
	{
		cout<<"["<<k<<"] : "<<n[k]<<endl;
	}
}
