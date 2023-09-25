#include<iostream>

using namespace std;

class Student 
{
    int roll_no;
    string name= "";
    int marks;
  public:   
     void initStudent()
     {

        roll_no= 1;
        
        marks = 0;
        cout<< " BY default Student roll no is :"<<roll_no<<" name is "<<name<<" marks are "<<marks<<endl;

     }

     void printStudentOnConsole()
     {

        cout<< "Student name is :\n"<<name<<" His roll no is \n"<<roll_no<<" His marks are \n"<<marks<<endl;


     }
     void acceptStudentFromConsole()
     {

        cout<<"Please Enter the Students roll no , name and marks"<<endl;
        cin>>roll_no>>name>>marks;
        cout<< "Student information is \n Roll No:"<<roll_no<<"\n Name :"<<name<<"\n marks:"<<marks<<endl;
        

     }

};
int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Initial Student info" << endl;
    cout << "2. accept Student info" << endl;
    cout << "3. Print Student info" << endl;
       cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}

int main()
{
    class Student S1;
    int x;


while((x=menu())!=0)
{

    switch (x)
    {
        
        case 1:

            S1.initStudent();
            break;
        case 2:
            S1.acceptStudentFromConsole();
            break;
        case 3:
            S1.acceptStudentFromConsole();
            S1.printStudentOnConsole();
            break;
        default:
        cout<<"Wrong choice";
        break;

    }
}
cout << "Out of Loop" << endl;
    

    return 0;
}