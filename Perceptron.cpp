#include "pch.h"
#include <iostream>

//funkcja aktywacji

//które należą do dwóch liniowo separowalnych zbiorów.
int f(int s) {

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
	int tabd[7] = {1,1,1,-1,-1,-1,-1}; //oczekiwane wyjscie
	int tabwejsc[2][7] = { {2,2,0,-2,-2,0,4} , {1,2,6,10,0,0,-20} };
	
	int wagi[3] = { 0, 0, 0 };
	

	
	int i = 0;
	int d = 0;
	int y = 0;
	int zmiana;
	int suma;
	do {
		zmiana = 0;
		
		for (int i = 0; i < 7; i++)
		{
			suma = 0;
			
			suma = wagi[0] + wagi[1]*tabx1[i] + wagi[2]*tabx2[i];
			y = f(suma);

				std::cout << "y = " << y << "  d = " << tabd[i] << std::endl;

			if (y!=tabd[i]) 
			{
				wagi[0] = wagi[0] + tabd[i] * 1;
				wagi[1] = wagi[1] + tabd[i] * tabx1[i];
				wagi[2] = wagi[2] + tabd[i] * tabx2[i];

				zmiana = 1;
			}		
		}
		
	} while (zmiana > 0);

	system("pause");
	return 0;
}


