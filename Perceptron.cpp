#include "pch.h"
#include <iostream>


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
	for (int i = 0; i < 7; i++)
	{
		sum += (tabx1[i] * wx1[i] + wx0[i]) + (tabx2[i] * wx2[i] + wx0[i]);
		
		if (sum > 0)
		{
			y = 1;
		}
		else if (sum <= 0)
		{
			y = -1;
		}

		if (y == tabd[i]) {

		}
		else {
			wx1[i] = wx1[i] + tabd[i] * tabx1[i] * tabx2[i];
			wx2[i] = wx1[i] + tabd[i] * tabx1[i] * tabx2[i];
			wx0[i] = wx1[i] + tabd[i] * tabx1[i] * tabx2[i];
		}
		

	
	}




	
	
	system("pause");
	return 0;
}


