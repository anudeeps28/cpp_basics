#include<iostream>
#include<vector>
using namespace std;

bool isPositive(int x){
        return x>0;
    }

int main() {
    // lambda function
    auto sum = [](int x, int y) {return x+y;};
    cout << sum(2,3) << endl; // ans -> 5

    // all_of
    vector<int> v = {2,3,5};
    cout << all_of(v.begin(), v.end(), [](int x){return x>0;});

    vector<int> v2 = {2,-1,5};
    cout << all_of(v2.begin(), v2.end(), [](int x){return x>0;});

    // we can also pass a function; it is the same thing
    vector<int> v3 = {2,-1,5};
    cout << all_of(v3.begin(), v3.end(), isPositive);

    // any_of
    vector<int> v4 = {2,-1,5};
    cout << any_of(v4.begin(), v4.end(), [](int x){return x>0;});

    // none_of
    vector<int> v5 = {2,-1,5};
    cout << none_of(v5.begin(), v5.end(), [](int x){return x>0;});

    // checking if all elements are even
    vector<int> v6 = {2,-1,5};
    cout << all_of(v6.begin(), v6.end(), [](int x){return x%2 == 0;});

}   