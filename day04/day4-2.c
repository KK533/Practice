//2.求出0-999之间的所有水仙花数
#define _STDC_WANT_LIB_EXT1_    1
#include<math.h>
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int temp = i, count = 1,sum = 0;
		while (temp / 10)
		{
			count++;
			temp = temp / 10;
		}
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, count);
			temp = temp / 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}

	}
	return 0;
}

