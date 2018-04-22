#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

int count=0;

class Movies{
   
   int ch;
   char sig[1];

public:
  Movies(int in)
   {
    if(in==-1)
      {
       int z;
       cout<<"-----------------------------------------------------------------"<<"\n";
       cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
       cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
       cout<<"|"<<"\t"<<"\t"<<"\t"<<"WELCOME TO BOOKMYSHOW"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
       cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
       cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
       cout<<"------------------------------------------------------------------"<<"\n";
       cout<<"\n";
       cout<<"\n";
       cout<<"1.ADMIN"<<"\n";
       cout<<"2.VISITOR"<<"\n";
       cout<<"ENTER YOUR ChOICE"<<"\n";
       cin>>z;
       if(z==1)
         {
          cout<<"NO CONTENT FOR ADMIN NOW ..!!";
          cout<<"\n";
         }
       else if(z==2)
             {
              Movies ob(0);
             }

      }
   else if(in==0)
      {
       int choice;
       do{
          cout<<"-----------------------------------------------------------------"<<"\n";
          cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
          cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
          cout<<"|"<<"\t"<<"\t"<<"\t"<<"WELCOME TO BOOKMYSHOW"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
          cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
          cout<<"|"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"|"<<"\n";
          cout<<"------------------------------------------------------------------"<<"\n";
          cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\n";
          cout<<"BOOK TICKETS FOR MOVIES,EVENTS,PLAYS AND SPORTS"<<"\n";
          cout<<"1.MOVIES"<<"\n";
          cout<<"2.EVENTS/PLAYS"<<"\n";
          cout<<"3.SPORTS"<<"\n";
          cout<<"4.EXIT"<<"\n";
          cout<<"Press Your Choice Please !"<<"\n";
          cin>>choice;
          if(choice==4)
           {
            exit(0); 
           }
          else
           {
            Movies ob(choice);
           }
          }while(true);

        }
    else if(in==1)
           {
            do{ 
               cout<<"\n";
               cout<<"CHOOSE YOUR LANGUAGE:"<<"\n";
               cout<<"1.HINDI"<<"\n";
               cout<<"2.ENGLISH"<<"\n";
               cout<<"3.PUNJABI"<<"\n";
               cout<<"4.EXIT"<<"\n";
               cout<<"Enter your choice:";
               cin>>ch;
               if(ch==4)
                 {
                  Movies ob(0);
                 }
               movies(ch);
               cout<<"\n";    
               cout<<"Do you want to continue:(Y/N)";
               cin>>sig;
              }while(strcmp(sig,"Y")==0 ||strcmp(sig,"y")==0);
              Movies ob(0);
            }
    else if(in==2)
           {
            do{
               events();
               cout<<"Do you want to continue:(Y/N)";
               cin>>sig;
               }while(strcmp(sig,"Y")==0 ||strcmp(sig,"y")==0);
               Movies ob(0);
            }
    else if(in==3)
           {   
             int as;
             cout<<"SORRY THE PAGE IS UNDER CONSTRUCTION..! "<<"\n";
             cout<<"\n";
             cout<<"\n";
             cout<<"PRESS 1 TO GO BACK TO MAIN PAGE OR 0 TO EXIT"<<"\n";
             cin>>as;
             if(as==1)
               {
                Movies ob(0);
               } 
             else if(as==0)
                   {
                    exit(0);
                   }
               }
        }
 void movies(int c);
 void events();
 void payment(int ch,int c);
};

void Movies::movies(int c)
{
 char str[30];
 char str1[10];
 char str2[20];
 int ch;

 ifstream fin;
 ifstream fin1;
 ifstream fin2;

  if(c==1)
  {
     fin.open("hindi.txt");
  }
  else if(c==2)
     {
       fin.open("english.txt");
     }
  else if(c==3)
     {
        fin.open("punjabi.txt");
     }
 int i=1;
 fin1.open("cinemas.txt");
 fin2.open("time.txt");


 cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
 cout<<setw(5)<<"|"<<"S.NO"<<"|"<<setw(15)<<"|"<<"MOVIE NAME"<<"|"<<setw(15)<<"|"<<"TIME"<<"|"<<setw(15)<<"|"<<"THEATER"<<"|"<<"\n";
 cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
 while(!fin.eof())
  {
   fin.getline(str,99);
   fin1.getline(str1,29);
   fin2.getline(str2,9);
   cout<<setw(5)<<i<<"."<<"\t"<<setw(15)<<str<<setw(35)<<str2<<setw(25)<<"\t"<<str1<<"\n";
   cout<<"\n";
   i++;
  }
  
fin.seekg(0,ios::beg);
fin1.seekg(0,ios::beg);
fin2.seekg(0,ios::beg);

cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\n";
 
int input;
int found=0; 
cout<<"CHOOSE THE OPTIONS:"<<"\n";
cout<<"1.GO FOR PAYMENT"<<"\n";
cout<<"2.MORE OPTIONS"<<"\n";
cin>>input;
if(input==1)
  {
    int a;
    cout<<"PLEASE ENTER YOUR ChOICE :"<<"\n";
    cin>>a;
    payment(a,c);
  }
else if(input==2)
       {
        cout<<"1.SEARCH MOVIE BY TIME"<<"\n";
        cout<<"2.SEARCH MOVIE BY CINEMA"<<"\n";
        cout<<"3.SEARCH MOVIE BY NAME"<<"\n";
        cout<<"PLEASE ENTER YOUR ChOICE :"<<"\n";
        cin>>ch;
        if(ch==1)
         { 
           i=1;
          
           cout<<"Enter Your Time:";
           string ti1;
           cin>>ti1;
           cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
           cout<<setw(5)<<"|"<<"S.NO"<<"|"<<setw(15)<<"|"<<"MOVIE NAME"<<"|"<<setw(15)<<"|"<<"TIME"<<"|"<<setw(15)<<"|"<<"THEATER"<<"|"<<"\n";
           cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
           while(!fin.eof())
            {
             fin.getline(str,99);
             fin1.getline(str1,29);
             fin2.getline(str2,9);
             string ti=(string)str2;
             if(strncmp(ti.c_str(),ti1.c_str(),1)==0)
               {
                cout<<setw(5)<<i<<"."<<"\t"<<setw(15)<<str<<setw(35)<<str2<<setw(25)<<"\t"<<str1<<"\n";
                cout<<"\n";
                found=1;
               } 
              i++;
            }
           if(found==0)
             {
              cout<<"\n";
              cout<<"NO RESULT FOUND FOR THE GIVEN TIME"<<"\n";
              cout<<"\n";
             }
              cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
              cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
          }
        else if(ch==2)
               {
                 i=1;
                 
                 cout<<"Enter Your Cinema Name:";
                 string ti1;
                 cin>>ti1;
                 cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                 cout<<setw(5)<<"|"<<"S.NO"<<"|"<<setw(15)<<"|"<<"MOVIE NAME"<<"|"<<setw(15)<<"|"<<"TIME"<<"|"<<setw(15)<<"|"<<"THEATER"<<"|"<<"\n";
                 cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                 while(!fin.eof())
                  {
                    fin.getline(str,99);
                    fin1.getline(str1,29);
                    fin2.getline(str2,9);
                    string ti=(string)str1;
                    if(strncmp(ti.c_str(),ti1.c_str(),1)==0)
                      {
                       cout<<setw(5)<<i<<"."<<"\t"<<setw(15)<<str<<setw(35)<<str2<<setw(25)<<"\t"<<str1<<"\n";
                       cout<<"\n";
                       found=1;
                      }
                    i++;
                  }
                 if(found==0)
                   {
                    cout<<"\n";
                    cout<<"NO RESULT FOUND FOR THE GIVEN NAME"<<"\n";
                    cout<<"\n";
                    }
                 cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                 cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                }         
        else if(ch==3)
               {
                i=1;
                cout<<"Enter Your Movie Name:";
                string ti1;
                cin>>ti1;
                cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                cout<<setw(5)<<"|"<<"S.NO"<<"|"<<setw(15)<<"|"<<"MOVIE NAME"<<"|"<<setw(15)<<"|"<<"TIME"<<"|"<<setw(15)<<"|"<<"THEATER"<<"|"<<"\n";
                cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                while(!fin.eof())
                 {
                   fin.getline(str,99);
                   fin1.getline(str1,29);
                   fin2.getline(str2,9);
                   string ti=(string)str;
                   if(strncmp(ti.c_str(),ti1.c_str(),1)==0)
                     {
                       cout<<setw(5)<<i<<"."<<"\t"<<setw(15)<<str<<setw(35)<<str2<<setw(25)<<"\t"<<str1<<"\n";
                       cout<<"\n";
                       found=1;
                     }
                    i++;
                  }
                if(found==0)
                  {
                   cout<<"\n";
                   cout<<"NO RESULT FOUND FOR THE GIVEN NAME"<<"\n";
                   cout<<"\n";
                  }
                cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
                cout<<"-------------------------------------------------------------------------------------------------------------"<<"\n";
               }         
    }

  if(input==2 && found!=0)
   {
    int b;
    cout<<"1.GO FOR PAYMENT"<<"\n";
    cout<<"2.TO GO BACK TO MAIN PAGE"<<"\n";
    cout<<"3.TO EXIT"<<"\n";
    cin>>b; 
    if(b==2)
      {
       Movies ob(0);
       }
    else if(b==3)
          {
           exit(0);
          }
    else if(b==1)
          { int q;
            cout<<"ENTER YOUR ChOICE:";
            cin>>q;
            payment(q,c);
           }
   }
 fin.close();
 fin2.close();
 fin1.close();
}

void Movies::events()
 {  
   int ch;
   char str1[200];
   char str2[200];
   char str3[10];
   char str4[10];
   int i=1;
   
   ifstream fin4,fin1,fin2,fin3;
   fin1.open("event.txt");
   fin2.open("Venue.txt");
   fin3.open("price.txt");
   fin4.open("time.txt");

   fin1.seekg(0,ios::beg);
   fin2.seekg(0,ios::beg);
   fin3.seekg(0,ios::beg);
   fin4.seekg(0,ios::beg);

   cout<<"\n";
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------------"<<"\n";
   cout<<setw(5)<<"|"<<"S.NO"<<"|"<<setw(15)<<"|"<<"EVENT NAME"<<"|"<<setw(35)<<"|"<<"TIME"<<"|"<<setw(25)<<"|"<<"VENUE"<<"|"<<setw(25)<<"|"<<"PRICE"<<"|"<<"\n";
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------------"<<"\n";
   while(!fin1.eof())
     {
      fin1.getline(str1,199);
      fin2.getline(str2,199);
      fin3.getline(str3,9);
      fin4.getline(str4,9);

      cout<<setw(5)<<i<<"."<<"\t"<<setw(15)<<str1<<setw(25)<<str4<<setw(15)<<"\t"<<str2<<setw(25)<<str3<<"\n";
      cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\n"; 
      i++;
     }
   cout<<"----------------------------------------------------------------------------------------------------------------------------------------------"<<"\n";
   cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<"\n";          
  
   fin4.close();
   fin1.close();
   fin2.close(); 
   fin3.close();
  
  cout<<"PRESS 1 TO GO BACK TO MAIN PAGE OR 0 TO EXIT"<<"\n";
  cout<<"PLEASE ENTER YOUR ChOICE :"<<"\n";
  cin>>ch;
  if(ch==0)
     {
      exit(0);
     }
  else if(ch==1)
     {
      Movies ob(0);
     }
  else{
       payment(ch,4);
      }

}


void Movies::payment(int ch,int c)
 { 
  char name[20];
  char Id[30];
  long long num;
  int tickets;
  count++;

  int event_price;

  ofstream fout;
  fout.open("database.txt",ios_base::app);
  fout<<"\n";

  char str[100];  
  char str1[10];   
  char str2[10];
  char str3[200];

  ifstream fin;
  ifstream fin1;
  ifstream fin2,fin3;
  int i=1;
   if(c==1)
  {
     fin.open("hindi.txt");
     fin1.open("cinemas.txt");
     fin2.open("time.txt");
  }
  else if(c==2)
     {
       fin.open("english.txt");
       fin1.open("cinemas.txt");
       fin2.open("time.txt");
     }
  else if(c==3)
     {
        fin.open("punjabi.txt");
        fin1.open("cinemas.txt");
        fin2.open("time.txt");
     }
  else if(c==4)
      {
        fin.open("event.txt");
        fin1.open("Venue.txt");
        fin2.open("price.txt");
        fin3.open("time.txt");
      }
  
if(c!=4)
 { 
  while(!fin.eof() && i<=ch)
   {
     fin.getline(str,99);
     fin1.getline(str1,9);
     fin2.getline(str2,9);
     if(i==ch)
     {
     fout<<"CUSTOMER ID :"<<count<<"\n";
     fout<<"MOVIE NAME:"<<str<<"\n";
     fout<<"TIME:"<<str2<<"\n";
     fout<<"THEATER :"<<str1<<"\n";
     }
     i++;
   }
  fin.close();
  fin1.close();
  fin2.close();
  }
  else if(c==4)
   {
    

     while(!fin.eof() && i<=ch)
       { 
          fin.getline(str,199);   // event name
          fin1.getline(str3,199);   // venue
          fin2.getline(str1,9);      // price
          fin3.getline(str2,9);       // time
         if(i==ch)
           {
            fout<<"CUSTOMER ID :"<<count<<"\n";
            fout<<"EVENT NAME :"<<str<<"\n";
            fout<<"EVENT VENUE :"<<str3<<"\n";
            fout<<"TIME:"<<str2<<"\n";
            fout<<"PRICE :"<<str1<<"\n";
            event_price=atoi(str1);
           }
          i++;
       }
       fin.close();
       fin1.close();
       fin2.close();
       fin3.close();

  }

  cout<<"------ MAKE PAYMENT --------"<<"\n";
  cout<<"Enter Your Name:";
  cin>>name;
  fout<<"CUSTOMER NAME:"<<name<<"\n";
  cout<<"Your Mobile Number:";
  cin>>num;
  fout<<"MOBILE NUMBER:"<<num<<"\n";
  cout<<"Enter Your E-mail Id:";
  cin>>Id;
  fout<<"E-MAIL :"<<Id<<"\n";
  cout<<"Number of TICKETS:";
  cin>>tickets;
  fout<<"TICKETS:"<<tickets<<"\n";
  if(c!=4)
   {
    cout<<"Amount to be paid(150 per Ticket):"<<150*tickets<<"\n";
    fout<<"AMOUNT COLLECTED:"<<150*tickets<<"\n";
    }
  else if(c==4)
  {
    cout<<"Amount paid:"<<event_price*tickets<<"\n";
    fout<<"AMOUNT COLLECTED:"<<event_price*tickets<<"\n";
    }
  
  cout<<"**** THANK YOU !! ****"<<"\n";
  cout<<"**** DATABASE UPDATED !! *****"<<"\n";
  fout<<"\n";
  fout.close();
}


int main(){
   Movies n(-1);
  return 0;
}




