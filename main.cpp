#include <iostream>

using namespace std;

int main()
{
    // Welcome to Helen's Grading System

    int yourscore;
    cout<<"Please enter your score:";
    cin>>yourscore;

    if(yourscore<=100 && yourscore>=80){
        cout<<"Your grade is A";
    }

    else if(yourscore<=79 && yourscore>=75){
        cout<<"Your grade is B+";
    }

    else if(yourscore<=74 && yourscore>=70){
        cout<<"Your grade is B";
    }

    else if(yourscore<=69 && yourscore>=65){
        cout<<"Your grade is C+";
    }

    else if(yourscore<=64 && yourscore>=60){
        cout<<"Your grade is C";
    }

    else if(yourscore<=59 && yourscore>=55){
        cout<<"Your grade is D+";
    }

    else if(yourscore<=54 && yourscore>=50){
        cout<<"Your grade is D";
    }

    else if(yourscore<=49 && yourscore>=45){
        cout<<"Your grade is E";
    }

    else if(yourscore<=44 && yourscore>=0){
        cout<<"Your grade is F";
    }
    return 0;
}
