// #include <iostream>
// #include <iomanip> 
// using namespace std;

// int main() {
// 	int T; cin >> T;
// 	cout << setiosflags(ios::uppercase);
// 	cout << setw(0xf) << internal;
// 	while(T--) {
// 		double A; cin >> A;
// 		double B; cin >> B;
// 		double C; cin >> C;
        
// 		/* Enter your code here */
//         int newA = int(A);
//         cout << left << showbase << hex;
//         cout << newA << endl;
        
//         int newB = int(B * 100 + 0.5) / 100;
//         string strnewB = to_string(newB);
//         int lengthOfStr = strnewB.size();
//         int numberOfDashes = 14 - lengthOfStr;
//         for (int i = 0; i < numberOfDashes; i++) {
//             cout << "_";
//         }
//         cout << "+" << newB << endl;
        
        
        

// 	}
// 	return 0;

// }

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--)
	{
	    double A; cin >> A;
	    double B; cin >> B;
	    double C; cin >> C;
	/* Enter your code here */
	    /* Print Pretty in C++ - Hacker Rank Solution START */
            // cout << std::hex << std::left << std::showbase << std::nouppercase;
            // cout << (long long) A << endl;
            // cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2);
            // cout << B << endl;
            // cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9);
            // cout << C << endl;
            cout << left << showbase << nouppercase << hex << (long long)A << endl;
            cout << setprecision(2) << setw(15) << right << showpos << fixed << setfill('_') << B << endl;	
            cout << setprecision(9) << noshowpos << uppercase << scientific << C << endl;
         /* Print Pretty in C++ - Hacker Rank Solution END */
	}
	return 0;
}