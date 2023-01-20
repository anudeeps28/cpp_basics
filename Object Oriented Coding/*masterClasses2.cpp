#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Student class
class Student {
private: 
    int scores[5];
public:
    void input();
    int calculateTotalScore();
};

// making the methods definied inside the class
void Student::input() {
    for (int i = 0; i < 5; i++) {
        cin >> scores[i]; // private member variables can be used inside the class; other need to be defined before being used
    }
}

int Student::calculateTotalScore() {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total = total + scores[i];
    }
    return total;
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
