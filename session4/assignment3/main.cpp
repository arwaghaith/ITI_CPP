#include "Book.hpp"
#include "LibraryCatalog.hpp"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    Book book1("The Alchemist", "Paulo Coelho", 1988);
    Book book2("Prisoner of Tehran", "Marina Nemat", 2007);
    Book book3("Discovery of Witches", "Deborah Harkness", 2011);

    LibraryCatalog library;
    library.addBook(book1);

    library.addBook(book2);
    library.addBook(book3);
    library.diplayCatalog();

    cout << "*************************************************************" << endl;
    library.searchByAuthor("Marina Nemat");

    cout << "*************************************************************" << endl;
    return 0;
}