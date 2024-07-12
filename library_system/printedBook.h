#ifndef PRINTED_BOOK
#define PRINTED_BOOK

#include<iostream>
#include<string>
#include"book.h"
using namespace std; 
class PrintedBook : public Book { 
    int pageCount ; // Number of pages will be printed 
public:
    PrintedBook(const string&,const string&,const int&,const int&);
    void getBookInfo () const override;
} ; 

PrintedBook::PrintedBook(const string&title,const string&author,const int&year,const int&pageCount) : 
    Book(title,author,year) { 
        this->pageCount = pageCount;
}
void PrintedBook::getBookInfo () const { 
    cout << "===========Printed Book-Info==========\n";
    this->PrintBookInfo();
    cout << "page number: " << this->pageCount << "\n"; 
    cout << "======================================\n";
}
#endif