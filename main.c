//Ths program finds tow elements in the array whose sum equals the target and prints their indices.  

#include<stdio.h>
int main()
{
   int target,k,i,j,N,size;
   int nums[50];
   printf("give me the size of array:");
   scanf("%d",&size);
   for(i=0;i<size;i++)
    {
    printf("enter an integer number: ");
    scanf("%d",&nums[i]);
    }
    printf("enter the target number:");
    scanf("%d",&target);
    j=0;
    while (j<size)
    {
        for(k=j+1;k<size;k++)
        {
            N=nums[j]+nums[k];
            if(N==target){
                printf("Indices: [%d,%d]",j,k);
                return 0;
            }
        }
        j++;
    }

    return 0;
}

