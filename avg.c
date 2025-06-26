#include<stdio.h>
int main()
{
    int i,num,sum=0;
    float avg;
    for(i=1;i<=10;i++)
    {printf("Enter number %d:",i);
    scanf("%d",&num);
    sum+=num;
}
avg=sum/10;
printf("Sum=%d\n",sum);
printf("Average=%2f\n",avg);
return 0;
}