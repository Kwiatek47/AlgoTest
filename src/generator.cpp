#include <bits/stdc++.h>                                        

using namespace std;

#define RA(a, b) (rand() % ((b) - (a) + 1) + (a))               // Random number beetwen a and b

int main() {
        srand(time(NULL));

        freopen("tests/input.txt", "w", stdout);                // The output of this program will be placed in the input.txt file

        cout << RA(1, 5);

        return 0;
}