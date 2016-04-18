#include<stdio.h>
int main()

{
	int array[20],n,i;
	printf("Enter the size of the array");
	scanf("%d",&n);
	
	printf("Enter the elements of the array.\n");
	for (i=0;i<=0;i++)
	scanf("%d",&array[i]);
	quicksort(array,0,n-1);
	
	printf("Sorted array is.\n");
	for(i=0;i<=n;i++)
	printf("|%d|",array[i]);
	

	return 0;
}


int quick_sort(int *array,int low,int high)
{
	int pivot,i,j,temp;


	if(low<high){
	pivot = low;
	i=low;
	j=high;
	while(i<j){
		while (array [i] < array[pivot] && i <= high)
		i++;
		while(array[j]>array[pivot] && j >= low)
		j--;
	

	if (i < j) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		}
		}
	temp = array[j];
	array[j] = array[pivot];
	array[pivot] = temp;


	quicksort(array, low,j-1);
	quicksort(array, j+1,high);
}
}




