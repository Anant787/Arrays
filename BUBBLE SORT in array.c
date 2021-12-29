//BUBBLE SORT in array...
#include<stdio.h>
int main()
{
    int n,i,j,flag,temp;
    //int a[n];
    printf("ENTER THE SIZE OF ARRAY :: ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ELEMENT IN ARRAY :: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        flag=0;                       // for optimise swapping
        for(j=0;j<n-1-i;j++)         //(n-1-i) for required comparison
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    printf("Array after bubble sort :: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
