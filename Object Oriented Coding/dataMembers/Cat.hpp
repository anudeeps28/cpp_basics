#pragma once

class Cat{
private:
    bool happy = true; // every object of Cat will have a variable happy which can be 0 or 1 (every cat can be happy or sad)
public: 
    void speak();
    void makeHappy();
    void makeSad();
};