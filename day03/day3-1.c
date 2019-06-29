//1.将两个数组中的内容互换，长度一样
#include<stdio.h>
int main()
{	
	int i=0,j=0,k=0,temp=0;
	int arr1[] = {1,2,3,4,5,6};
	int arr2[] = {9,8,7,6,5,4};
	int length = sizeof(arr1)/sizeof(arr1[0]);
	for(i=0; i<length; i++)
        {
                temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
        }
	printf("互换后：\n");
	printf("arr1:");
	for(j=0; j<length; j++)
	{
		printf("%d,",arr1[j]);
	}
	 printf("\narr2:");
        for(k=0; k<length; k++)
        {
                printf("%d,",arr2[k]);
        }
	return 0 ;

}
