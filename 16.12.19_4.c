#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float *findExtr(float tab[20][20], int w, int k, int type)
{

	float ext = tab[0][0];
	int r, c;
	
	int i, j;
	for(i = 0; i < w; i++)
	{
		for(j = 0; j < k; j++)
		{
			if(type)
			{
				if(ext < tab[i][j])
				{
					ext = tab[i][j];
					c = j;
					r = i;
				}
			}
			else
			{
				if(ext > tab[i][j])
				{
					ext = tab[i][j];
					c = j;
					r = i;
				}
			}
		}
	}
	
	float out[3] = {ext, r, c};
	return out;
}

int main()
{
	
}
