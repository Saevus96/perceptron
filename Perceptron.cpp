#include "pch.h"
#include <iostream>
int suma(int s) {

	if (s > 0) {
		return 1;
	}
	else {
		return -1;
	}
}

int main()
{
	int tabx1[7] = {2,2,0,-2,-2,0,4};
	int tabx2[7] = {1,2,6,10,0,0,-20};
	int tabd[7] = {1,1,1,-1,-1,-1,-1};
	int x0[7] = { 1,1,1,1,1,1,1 };
	int wx1[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int wx2[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int wx0[7] = { 0, 0, 0, 0, 0, 0, 0 };

	int y = 0;
	int sum = 0;
	int i = 0;
	int d = 0;
	while (i < 7)
	{				
			sum += (tabx1[i] * wx1[i] + wx0[i]) + (tabx2[i] * wx2[i] + wx0[i]);
		
		if (suma(sum) != tabd[i]) {
			wx1[i] = wx1[i] + (tabd[i] * tabx1[i]);
			wx2[i] = wx1[i] + (tabd[i] * tabx2[i]);
			wx0[i] = wx1[i] + (tabd[i] * x0[i]);
		
			
		}
		else if(suma(sum)==tabd[i]) {
			std::cout << suma(sum) << std::endl;
			sum = 0;
			i++;
		}
	}
	
	system("pause");
	return 0;
}


