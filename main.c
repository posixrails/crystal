#include <stdio.h>

int main(int argc, const char * argv[]) {

    int n; // angle count
    int b; // side length
    int a; // apothem
    int h; // height
    
    printf("Enter your angle count: "); scanf("%d", &n);
    printf("Enter your side length: "); scanf("%d", &b);
    printf("Enter your apothem length: "); scanf("%d", &a);
    printf("Enter your height length: "); scanf("%d", &h);
    
    const int vol = ( ( ( ( n * b * a ) / 2 ) * h ) / 3 ) * 2;
    printf("The volume integer is %d\n", vol);
    
    return 0;
}

