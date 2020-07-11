#include<stdio.h>

int main ()

{
    int n,i,c0=0,c1=0,j;

    scanf("%d",&n);

    while (n !=0 )

    {
      for(i=0,c0=0,c1=0;i<n;i++)
    {
        scanf("%d",&j);

      if (j==0)
        c0++;
      else
        c1++;
    }

    printf("Mary won %d times and John won %d times\n",c0,c1);

    scanf("%d",&n);
    }

    return 0;
}
