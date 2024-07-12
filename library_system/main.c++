// لَنْ تَنَالُوا الْبِرَّ حَتَّى تُنْفِقُوا مِمَّا تُحِبُّونَ وَمَا تُنْفِقُوا مِنْ شَيْءٍ فَإِنَّ اللَّهَ بِهِ عَلِيمٌ [آل عمران:92].

// © M_Abrazeg

#include <iostream>
#include <vector>
#include "book.h"
#include "printedBook.h"
#include "audoiBook.h"
#include "electronicBook.h"
using namespace std;
int main() {

    // create three objct of type PrintedBoook
    PrintedBook* Pbook1 = new PrintedBook("OOP","Koko",2024,500);
    PrintedBook* Pbook2 = new PrintedBook("C++ Foundemintal","Skar",2025,600);
    PrintedBook* Pbook3 = new PrintedBook("Introduction to data structures","Temon",2025,800);
    
    // create two objct of type AudoiBook
    AudoiBook* Abook1 = new AudoiBook("Music-3D","Hamo Beka",2025,6.0);
    AudoiBook* Abook2 = new AudoiBook("ZAMALKAWY","Shekabala",2020,5.3);

    // create two objct of type ElectronicBook
    ElectronicBook*ebook1 = new ElectronicBook("1984","Bomba",2001,2.5,"PDF");
    ElectronicBook*ebook2 = new ElectronicBook("1889","Hazoka",2022,5.3,"PDF");

    // add all books types in our library
    vector<Book*> library;
    library.push_back(Pbook1);
    library.push_back(Pbook2);
    library.push_back(Pbook3);
    library.push_back(Abook1);
    library.push_back(Abook2);
    library.push_back(ebook1);
    library.push_back(ebook1);

    // print all books 
    for(const auto&i : library)
        i->getBookInfo();
    
    return 0;
}

/*  -- Explanition --
- Classes and Objects:
    Book is an abstract base class representing a general book.
    PrintedBook and AudioBook are derived classes representing specific types of books.
    Objects book1 and book2 are instances of PrintedBook and AudioBook, respectively.

- Encapsulation:
    Data members title, author, year, pageCount, and duration are encapsulated within their respective classes.
    Access to these data members is controlled through the public methods getBookInfo() , ssetters & 
    getters functions and constructors.

- Inheritance:
    PrintedBook and AudioBook inherit from the Book base class, reusing the common attributes title, author, and year.

- Polymorphism:
    The getBookInfo() method is a pure virtual function in the Book class and is overridden in the PrintedBook and AudioBook classes.
    The function getBookInfo() demonstrates polymorphism
    by calling the appropriate getBookInfo() method for each type of book, based on the actual object type.

- Abstraction:
    The Book class provides an abstract representation
    of a book, defining common attributes and behaviors but leaving the specific implementation of the
    getBookInfo() method to the derived classes.
*/