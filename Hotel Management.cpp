// projectmanagement2.cpp : Defines the entry point for the console application.
//

//#include"stdafx.h"//
#include<iostream>
#include<string.h>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class hostel
{
    int room_no;
    char name[30];
    char address[50];
    char phone[11];
    public:
		class error
		{
		public:
			int x;
			error(int y)
			{
				x=y;
			}
		};
		void getdata(int r)
		{
			if(r==0||r>50)
				throw error(r);
			else
			{
			cout<<"Enter name,adddress and phone number: ";
			room_no=r;
			cin.ignore();
			cin.getline(name,30);
			cin.ignore();
			cin.getline(address,50);
			cin.ignore();
			cin.getline(phone,11);
			}
		}
		void showdata()
		{
			cout<<"\n\n "<<room_no<<"\t\t"<<name;
            cout<<"\t\t"<<address<<"\t\t"<<phone;
			cout<<endl;
		}
   int main_menu();
    int add();
  int display();
    int rooms();
    int edit();
    int check(int);
    int modify(int);
    int delete_rec(int);
};
int hostel::add()
{ 
    int r,flag;
    ofstream fout("Record.txt",ios::app);
    cout<<"\n\t\t Enter Customer Detalis";
    cout<<"\n\t\t **********************";
    cout<<"\n\n Room no: ";
    cin>>r;
    flag=check(r); 
    if(flag)
        cout<<"\n Sorry..!!!Room is already booked";
    else
	{
		getdata(r);
        fout.write((char*)this,sizeof(*this));
        cout<<"\n Room is booked!!!";
    }
    cout<<"\n Press any key to continue!!";
  system("pause");
    fout.close();
    return 0;
}
int hostel::display()
{
    ifstream fin("Record.txt",ios::in); 
    int r;
    cout<<"\n Enter room no: ";
    cin>>r;
    while(!fin.eof())
    {
        fin.read((char*)this,sizeof(*this));
           if(room_no==r)
                 {
            cout<<"\n\t\t\t Cusromer Details";
            cout<<"\n\t\t\t ****************";
			cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
			showdata();
              }
       else
	   {
        cout<<"\n Sorry Room no. not found or vacant!!";
              cout<<"\n\n Press any key to continue!!";
	   }
    system("pause");
    fin.close();
    return 0;
              }
}
int hostel::rooms()
{
    ifstream fin("Record.txt",ios::in);
    cout<<"\n\t\t\tList Of Rooms Allotted";
    cout<<"\n\t\t\t*********************";
    cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
       while(!fin.eof())
    {
        fin.read((char*)this,sizeof(*this));
		showdata();
       }
	   getch();
    fin.close();
    return 0;
}
int hostel::edit()
{
    int choice,r;
    cout<<"\n EDIT MENU";
    cout<<"\n *********";
    cout<<"\n\n 1.Modify Customer Record";
    cout<<"\n 2.Delete Customer Record";
    cout<<"\n Enter your choice: ";
    cin>>choice;
       cout<<"\n Enter room no: ";
    cin>>r;
    switch(choice)
    {
        case 1: modify(r);
                break;
        case 2: delete_rec(r);
                break;
        default: cout<<"\n Wrong Choice!!";
    }
    cout<<"\n Press any key to continue!!!";
    return 0;
  system("pause");
	
}
int hostel::check(int r)
{
    int flag=0;
    ifstream fin("Record.txt",ios::in);
    while(!fin.eof())
    {
        fin.read((char*)this,sizeof(*this));
        if(room_no==r)
        {
            flag=1;
                break;
        }
    }
    fin.close();
    return(flag);
}
int hostel::modify(int r)
{
    long pos , flag;
    fstream file("Record.txt",ios::in|ios::out|ios::binary);
    flag=0;
    while(!file.eof())
       {
         pos=file.tellg(); 
        file.read((char*)this,sizeof(*this));
        if(room_no==r)
              {
            cout<<"\n Enter New Details";
            cout<<"\n *****************";
			getdata(r);
            file.seekg(pos);
            file.write((char*)this,sizeof(*this));
            cout<<"\n Record is modified!!";
               flag=1;
            break;
              }
	}
    if(flag==0)
              cout<<"\n Sorry Room no. not found or vacant!!";
              file.close();
              return 0;
       }
int hostel::delete_rec(int r)
{
    int flag=0;
    char ch;
    ifstream fin("Record.txt",ios::in);
    ofstream fout("temp.txt",ios::out);
    while(!fin.eof())
    {
        fin.read((char*)this,sizeof(*this));
        if(room_no==r)
        {
			cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
			showdata();
            cout<<"\n\n Do you want to delete this record(y/n): ";
            cin>>ch;
            if(ch=='n')
				break;
                flag=1;
        }
        else
            fout.write((char*)this,sizeof(*this));
    }
    fin.close();
    fout.close();
    if(flag==0)
	{
        cout<<"\n Sorry room no. not found or vacant!!";
	    getch();
	}
    else
    {
        remove("Record.txt");
        rename("temp.txt","Record.txt");
		cout<<"\t\tdeleted";
		getch();
		cout<<endl;
        return 0;
    }
}
int hostel::main_menu()
{
    int choice=0;
    while(choice!=5)
    {
		system("cls");
    cout<<"\n\t\t\t****************************";
    cout<<"\n\t\t\t* HOSTEL MANAGEMENT PROJECT *";
    cout<<"\n\t\t\t****************************";
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\t\t\t\t* MAIN MENU *";
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\n\n\t\t\t1.Book A Room";
        cout<<"\n\t\t\t2.student Record";
        cout<<"\n\t\t\t3.Rooms Allotted";
        cout<<"\n\t\t\t4.Edit Record";
        cout<<"\n\t\t\t5.Exit";
        cout<<"\n\n\t\t\tEnter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1: add();
                    break;
            case 2: display();
                    break;
            case 3: rooms();
                    break;
            case 4: edit();
                    break;
            case 5: break;
            default:
                    {
                        cout<<"\n\n\t\t\tWrong choice!!!";
						cout<<endl;
                        return 0;
						getch();
                    }
        }
    }
}
int main()
{
	try
	{
	hostel h;
	 h.main_menu();
	}
	catch(hostel::error E)
	{
	cout<<E.x<<"Rooms are 1-50";
	}
    system("pause");
}



