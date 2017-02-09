#include <iostream>
using namespace std;

int main()
{
	char c[100],b;
	int i,max= atoi(c);
	cin >> c;
	for(i=0;i<100;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
			b=c[i];
		}
	}
	
	cout <<"Caracterul \'"<< b <<"\' are cea mai mare valoarea ASCII "<< max << endl;
	system("pause");
	return 0;
}
