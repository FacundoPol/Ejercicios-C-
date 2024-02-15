#include <iostream>

using namespace std;

typedef int tv[10];

main()
{
	tv n{5,2,8,3,4,9,1,6,7};
	int i,j,k,a,o=8;
	
	for(i=1;i<=o;i++)
	{
		a=n[i];
		j=i-1;
		while(j>=0 && a<n[j])
		{
			n[j+1]=n[j];
			j--;
		}
		n[j+1]=a;
	}
	
	for(k=0;k<=o;k++)
	{
		cout<<"En posic ["<<k<<"] el num: "<<n[k]<<endl;
	}
}
