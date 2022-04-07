#include <stdio.h>
int main(){
    int n, i, p[50], wt[50], tat[50];
    printf("no.of processors:");
    scanf("%d", &n);
    printf("input the burst time according to processes:");
    for(i=0; i<n; i++){
        scanf("%d", &p[i]);
    }
    wt[0]=0;
    for(i=1; i<n; i++){
        wt[i]=wt[i-1]+p[i-1];
    }
    for(i=0; i<n; i++){
        tat[i]=wt[i]+p[i];
    }
    printf("processor  burst time  waiting time  turn around time");
    for(i=0; i<n; i++){
        printf("\n%d\t\t", i+1);
        printf("%d\t\t", p[i]);
    printf("%d\t\t", wt[i]);
    printf("%d\t\t", tat[i]);
    }
    float ttat = 0, twt = 0, awt, atat;
    for(i=0; i<n; i++){
        twt = twt+wt[i];
        ttat = ttat+tat[i];
    }
    awt = twt/n;
    atat = ttat/n;
    printf("\ntotal waiting time:");
    printf("%.3f", twt);
    printf("\ntotal turn around time:");
    printf("%.3f", ttat);
    printf("\naverage waiting time:");
    printf("%.3f", awt);
    printf("\naverage turn around time");
    printf("%.3f", atat);
    return 0;
}

