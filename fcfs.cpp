#include <iostream>
using namespace std;

int main()
{
    struct fcfs
    {
        int pn[100];
        int bt, ct, tat, wt;
    } b[100];
    int sum1 = 0, sum2 = 0, i, n;
    float avg1 = 0, avg2 = 0;
    printf("Enter number of processes:\n");
    scanf("%d", &n);
    printf("Enter processes and burst times:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", b[i].pn);
        scanf("%d", &b[i].bt);
    }
    b[0].wt = 0;
    for (i = 0; i < n; i++)
    {
        
        b[i + 1].wt = b[i].bt + b[i].wt;
        b[i].tat = b[i].wt + b[i].bt;
    }
   
    printf("PN\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++)
    {
        
        sum1 += b[i].wt;
        sum2 += b[i].tat;
        printf("%d\t%d\t%d\t%d\n", *b[i].pn, b[i].bt, b[i].wt, b[i].tat);
    }
   
    avg1 = (float)sum1 / n;
    avg2 = (float)sum2 / n;
    printf("Average waiting time = %.2f\n", avg1);
    printf("Average turnaround time = %.2f\n", avg2);
    return 0;
}