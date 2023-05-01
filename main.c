#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,s=1,a[s],c=0,j=0;
    s=sizeof(a)/4;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&s);
    printf("Input %d elements in the array:\n",s);
    for(i=0;i<s;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a[i]);
    }
    printf("The unique elements found in the array are:\n");
    for(i=0;i<s;i++)
    {
        c=0;
        for(j=0;j<s;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }

        }

        if(c==0)
            {
                printf("%d",a[i]);
            }
    }
    return 0;
}
