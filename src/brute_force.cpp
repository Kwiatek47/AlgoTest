#include <bits/stdc++.h>

using namespace std;

int main() {
        
        freopen("tests/input.txt", "r", stdin);
        freopen("tests/output_brute_force.txt", "w", stdout);

        // Pass your brute_force file solution here
        // ...

        int n;
        cin >> n;

        if(n % 2 == 0) { 
                cout << 1;
        } else {
                cout << 0;
        }

        return 0;
}

