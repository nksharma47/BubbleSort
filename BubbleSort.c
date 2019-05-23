#include <stdio.h>

int main(void)
{
    int a[10],n,i,j,temp,count=0;
    
    printf("Enter size of array:");
    scanf("%d",&n);
    
    printf("Enter array to sort:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            count++;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    printf("Sorted Array is:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	
	printf("\n OPERATION COUNT=%d\n",count);
	
	return 0;
}

