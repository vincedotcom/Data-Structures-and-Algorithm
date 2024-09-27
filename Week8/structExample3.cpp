#include <iostream>
#include <cstring>
using namespace std;

struct DateRecord {
  int year;
  int month;
  int day;
};

struct BookRecord {
  string title;
  string author;
  string publisher;
  float cost;
  DateRecord publishDate;
};

int main() {

  BookRecord myBook;

  cout << "Enter the Book title: ";
  getline(cin, myBook.title);

  cout << "Enter the book Author: ";
  getline(cin, myBook.author);

  cout << "Enter the book publisher: ";
  getline(cin, myBook.publisher);

  cout << "Enter the Book Cost: ";
  cin >> myBook.cost;

  cout << "Enter the date publish separated by space dd-mm-YYYY: ";
  cin >> myBook.publishDate.day >> myBook.publishDate.month >> myBook.publishDate.year;


  if (myBook.publishDate.month > 12 && myBook.publishDate.month <=0) {
    cout << "Invalid Month: "<< endl;
    cout << "Enter Month: " << endl;
    cin >> myBook.publishDate.month;
  } else if (myBook.publishDate.day > 31 && myBook.publishDate.day <=0 ){
    cout << "Invalid day: " << endl;
    cout << "Enter date: " << endl;
    cin >> myBook.publishDate.day;
  }

  cout << endl;
  cout << "Date of Published";
  cout << myBook.publishDate.day << " "<< myBook.publishDate.month << " " << myBook.publishDate.year << endl;

  return 0;
}