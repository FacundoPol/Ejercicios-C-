#include <iostream>

using namespace std;

typedef int tv[10];

main()
{
	tv n{4,2,6,1,3,8,5,9,7};
	int i,j,o=8,a,k,s;
	
	s=o/2;
	while(s>=1)
	{
		for(i=s;i<=o;i++)
		{
			a=n[i];
			j=i-s;
			while(j>=0 && a<n[j])
			{
				n[j+s]=n[j];
				j=j-s;
			}
			n[j+s]=a;
		}
		s=s/2;
	}
	
	for(k=0;k<=o;k++)
	{
		cout<<"En la posic ["<<k<<"] esta el num: "<<n[k]<<endl;
	}
}
