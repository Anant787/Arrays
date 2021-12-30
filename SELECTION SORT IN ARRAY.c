//SELECTION SORT IN ARRAY..
#include<stdio.h>
int main()
{
    int n,i,j,temp,min;
    printf("ENETR THE SIZE OF ARRAY :: ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ELEMENT IN ARRAY :: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            /*
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
            */
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("ARRAY AFTER SELECTION SORT :: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
