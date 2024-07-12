#ifndef AUDOI_BOOK
#define AUDOI_BOOK
#include<iostream>
#include<string>
#include"book.h"
using namespace std; 

class AudoiBook : public Book { 
    double duration;
public:
    AudoiBook(const string&,const string&,const int&,const double&);
    void getBookInfo () const override;
} ;

AudoiBook::AudoiBook(const string&title,const string&author,const int&year,const double&duration) : Book(title,author,year) { 
    this->duration = duration;
}
void AudoiBook::getBookInfo () const {
    cout << "===========Audoi Book-Info============\n";
    this->PrintBookInfo();
    cout << "duration: " << this->duration << " Hr\n" ; 
    cout << "======================================\n";
}
#endif // AUDOI_BOOK