(2)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int n;
    printf("Elementlar sonini kiriting: ");
    scanf("%d", &n);

    int natural_sonlar[n];

    for(int i=0; i<n; i++){
        natural_sonlar[i] = pow(2,i);
    }

    for(int j=0; j<n; j++) printf("\nnatural_sonlar[%d] = %d", j, natural_sonlar[j]);

    return 0;
}

(3)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int n, d;
    printf("Elementlar sonini kiriting: ");
    scanf("%d", &n);

    d=n;

    int natural_sonlar[n];
    printf("\n%d\n", natural_sonlar[0]=n);

    for (int i=0; i<=n; i++) {
        printf("%d\n", d=n+d);
    }

    return 0;
}

(4)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int n, d;
    printf("Elementlar sonini kiriting: ");
    scanf("%d", &n);

    d=n;

    int natural_sonlar[n];
    printf("\n%d\n", natural_sonlar[0]=n);

    for (int i=0; i<=n; i++) {
        printf("%d\n", d=d*n);
    }

    return 0;
}
