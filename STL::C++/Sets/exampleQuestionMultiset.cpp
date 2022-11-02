/***
 * Question statement: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
*/

#include <iostream>
#include<set>


using namespace std;

int main () {
    int t; // test case
    cin >> t;

    int n, k; // n is the number of bags and k is the number of minutes
    cin >> n >> k;

    // entering things in the bag
    multiset<long long> bags; 
    for (int i = 0; i < n; i++) {
        long long candy_count;
        cin >> candy_count;
        bags.insert(candy_count);
    }

    // calculating the total candies he can eat in k minutes
    long long total_candies = 0;
    for (int i = 0; i < k; i++) {
        auto last_iterator = (--bags.end()); // just before the last of .end() because .end() gives the iterator of just after the last 
        long long candy_count = *last_iterator;
        total_candies += candy_count;

        // now erasing that bag
        bags.erase(last_iterator); // O(1) when we provide the iterator, when we provide value, it is O(lon(n))

        // also inserting a bag of candies x/2 in set of bags
        bags.insert(candy_count/2); // when we insert, it will automatically go into the sorted order
    }

    cout << total_candies << endl;

}



