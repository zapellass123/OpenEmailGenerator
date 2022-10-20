#include<stdio.h>
void toh(int n, char from_rod, char to_rod, char aux_rod){
    if(n==1){
        printf("\n Move disk 1 from rod %c to %c", from_rod, to_rod);
        return;
    }
    toh(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to %c", n, from_rod, to_rod);
    toh(n-1, aux_rod, to_rod, from_rod);
    return;
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    toh(n, 'A', 'C', 'B');
    return 0;
}