#include <stdio.h>
#include <math.h>

int main (){

    int a, b, z;

    printf("a=");
    scanf ("%d", &a);

    printf("b=");
    scanf ("%d", &b);

    z=a+b;

    if (z>0){
        printf("siz kiritgan son yegindisi 0 dan katta %d", z);
    }
    else if (z<0){
        printf("siz kiritgan son yegindisi 0 dan kichkina %d", z);
    }
    else{
        printf("siz kiritgan son yegindisi 0 ga teng %d", z);
    }


    return 0;
}