#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
using namespace std;
class Book {

    private:
        string title;
        string author;
        int year;
    public:
    Book();
    Book(string title, string author, int year);
    string getTitle();
    string getAuthor();
    int getYear();
    void setTitle(string title);
    void setAuthor(string author);
    void setYear(int year);
    void print_info();
};
#endif