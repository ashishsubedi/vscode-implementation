#include<stdio.h>
double avg(double a[], int n);
    int main()
    {

        int n, i;
        double average, sum = 0;
        scanf("%d", &n);

        double a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%lf", &a[i]);
            // sum += a[i];
        }
        average = avg(a, n);
        printf("The average is %lf\n", average);

        return 0;
    }
    double avg(double a[], int n)
    {
        double s, c;
        c = 0;
        for (int i = 0; i <= n; i++)
        {
            c = c + a[i];
        }
        s = c / n;
        return s;
    }
