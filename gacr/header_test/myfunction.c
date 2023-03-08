int myfunction()
{
    return 143;
}
int factorial(int n)
{
    int i = 1,fact=1;
    while(i<=n)
    {
        fact = fact * i;
        i++;
    }
    return fact;
}