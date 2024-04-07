#include "Book.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class LibraryCatalog {
    private:
        vector<Book> books;
    public:
        LibraryCatalog();
        LibraryCatalog(vector<Book> books);
        void addBook(Book book);
        void searchByAuthor(string author);
        void diplayCatalog();
};