#include<iostream>

using namespace std;
class Student
{
 private:
 string name;
 char gender;
 int rollNo;
 int marks1;
 int marks2;
 int marks3;
 int total;
 float per;
 static int count;

 public:
 void acceptStudent()
 {
  ++count;
  cout<<"2.Enter the name of student:"<<endl;
  cin>>name;
  cout<<"3.Enter the gender of student:"<<endl;
  cin>>gender;
  cout<<"3.Enter the Rollno. of student:"<<endl;
  cin>>rollNo;
  cout<<"3.Enter the marks of 1st sub student:"<<endl;
  cin>>marks1;
  cout<<"3.Enter the marks of 2nd sub student:"<<endl;
  cin>>marks2;
  cout<<"3.Enter the marks of 3rd sub student:"<<endl;
  cin>>marks3;  
 }
 void displayStudent()
 {
  cout<<"Name:"<<name<<endl;
  cout<<"Gender:"<<gender<<endl;
  cout<<"Roll No.:"<<rollNo<<endl;
  cout<<"Marks1:"<<marks1<<endl;
  cout<<"Marks2:"<<marks2<<endl;
  cout<<"Marks3:"<<marks3<<endl;
  cout<<"Percentage:"<<calPer()<<endl;
 }
 float calPer()
 {
  total=marks1+marks2+marks3;
  per=(total*100)/300;
  return per;
 }


};
int Student::count=0;
int main()
{
  int size;
  int choice; 
  int key;
  cout<<"Enter the no. of student data you want to store want:"<<endl;
  cin>>size;
  Student **arr=new Student *[size];
  for (int i = 0; i < size; i++)
  {
    arr[i]=new Student();
    arr[i]->acceptStudent();
    arr[i]->displayStudent();
  }
 /* do
  {
    cout<<"select\n 1.To give input for no. of student whose data you want store"<<endl;   
  cin>>choice;
  } while (choice!=0);*/

  //linearSearch(arr,size);
  cout<<"Enter rollno. to find:"<<endl;
  cin>>key;
  for (int i = 0; i < size; i++)
  {
     delete arr[i];
  }

  delete[] arr;
  return 0;

}
/*int linearSearch(Student **ptr,int size)
{


}*/
