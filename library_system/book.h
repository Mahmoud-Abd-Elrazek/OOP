#ifndef BOOK
#define BOOK
#include<iostream>
#include<string>
using namespace std; 

class Book {
protected:
    string title;
    string author;
    int year;
public:
    Book(const string& , const string&, const int&);
    void setYear(const int&);
    int getYear() const;

    void setAuthor(const string&);
    string getAuthor() const;
    
    void setTitle(const string&);
    string getTitle() const; 

    virtual void getBookInfo () const = 0 ; 
protected:
    void PrintBookInfo() const;
};

Book::Book(const string&title , const string&author , const int&year) { 
    this->author = author;
    this->title = title;
    this->year = year;
}

void Book::setAuthor(const string&author) {this->author = author;}
string Book::getAuthor()const {return this->author;}

void Book::setYear(const int&year) {this->year = year;}
int Book::getYear() const {return this->year;}

void Book::setTitle(const string&title) { this->title = title;}
string Book::getTitle() const { return this->title;}

void Book::PrintBookInfo() const { 
    cout << "Title: "<< this->title << "\n" << "Author: " << this->author << "\n" << "Year: " << this->year << "\n";
}

#endif // BOOK