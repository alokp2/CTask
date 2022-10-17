#include<stdio.h>
int main()
{
	
	int arr[] = {975,123,56,214,1,215},x;	
	int max=arr[0];	
	int second_max =arr[1];
	
	for(x=0;x<6;x++)
	{
		if(max<arr[x])
		{
			max = arr[x];
		}	
	}
	
	printf("Max from an Array = %d\n ",max);
	
	for(x=0;x<6;x++)
	{
		if(second_max<arr[x] && arr[x]<max) 
		{
			second_max = arr[x];
		}	
		
	}
	
	printf("Second Max from an Array = %d ",second_max);	
	return 0;
}