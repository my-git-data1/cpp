#include <iostream>

using namespace std;

class Date 
{
    int day;
    int month;
    int year;
  public:   
     void initDate()
     {

        day = 1;
        month = 1;
        year = 1900;
        cout<< " BY default Date is :"<<day<<"/"<<month<<"/"<<year<<endl;

     }

     void printDateOnConsole()
     {

        cout<< "Date is :"<<day<<"/"<<month<<"/"<<year<<endl;


     }
     void acceptDateFromConsole()
     {

        cout<<"Please Enter the date"<<endl;
        cin>>day>>month>>year;
        cout<< "Date is :"<<day<<"/"<<month<<"/"<<year<<endl;
        

     }
     bool isLeapYear()
     {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        {
        return true;
            }
        else {
        return false;
            
         }

  return 0;

     }

};
int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Initial Date" << endl;
    cout << "2. accept Date" << endl;
    cout << "3. Print Date" << endl;
    cout << "4. Find If the year is leap" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}


int main()
{
    struct Date d1;
    int x;
    bool a;


while((x=menu())!=0)
{
    switch (x)
    {
        
        case 1:

            d1.initDate();
            break;
        case 2:
            d1.acceptDateFromConsole();
            break;
        case 3:
            d1.acceptDateFromConsole();
            d1.printDateOnConsole();
            break;
        case 4:
            d1.acceptDateFromConsole();
            a=d1.isLeapYear();
            if (a)
            cout<<"The year is leap year";
            else
            cout<<"The year not a leap year";
            break;

        default:
        cout<<"Wrong choice";
        break;

    }
    
}
cout << "Out of Loop" << endl;
    return 0;
}