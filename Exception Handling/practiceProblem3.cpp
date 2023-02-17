#include<iostream>
#include<string>
using namespace std;

class emailException {
public:
    string what() {
        return "Invalid Email";
    }
};

void validEmail(string text) {
    if (text[0] == text[1]) {
        throw emailException();
    }
    cout << "it is a valid email";
}

int main() {
    string email;
    cin >> email;

    try {
        validEmail(email);
    } catch(emailException e)
    {
        std::cerr << e.what() << '\n';
    }
    
}