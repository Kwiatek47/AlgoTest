#include <bits/stdc++.h>

using namespace std;

int main() {
        
        freopen("tests/input.txt", "r", stdin);
        freopen("tests/output_solution.txt", "w", stdout);

        // Pass your solution file solution here
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

