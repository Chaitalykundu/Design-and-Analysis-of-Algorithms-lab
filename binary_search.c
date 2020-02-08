#include<stdio.h>
int main()
{
    int a[10],i,l,h,m,n,k;
    printf("\n Enter the no of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the value to be searched: ");
    scanf("%d",&k);
    l=0;
    h=n-1;
    m=(l+h)/2;
    while(l<=h)
    {
        if(a[m]<k)
            l=m+1;
        else if(a[m]==k)
        {
            printf("%d element is in %d position", k, m+1);
            break;
        }
        else
            h=m-1;
        m=(l+h)/2;
    }
    if(l>h)
        printf("Element not found");
        return 0;
}
