
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char bus[10][50]={"DELHI EXPRESSWAY","LUCKNOW CITY","KOTA EXPRESS","GORAKHPUR EXPRESS","SAHARANPUR EXPRESSWAY"};
char customer_name[50][50]={'\0'};
char number[50][2]={'\0'};
int bus_no;
int num1[32]={0};
void login();
void helpline();
void booking();
void cancel();
void bus_status();
void bus_list();
void bus_route();
int choice;
void main()
{

 login();do{
     system("cls");
 int choice;
 printf("                 \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
 printf("\n\t\t\t1.BOOKING \n \t\t\t2.CANCEL TICKET \n \t\t\t3.VIEW BUS ROUTE\n \t\t\t4.HEPLINE\n \t\t\t5.BUS LIST");
    printf("\n                 \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
   printf("\n\n Press your choice key button:");
   scanf("%d",&choice);
  switch(choice){
  case 1:booking();
  break;
  case 2:cancel();
  break;
  case 3:bus_route();
  break;
  case 4: helpline();
  break;
  case 5: bus_list();
  break;}getch();
    }while(choice!= 5);
    system("CLS");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   THANK YOU FOR USING MOMENT TRAVELS");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    return 0;
}
void bus_list(){
    {
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t LIST OF BUSES\n");
    printf("===========================================================================================================================\n\n\n");
    printf("\t\t\t\t\t[1]:  %s\n",bus[0]);
    printf("\n");
    printf("\t\t\t\t\t[2]:  %s\n",bus[1]);
    printf("\n");
	printf("\t\t\t\t\t[3]:  %s\n",bus[2]);
    printf("\n");
	printf("\t\t\t\t\t[4]:  %s\n",bus[3]);
    printf("\n");
	printf("\t\t\t\t\t[5]:  %s\n",bus[4]);
    printf("===========================================================================================================================\n\n\n");


}


}
void login()
{
int a=0,i=0;
    char userid[10],c;
    char password[10];
    char user[10];

    do
{
system("cls");
printf("                 \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
  printf("\n\n\t\t\t    WELCOME TO MOMENT TRAVEL AGENCY      \n");
  printf("\n              \t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    printf("\n                 \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd TRAVEL WITH ENJOYMENT \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n");
    printf("\n\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("        LOGIN DETAIL ");
    printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("           BUS RESERVATION  ");
    printf("\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    printf("\n   NAME:");
    scanf("%s",user);
    printf("\n\n   USERID: ");
scanf("%s",userid);
printf(" \n PASSWORD: ");
while(i<10)
{
    password[i]=getch();
    c=password[i];
    if(c==13) break;
    else printf(".");
    i++;
}
password[i]='\0';
i=0;
if(strcmp(userid,user)==0 && strcmp(password,user)==0)
{
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
printf("  \n\n   WELCOME %s !!!!",user);
printf("\n\n\n   Press any key to continue...");
getch();// To holds the screen
break;
}
else
{
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
printf("\n\n   LOGIN IS UNSUCESSFUL...PLEASE TRY AGAIN...");
a++;

getch();

}
}
while(a<=2);
if (a>2)
{
printf("\nSorry you have entered the wrong userid or password for two times!!!");

getch();

}
system("cls");
}
void booking(){
     int i=0;
    char numstr[100];
system("cls");
printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("\t    BOOKING SYSTEM");
printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
bus_list();//for seeing BUS LIST
printf("   ENTER THE BUS NUMBER: ");
scanf("%d",&bus_no);
system("cls");
printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
printf("\t    BUS RESERVATION");
printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
printf("BUS NUMBER:%d ********** %s",bus_no,bus[bus_no-1]);
bus_status(bus_no);
 FILE *fp;
 char str1[80]="30";
 int total_seat,required_tickets=0;
if(bus_no == 1)
{
 fp = fopen("seat1.txt","r");
 fgets(str1,80,fp);
 fclose(fp);
}else if(bus_no == 2)
{
 fp = fopen("seat2.txt","r");
 fgets(str1,80,fp);
 fclose(fp);
}else if(bus_no == 3)
{
 fp = fopen("seat3.txt","r");
 fgets(str1,80,fp);
 fclose(fp);
}
else if(bus_no == 4)
{
 fp = fopen("seat4.txt","r");
 fgets(str1,80,fp);
 fclose(fp);
}
else if(bus_no == 5)
{
 fp = fopen("seat5.txt","r");
 fgets(str1,80,fp);
 fclose(fp);
}
total_seat=atoi(str1);//To covert the string into number
if(total_seat <= 0)
{
 printf("SORRY NO SEATS VACANT ");
}else
{
printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
//printf("\n   AVAILABLE SEATS: %s\n",str1);
printf("\n   NUMBER OF TICKETS: ");
scanf("%d",&required_tickets);
printf("\n");

total_seat=(total_seat-required_tickets);
itoa(bus_no,numstr,10);
customer_details(required_tickets,numstr);
printf("\n\n AMOUNT TO PAY:  %d\n\n",400*required_tickets);
printf("\nWISH YOU A HAPPY JOURNEY\n\n\n");
itoa(total_seat, str1, 10);

if(bus_no == 1)
{
 fp = fopen("seat1.txt","w");
 fputs(str1,fp);
 fclose(fp);
}
else if(bus_no == 2)
{
 fp = fopen("seat2.txt","w");
 fputs(str1,fp);
  fclose(fp);
}
else if(bus_no == 3)
{
 fp = fopen("seat3.txt","w");
 fputs(str1,fp);
  fclose(fp);
}
else if(bus_no == 4)
{
 fp = fopen("seat4.txt","w");
 fputs(str1,fp);
  fclose(fp);
}
else if(bus_no == 5)
{
 fp = fopen("seat5.txt","w");
 fputs(str1,fp);
 fclose(fp);
}
}
}


void bus_route(){
    int chose;
bus_list();
printf("\n\n ENTER THE BUS NUMBER TO GET BUS DETAIL AND ROUTE:");
scanf("%d",&chose );
system("cls");
switch(chose){
case 1:
    printf("==============================================================================================\n\n");
    printf(" BOARDING PLACE:ISBT KASHMIRI GATE");
         printf("\n BOARDING TIME:6:00PM");
         printf("\nDROPPING POINT:MANALI");
         printf("\n DROPPING TIME:8:48AM");
          printf("\n\n==============================================================================================");
          printf("\n\nSTOPPAGE DETAIL:");
           printf("\n\n KURUKSHETRA\n\n CHANDIGARH\n\n BILASPUR\n\n MANDI\n\n KULLU");
            printf("\n\n==============================================================================================\n\n\n");
            break;

case 2:
    printf("==============================================================================================\n\n");
    printf(" BOARDING PLACE:KAMTA");
         printf("\n BOARDING TIME:9:00PM");
         printf("\nDROPPING POINT:ANAND VIHAR TERMINAL");
         printf("\n DROPPING TIME:6:30AM");
          printf("\n\n==============================================================================================");
          printf("\n\nSTOPPAGE DETAIL:");
           printf("\n\n KANPUR\n\n EHTA\n\n AGRA\n\n NODIA\n\n AKSHARDAM TEMPLE");
            printf("\n\n==============================================================================================\n\n\n");break;
case 3:
    printf("==============================================================================================\n\n");
    printf(" BOARDING PLACE:TALWANDI");
         printf("\n BOARDING TIME:8:30PM");
         printf("\nDROPPING POINT:KAROL BAGH");
         printf("\n DROPPING TIME:7:00AM");
          printf("\n\n==============================================================================================");
          printf("\n\nSTOPPAGE DETAIL:");
           printf("\n\n BUNDI\n\n SAROLI\n\n MANESAR\n\n JAIPUR\n\n GURUGRAM");
            printf("\n\n==============================================================================================\n\n\n");
            break;


case 4:
    printf("==============================================================================================\n\n");
    printf(" BOARDING PLACE:NAUSAD");
    printf("\n BOARDING TIME:8:30PM");
    printf("\nDROPPING POINT:AKSHDAM TEMPLE");
     printf("\n DROPPING TIME:9:00AM");
          printf("\n\n==============================================================================================");
          printf("\n\nSTOPPAGE DETAIL:");
           printf("\n\n LUCKNOW\n\n KANPUR\n\n AGRA\n\n NOIDA \n\n GREATER NOIDA");
            printf("\n\n==============================================================================================\n\n\n");
            break;
case 5:
    printf("==============================================================================================\n\n");

    printf(" BOARDING PLACE:CLOCK TOWER");
         printf("\n BOARDING TIME:10:00PM");
         printf("\nDROPPING POINT: ANAND VIVHAR TERMINAL");
         printf("\n DROPPING TIME:5:00AM");
          printf("\n\n==============================================================================================");
          printf("\n\nSTOPPAGE DETAIL:");
           printf("\n\n ROORKEE\n\n SHAMLI\n\n MUZAFFARNAGAR\n\n MEERUT \n\nDELHI");
            printf("\n\n==============================================================================================\n\n\n");
        break;
}

}
void helpline()
{ system("cls");
printf("\n\n=========================================================================================\n\n");

printf("  WELCOME TO MOMENT TRAVEL AGENCY HELPLINE\n\n\n");
printf("  IN CASE OF ANY QUERY OR COMPLAINT REGARDING TO OUR SERVICES AS WELL AS EMPLOYEE\n\n\n");
printf("  CONTACT US AT busmomemt@gmail.com\n\n\n");
printf("  OR\n\n\n");
printf("  CONTACT OUR HELPLINE NUMBER-XXXXXXXX41");
printf("\n\n=========================================================================================\n\n");}
void bus_status()
{
     printf("BUS NUMBER:%d ********** %s",bus_no,bus[bus_no-1]);
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t\t      BUS RESERVATION");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    int i,flag=0,j;
    j=seat_number(bus_no);
   customers_names(bus_no);
    char slots[33][10]={"VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT","VACANT"};
    for(i=0; i<j; i++)
    {
        strcpy(slots[num1[i]],customer_name[i]);
    }
    for(i=0; i<6; i++)
    {
        printf("   ");
        for(j=0; j<5; j++)
            {
        printf("(%d).%s\t",flag+1,slots[flag+1]);
        flag++;
            }
            printf("\n");
}
}
void customer_details(int required_tickets,char numstr[100])
{
char tempstr[100],STATUSS[12]="status",NUMBERS[12]="number";
int number;
    FILE *a,*b;
    int i=0;
   strcat(numstr,".txt");
   strcat(STATUSS,numstr);
   strcat(NUMBERS,numstr);
   a = fopen(STATUSS,"a");
   b = fopen(NUMBERS,"a");
for(i=0; i<required_tickets; i++)
{
      printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd Enter the details for ticket no %d \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n",i+1);
      printf("   ENTER THE SEAT NUMBER: ");
      scanf("%d",&number);
      printf("\n   ENTER THE PERSON NAME: ");
      scanf("%s",customer_name[number-1]);
      printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
      printf("\n");
      itoa(number, tempstr, 10);
      fprintf(a,"%s ",customer_name[number-1]);
      fprintf(b,"%s ",tempstr);

}
fclose(a);
fclose(b);
}

int seat_number(int bus_no)
{
char STATUSS[100],NUMBERS[12]="number";
FILE *a,*b;
char numstr[100];
int i=0,j=0,k;
itoa(bus_no,numstr,10);
strcat(numstr,".txt");
strcat(NUMBERS,numstr);
a = fopen(NUMBERS,"a+");
   while(!feof(a))
   {
      number[i][j] = fgetc(a);

      if(number[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
      j++;
      }
   }
   k=i;
   for(i=0; i<k; i++)
   {
       num1[i] = atoi(number[i]);
   }
   fclose(a);
   return k;
}


void customers_names(int bus_no)
{
char STATUSS[12]="status";
FILE *b;
char numstr[100];
int i=0,j=0,k=0;
itoa(bus_no,numstr,10);
strcat(numstr,".txt");
strcat(STATUSS,numstr);
b = fopen(STATUSS,"a+");
   while(!feof(b))
   {
      customer_name[i][j] = fgetc(b);

      if(customer_name[i][j] == ' ')
      {
          j=0;
          i++;
      }
      else
      {
        j++;
      }

   }
   customer_name[i][j]='\0';
   k=i;
   fclose(b);
}




void cancel()
{
 int seat_no,i,j;
 char numstr[100],NUMBERS[15]="number",STATUSS[15]="status";
 system("cls");
 bus_list();
 printf("\n   ENTER THE BUS NUMBER: ");
 scanf("%d",&bus_no);

 itoa(bus_no,numstr,10);
 strcat(numstr,".txt");
 strcat(STATUSS,numstr);
 strcat(NUMBERS,numstr);
 seat_number(bus_no);
 customers_names(bus_no);
bus_status(bus_no);
 printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
 printf("   ENTER THE SEAT NUMBER: ");
 scanf("%d",&seat_no);
 FILE *a,*b;
 a = fopen(STATUSS,"w");
 b = fopen(NUMBERS,"w");
 for(i=0; i<30; i++)
 {
     if(num1[i] == seat_no)
     {
         for(j=0; j<30; j++)
         {
             if(num1[j] != seat_no && num1[j] != 0)
             {
                 fprintf(b,"%d ",num1[j]);
                 fprintf(a,"%s",customer_name[j]);
             }
             else if(num1[j] == seat_no && num1[j] != 0)
             {
                 strcpy(customer_name[j]," VACANT ");

             }
         }
     }
 }
fclose(a);
fclose(b);



printf("\n\n");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
 printf("   WE HAVE REFUNDED Rs400 IN YOUR ACCOUNT\n");
  printf("\nHOPE YOU WILL TRY OUR SERVICE NEXT TIME");
    printf(" \n\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
}


