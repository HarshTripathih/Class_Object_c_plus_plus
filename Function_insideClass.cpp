#include<bits/stdc++.h>
#include<string>
using namespace std;

class student{

    public:
     string name;
     int age;
     int rollno;

                       
     void details(){
         cout<<"Name of the student : "<<name<<endl;
         cout<<"Age of the student : "<<age<<endl;
         cout<<"Roll.no of the student : "<<rollno<<endl;
     } 

};
int main(){

student boy;
boy.name="harsh";
boy.age=21;
boy.rollno=65;
boy.details();
return 0;
}
