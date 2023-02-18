#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    int age;
    string name;
    public:
        // Person():age(0){}

       virtual void getdata() { 
            cin>>name;
            cin>>age;  
        }

        virtual void putdata() {
            
            std::cout<<name<<" ";
            std::cout<<age<<" ";
        }
    
};

class Professor:public Person
{
   int publications=0;
   static int cur_id;
   int id;
   
   public:
        // Professor(){cur_id++;id=cur_id;}
   
    void getdata(){
        Person::getdata();
        cin>>publications;
        //cur_id++;
   }
   void putdata() {
       Person::putdata();
       std::cout<<publications<<" ";
       std::cout<<id<<" ";
       std::cout<<"\n";
   }

   
};
int Professor::cur_id{0};

class Student:public Person {
    int marks[6];
    static int cur_id;
    int id;
    int sum=0;
    public:
    Student():marks{0}{cur_id++;id=cur_id;}
   
    void getdata()
    {
        Person::getdata();
           for(int i=0;i<6;++i) {
            std::cin>>marks[i];
            sum+=marks[i];
        }
        //cur_id++;
          
    }
    void putdata(){
       Person::putdata();
       //for(int i=0;i<6;++i)
         //sum+=marks[i];
        std::cout<<sum<<" ";
        std::cout<<id<<" ";
        std::cout<<"\n";
   }
};
int Student::cur_id{0};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
