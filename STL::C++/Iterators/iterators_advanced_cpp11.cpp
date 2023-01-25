#include<iostream>
#include<vector>

using namespace std;

// auto + range-based-loops = best combination!
int main() {
    // 1. Range - Based For-Loop
    // range based for-loops = works in all containers (not only vectors)
    // using these, we can iterate directly over the elements (we are not accessing the 
    // memory location and then extracting values from it)

    vector<int> v = {2,3,4,5,5};

    // iterating using range-based for-loops    
    for (int value: v) { // writing for loop is so easy = it becomes so small
        cout << value << endl;
    }
    
    // the above written lines 15->18 are equivallent to:
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << endl;
    }


    // the values are passed by copy, not by reference
    for (int value: v) { 
        value++;
    }
    for (int value: v) { 
        cout << value << endl;
    }

    //  using the "&" symbol will make it pass by reference
    for (int &value: v) { 
        value++;
    }
    for (int value: v) { 
        cout << value << endl;
    }
    
    // this can be used on all the other conatiners as well
    vector<pair<int, int>> vp2 = {{1,2}, {3,4}, {5,6}};
    for (pair<int,int> i: vp2) {
        cout << i.first << " " << i.second << endl;
    }

    // 2. Auto Keyword
    // takes the dynamically determines the data type of a variable
    // this is useful in the case of iterators
    vector<int> vec = {1,2,3,4,5};
    
    vector<int>::iterator it; 
    for (it = vec.begin(); it != vec.end(); it++) {
        cout << (*it) << endl;
    }

    // with the auto keyword, we don't even need to declare the iterator
    for (auto it: vec) { // it can also be (auto it = vec.begin(); it != vec.end(); it++)
        cout << it << endl;
    } 

    // lines 46->49 can we written as lines 52->54

}
