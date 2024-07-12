## Explanation

- **Classes and Objects**:
    - `Book` is an abstract base class representing a general book.
    - `PrintedBook` and `AudioBook` are derived classes representing specific types of books.
    - Objects `book1` and `book2` are instances of `PrintedBook` and `AudioBook`, respectively.

- **Encapsulation**:
    - Data members `title`, `author`, `year`, `pageCount`, and `duration` are encapsulated within their respective classes.
    - Access to these data members is controlled through the public methods `getBookInfo()`, setters & getters functions, and constructors.

- **Inheritance**:
    - `PrintedBook` and `AudioBook` inherit from the `Book` base class, reusing the common attributes `title`, `author`, and `year`.

- **Polymorphism**:
    - The `getBookInfo()` method is a pure virtual function in the `Book` class and is overridden in the `PrintedBook` and `AudioBook` classes.
    - The function `getBookInfo()` demonstrates polymorphism by calling the appropriate `getBookInfo()` method for each type of book, based on the actual object type.

- **Abstraction**:
    - The `Book` class provides an abstract representation of a book, defining common attributes and behaviors but leaving the specific implementation of the `getBookInfo()` method to the derived classes.
