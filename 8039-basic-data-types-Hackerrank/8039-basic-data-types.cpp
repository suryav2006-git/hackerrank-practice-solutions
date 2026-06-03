#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int i;
    long l;
    char ch;
    float f;
    double d;
    
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    
    printf("%d\n", i);
    printf("%ld\n",l);
    printf("%c\n",ch);
    printf("%f\n",f);
    printf("%.9lf\n",d);
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna