
#include <stdio.h>
#include <stdlib.h>


int Expected_Area=50;
int  hieght=10;
int base=10;


int CalculateTringleArea(int hieght,int base );
void Test_CalculateTringleArea(int Area);

int main(void)
{
	int Area=CalculateTringleArea(hieght,base );
	 Test_CalculateTringleArea(Area);

	return 0;
}


int CalculateTringleArea(int hieght,int base )
{
	return (.5*base*hieght);
}


void Test_CalculateTringleArea(int Area)
{
	if(Area==Expected_Area)
	{
		printf("ok");
	}
	else
		printf("NOK");
}
