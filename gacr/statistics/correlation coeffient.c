// Correlation Coefficient

#include<stdio.h>
#include<math.h>
void main()
{
    int N,i;
    float x[20],y[20],x2[20],y2[20],xy[20];
    float sx=0,sy=0,sx2=0,sy2=0; float sxy=0;
    float mean_x,mean_y, r;

    printf("\n Enter number of Observation: ");
    scanf("%d", &N);
    
    printf("\n Enter X: ");
    for(i=0;i<N;i++)
    {
        scanf("%f", &x[i]);
    }

    printf("\n Enter Y: ");
    for(i=0;i<N;i++)
    {
        scanf("%f", &y[i]);
    }

    //Calculating x2,y2,xy
    for(i=0;i<N;i++)
    {
        x2[i]=x[i]*x[i];
    }
    for(i=0;i<N;i++)
    {
        y2[i]=y[i]*y[i];
    }
    for(i=0;i<N;i++)
    {
        xy[i]=x[i]*y[i];
    }

    //Calculating sum
    for(i=0;i<N;i++)
    {
        sx += x[i];
        sy += y[i];
        sx2 += x2[i];
        sy2 += y2[i];
        sxy += xy[i];
    }
    
    // Calculate means
    mean_x = (float) sx/N;
    mean_y = (float) sy/N;

    r = (sxy/N - mean_x*mean_y )/ sqrt((((float)sx2/N) - (mean_x*mean_x))*(((float)sy2/N) - (mean_y*mean_y)));

    printf("\n Sums= %f,%f,%f,%f,%f,means:%.1f,%.1f",sx,sy,sx2,sy2,sxy,mean_x,mean_y);
    printf("\n Correlation Coefficient =%.3f",r);


}