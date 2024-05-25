#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>
#include <iostream>
using namespace std;

class book{
	char bookNo[6];
	char bookName[50];
	char authorName[30];

	public:

		void createBook(){
			cout<<"Create New Book Entry :------------------";
			cout<<"Enter Book No :";
			cin>>bookNo;
			cout<<"Enter Book Name :";
			cin>>bookName;
			cout<<"Enter Author Name :";
			cin>>authorName;


		}

		void show_book(){
			cout<<"\nBook no. : "<<bookNo;
			cout<<"\nBook Name : ";
			puts(bookName);
			cout<<"Author Name : ";
			puts(authorName);
		}
	void modify_book(){
        cout<<"\nBook no. : "<<bookNo;
        cout<<"\nModify Book Name : ";
        gets(bookName);
        cout<<"\nModify Author's Name of Book : ";
        gets(authorName);
    }
};



