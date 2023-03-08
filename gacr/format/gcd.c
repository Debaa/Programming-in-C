 //GCD using EUCLIDS algorithm
 
 #include<stdio.h>
int gcd(int a, int b);
void main()
{
    int a=14, b=21;
    int c = gcd(a,b);

    printf("\n GCD = %d", c);
}

int gcd(int a , int b)
{
    int r =a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}