#include <iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3;
    float sum, avg;
    string passOrFAil;
    cout << "Enter your marks of English (Out of 100) : "<<endl;
    cin >> marks1;
    cout << "Enter your marks of Maths (Out of 100) : "<<endl;
    cin >> marks2;
    cout<< "Enter your marks of Science (Out of 100) : "<<endl;
    cin >> marks3;

    avg = (marks1 + marks2 + marks3)/3;
    sum = marks1 + marks2 + marks3;

    cout<<""<<endl;
    cout<<"Your Total Sum of 3 Subjects is: "<<sum<<endl;
    cout<<"Your Total Average is: "<<avg<<endl;

    if (avg >= 90)
    {
        cout<<"You have been awarded with Grade A"<<endl;

    }
    else if (avg >= 80 && avg < 90)
    {
        cout<<"You have been awarded with Grade B"<<endl;
    }
    else if (avg >= 70 && avg < 80)
    {
        cout<<"You have been awarded with Grade C"<<endl;
    }
    else if (avg >= 60 && avg < 70)
    {
        cout<<"You have been awarded with Grade D"<<endl;
    }
    else if (avg >= 50)
    {
        cout<<"Your have failed, Your Grade is F"<<endl;
    }

    if (avg >= 0)
    {
        passOrFAil = (avg>=50) ? "Pass" : "Fail";
        cout<<"Result: "<<passOrFAil<<endl;
        cout<<""<<endl;
        (avg>=50) ? cout<<"Congrats! You have Passed!"<<endl : cout<<"Better Luck Next Time!"<<endl;
    }


    return 0;

}
