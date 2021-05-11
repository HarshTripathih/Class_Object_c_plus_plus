#include<bits/stdc++.h>
#include<string>
using namespace std;

class student{
public:
string name;
int age;
int roll_no;
 void details(){}
};

void student::details(){
    cout<<"The name of the students : "<<name<<endl;
    cout<<"the age of the studint is : "<<age<<endl;
    cout<<"the rollno of the student : "<<roll_no<<endl;

}
int main(){
    student boy;
    boy.name="harsh";
    boy.age=21;
    boy.roll_no=65;
    boy.details();
    return 0;
}
