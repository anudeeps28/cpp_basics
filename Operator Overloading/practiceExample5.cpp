#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// class Matrix {
// public:
//     vector<vector<int>> a;
//     Matrix operator+(Matrix& m);
// };

// Matrix operator+(Matrix& m) {
//     int N = m.a.size(); // number of rows
//     int M = m.a[0].size(); // number of columns
    
//     Matrix r;
//     for (int i = 0; i < N; i++) {
//         vector<int> temp;
//         int num = 0;
//         for (int j = 0; j < M; j++) {
//             temp.push_back(num); // giving the size of the vector and filling it all with 0 (otherwise we will not have vector-size)
//         }
//         r.a.push_back(temp);
//     }
//     for (int i = 0; i < N; i++){
//         for (int j = 0; j < M; j++) {
//             r.a[i][j] = a[i][j] + m.a[i][j];
//         }
//     }
// }

class Matrix{
    
  public:
    vector<vector<int>> a;    
    
    Matrix operator +(Matrix& m){
        int N = m.a.size();
        int M = m.a[0].size();
        
        Matrix r;        
        for(int i=0;i<N;i++) {
            vector<int> b;
            int num=0;
            for(int j=0;j<M;j++) {                
                b.push_back(num);
            }
            r.a.push_back(b);
        }
        
        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++){
                r.a[i][j]=m.a[i][j]+a[i][j];
            }
        }
        return r;
    }
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
