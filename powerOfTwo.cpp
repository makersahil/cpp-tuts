#include <iostream>
#include<limits.h>
// #include <cmath>

using namespace std;


bool isPowerOfTwo(int n) {
    
    int ans = 1;
    
    for(int i = 0; i <= 30; i++) {
        
        //cout<<" ans "<<ans <<endl;
        if(ans == n)
        {
            return true;
        }
        if(ans < INT_MAX/2)
        ans = ans * 2;   
    }
    return false;
}

int main() {

    isPowerOfTwo(16);

    return 0;
}

