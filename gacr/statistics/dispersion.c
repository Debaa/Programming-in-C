#include<stdio.h>
void discrete();
void fre_distribution();
void grouped_data();
void main()
{
    int choice;
    printf("\n Measures of Dispersion");
    printf("\n Enter Data: ");

    printf("\n Enter 1 for Discrete, 2 for Frequency Distribution, 3 for Grouped data : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: discrete();break;
        case 2: fre_distribution();break;
        case 3: grouped_data();break;
        default: printf("\ninvalid Choice ");break;
    }
}

void discrete()
{   int i,N;
    printf("\n Enter the no of Observation : ");
    scanf("%d",&N);
    printf("\n Enter the observations : ");
    
    float arr[50];
    for(i=0;i<N;i++)
    {
        scanf("%d", &arr[i]);
    }

    //Range
    float sum=0;
    for(i=0;i<N;i++)
    {
        sum=sum+arr[i];
    }


}
void fre_distribution()
{

}
void grouped_data()
{

}

void sort_array_ascending(int N, int arr[])
{
    int arr[50],i,j, temp;
    for(j=1;j<N;j++)
    {
        for(i=0;i<N-1;i++)
        {
            if(arr[i]>arr[i+1])     // to swap
            {
                temp = arr[i];       
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}