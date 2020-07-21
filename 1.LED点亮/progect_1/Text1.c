#include <reg52.h>
sbit LED=P1^0; 	
unsigned  int a;
void main()
{
	while(1)
	{
		LED=1;
		a=50000;
		while(a--);
		LED=0;
		a=50000;
		while(a--);


	}
}