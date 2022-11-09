#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {

    // this is an example of a nested map
    map<pair<string, string>, vector<int>> m;
    m[{"S", "D"}] = {2, 3, 4, 5};
    m[{"A", "S"}] = {1,2,3,4};

    for (auto i: m) {
        auto fullName = i.first;
        auto list = i.second;

        cout << fullName.first << " " << fullName.second << endl;

        for (auto i: list) {
            cout << i << endl;
        }
    }
    
    // NOTE - all the keys of the map are stored in sorted order, even if the keys are pairs and vectors themselves
    // even though we added SD first, AD is printed first because it is stored first in the map (sorted order)
}