#include <bits/stdc++.h>                                        

using namespace std;

#define RA(a, b) (rand() % ((b) - (a) + 1) + (a))               // Random number beetwen a and b


// Function to generate a random array of integers
vector<int> generateRandomArray(int n, int minVal, int maxVal) {
        vector<int> arr;
        for (int i = 0; i < n; i++) {
                arr.push_back(RA(minVal, maxVal));
        }
        return arr;
}

// Function to generate a random string of given length
string generateRandomString(int length, char minChar, char maxChar) {
        string result = "";
        for (int i = 0; i < length; i++) {
                result += RA(minChar, maxChar);
        }
        return result;
}

// Function to generate a random 2D matrix (grid)
vector<vector<int>> generateRandomMatrix(int rows, int cols, int minVal, int maxVal) {
        vector<vector<int>> matrix(rows, vector<int>(cols));
        for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                matrix[i][j] = RA(minVal, maxVal);
                }
        }
        return matrix;
}

// Function to generate a random pair of integers
pair<int, int> generateRandomPair(int minVal, int maxVal) {
        return {RA(minVal, maxVal), RA(minVal, maxVal)};
}

// Function to generate a random graph (adjacency list)
vector<vector<int>> generateRandomGraph(int n, int m, int minWeight, int maxWeight) {
        vector<vector<int>> graph(n);
        for (int i = 0; i < m; i++) {
                int u = RA(0, n - 1);
                int v = RA(0, n - 1);
                int weight = RA(minWeight, maxWeight);
                graph[u].push_back(v);
                graph[v].push_back(u);  // For an undirected graph
        }
        return graph;
}

// Function to generate a random sequence of integers with specific constraints
vector<int> generateConstrainedSequence(int n, int minVal, int maxVal, int sumLimit) {
        vector<int> seq;
        int sum = 0;
        for (int i = 0; i < n; i++) {
                int num = RA(minVal, maxVal);
                sum += num;
                if (sum > sumLimit) {
                break;
                }
                seq.push_back(num);
        }
        return seq;
}

// Function to generate a random tree (connected acyclic graph) as an adjacency list
vector<vector<int>> generateRandomTree(int n) {
        vector<vector<int>> tree(n);
        for (int i = 1; i < n; i++) {
                int parent = RA(0, i - 1);  // Ensure no cycles (parent must be before current node)
                tree[parent].push_back(i);
                tree[i].push_back(parent);   // Undirected tree
        }
        return tree;
}

// Function to generate a random permutation of integers 1 to n
vector<int> generateRandomPermutation(int n) {
        // Create an array of integers from 1 to n
        vector<int> permutation(n);
        iota(permutation.begin(), permutation.end(), 1);  // Fill the array with numbers 1 to n

        // Shuffle the array to get a random permutation
        random_shuffle(permutation.begin(), permutation.end());  // Shuffle in-place

        return permutation;
}

int main() {
        srand(time(NULL));

        freopen("tests/input.txt", "w", stdout);                // The output of this program will be placed in the input.txt file

        // Fell free to use this... You have to :)

        

        return 0;
}