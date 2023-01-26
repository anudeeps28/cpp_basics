// vectors<something>

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<pair<int,int>> vec) { // we are passing by value, so we are copying, hence it is an expensive operation
    cout << "Size of vector" << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << vec[i].second << endl;
    }
}

void printVector2(vector<int> vec) { 
    cout << "Size of vector: " << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

int main() {
    vector<pair<int,int>> v = {{1,2}, {3,4}, {4,5}}; // every element of the vector is a pair
    printVector(v);

    // taking input as vector
    vector<pair<int,int>> v2;
    cout << "Enter the number of vectors: " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter values of x and y: " << endl;
        int x,y;
        cin >> x >> y;
        v2.push_back({x,y});
    }

    printVector(v2);

    // array of vectors = number of columns fixed; number of rows dynamic
    cout << "Enter the size of array (columns of the matrix(fixed)): " << endl;
    int N;
    cin >> N;
    vector<int> v3[N]; // 10 vectors of size 0; 
    for (int i = 0; i < N; i++){ // for each element of the array
        cout << "Enter the size of the vector(row(dynamic)): " << endl;
        int n; // give the size of each vector of the array
        cin >> n;

        for (int j = 0; j < n; j++) { // for each vector
            int x; // size of array
            cin >> x; // decide elements
            v3[i].push_back(x); // push back
        }
        printVector2(v3[i]);
    }

    // vector of vector = 2-D array/matrix
    // = both the number of rows and columns are dynamic
    
    vector<vector<int>> v4;
    // in this: v4[0][1] = element at 1st position of inner vector at 0th position of the outer vector.
    cout << "enter size of bigger vector (column of matrix): " << endl;
    int N2;
    cin >> N2;

    for (int i = 0; i < N2; i++) {
        cout << "Enter the size of smaller matrix (row of matrix): " << endl;
        int n2; 
        cin >> n2;

        vector<int> temp;
        cout << "Enter the values to be entered in the row: " << endl;
        for (int j = 0; j < n2; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v4.push_back(temp);
        
    }

    
    // the imagination is endless:
    // we can make
    vector<vector<vector<int>>> v5; // on v5, we can use v5[0][1].push_back()/pop/something.

    // v5[0][1][2] = element at 2nd position of the inner most vector at 1st position of middle vector at 0th position of the outermost vector
}