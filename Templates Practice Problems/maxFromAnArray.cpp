#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template <typename T>
T findMax(vector<T>& vector) {
	T answer = 0;
	for (int i = 0; i < vector.size(); i++) {
		if (vector[i] > vector[i+1]) {
			answer = vector[i];
		}
	}
	return answer;
}


int main() {
	vector<float> v = {1.1,2.2,3.2,4.5,5.4};
	float max = findMax(v);
	cout << max << endl;

	vector<int> v2 = {1,2,3,4,5};
	int max2 = findMax(v2);
	cout << max2 << endl;

}