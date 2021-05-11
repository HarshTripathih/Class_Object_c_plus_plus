 #include<bits/stdc++.h>
 #include<string>
 using namespace std;
 class students{

public:
string name;
int roll_no;
int reg_no;
};
int main(){
students detail1;
detail1.name="harsh";
detail1.roll_no=21;
detail1.reg_no=12007942;

cout<<"The name of the student : "<<detail1.name<<endl;
cout<<"The roll.no of the student : "<<detail1.roll_no<<endl;
cout<<"The registration no. of the student : "<<detail1.reg_no<<endl;

students detail2;
detail2.name="Ankit";
detail2.roll_no=22;
detail2.reg_no=120062482;

cout<<"The name of the student : "<<detail2.name<<endl;
cout<<"The roll.no of the student : "<<detail2.roll_no<<endl;
cout<<"The registration no. of the student : "<<detail2.reg_no<<endl;
}