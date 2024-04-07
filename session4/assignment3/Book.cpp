#include "Book.hpp"
#include <iostream>
#include <string>
using namespace std;

Book::Book() :Book("No Title", "No Author", 0) { };
Book::Book(string title, string author, int year) : title(title), author(author), year(year) { };
string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
int Book::getYear() { return year; }
void Book::setTitle(string title) { this->title = title; }
void Book::setAuthor(string author) { this->author = author; }
void Book::setYear(int year) { this->year = year; }
void Book::print_info() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
}