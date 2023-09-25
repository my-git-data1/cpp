# include<stdio.h>

struct Date 
{
    int day;
    int month;
    int year;
};
     
void initDate(struct Date* ptrDate)
{
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 1900;
    printf(" BY default Date is:%d/%d/%d", ptrDate->day, ptrDate->month, ptrDate->year);

}

void printDateOnConsole(struct Date* ptrDate)
     {

        printf("Date is :%d/%d/%d", ptrDate->day, ptrDate->month, ptrDate->year);

     }
void acceptDateFromConsole(struct Date* ptrDate)
     {
          printf("Please Enter the date (day month year): ");
          scanf("%d%d%d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
        if (ptrDate->month>1 && ptrDate->month<13)

        printDateOnConsole(ptrDate);
        
        else
        printf("Entered wrong month");

     }
     int menu()
{
    int choice;
    printf("\n*******************\n");
    printf("0. EXIT\n");
    printf("1. Initial Student info\n" );
    printf("2. accept Student info\n" );
    printf( "3. Print Student info\n" );
       printf("Enter your choice = ");
    scanf("%d",&choice);
    printf("*******************\n" );
    return choice;
}



int main()
{
   struct Date d1;
    int x;
while((x=menu())!=0)
{

 
    switch (x)
    {
        
        case 1:

            initDate(&d1);
            break;
        case 2:
            acceptDateFromConsole(&d1);
            break;
        case 3:
            printDateOnConsole(&d1);
            break;
        case 4:
            break;
        default:
        printf("Wrong choice");

    }
}
printf("Out of Loop");


    return 0;

    
}