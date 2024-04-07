#include "Book.hpp"
#include "LibraryCatalog.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
LibraryCatalog::LibraryCatalog() : LibraryCatalog(vector<Book>()) { }
LibraryCatalog::LibraryCatalog(vector<Book> books) : books(books) { }
void LibraryCatalog::addBook(Book book) {
    books.push_back(book);
}
void LibraryCatalog::searchByAuthor(string author) {
    for (Book book : books) {
        if (book.getAuthor() == author) {
            book.print_info();
        }
    }
}
void LibraryCatalog::diplayCatalog() {
    for (Book book : books) {
            cout << "*************************************************************" << endl;

        book.print_info();
    }
}
