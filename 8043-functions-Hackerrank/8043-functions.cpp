#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxof(int a , int b, int c, int d) {
    if(a>=b && a>=c && a>=d) return a;
    else if (b>=c && b>=d) return b;
    else if (c>=d) return c;
    else return d;
}

int main() {
    int a, b , c,d;
    
    cin >> a >> b >> c >> d ;
    
    int maximum = maxof(a,b,c,d);
    cout << maximum;
    return 0;
}






// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna