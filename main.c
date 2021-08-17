#include <stdio.h>
int nth_term ( int n,int a,int d) {
    return   (a + (n-1) * d);
}
int main() {
    int n,a,d;
    printf("Enter the value of firstterm :\n");
    scanf("%d",&a);
    printf("Enter the value of commondiffrence :\n");
    scanf("%d",&d);
    printf("Enter the nth value :\n");
    scanf("%d",&n);
    printf(" %d th term of ap is : %d\n",n,nth_term(a,d,n));
    
    return 0;
    
}
 
