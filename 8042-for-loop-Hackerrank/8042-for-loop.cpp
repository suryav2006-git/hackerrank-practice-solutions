#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    
    string num_word[] = { "", "one","two","three","four","five","six","seven","eight","nine" };
    
    for(int i=a; i<=b ; i++) {
        if (i>=1 && i<=9) {
            cout << num_word[i] << endl;
        } 
        else if(i%2==0) cout << "even"  << endl;
        else cout<<"odd" << endl;
    }
    
    return 0;
}





// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna