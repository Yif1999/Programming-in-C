int ArrayShift(int a[],int n,int m)
{
    while (m--)
    {
         int temp = a[n - 1];
        for (int i = n - 1; i >= 1; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
}