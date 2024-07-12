#ifndef ELECTRONIC_Book
#define ELECTRONIC_Book

#include<iostream>
#include<string>
#include"book.h"
using namespace std; 

class ElectronicBook : public Book 
{
    double fileSize; // in MB
    string format; // e.g., PDF, EPUB, MOBI
public:
    ElectronicBook(const string&title,const string&author,const int&year,const double&fileSize,const string&format) 
    : Book(title,author,year) , fileSize(fileSize) , format(format){}

    void getBookInfo () const override 
    {
        cout << "=========Electronic Book-Info=========\n";
        this->PrintBookInfo();
        cout << "file size: " << this->fileSize << " MB\n" ; 
        cout << "Format: " << this->format << " MB\n" ; 
        cout << "======================================\n";
    }
} ; // end ELECTRONIC_Book

#endif // ELECTRONIC_Book