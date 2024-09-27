#include <iostream>
#include <cstring>
using namespace std;

struct Books {
  string title;
  string author;
  string subject;
  int book_id;
};

int main() {

  struct Books Book1;

  cout << "Enter book title: ";
  getline(cin, Book1.title);

  cout << "Enter book author: ";
  getline(cin, Book1.author);

  cout << "Enter Subject: ";
  getline(cin, Book1.subject);

  cout << "Enter Book ID: ";
  cin >> Book1.book_id;

  cout << endl;


  cout << " You Input the Following Book Data " << endl;

  cout << Book1.title << endl;
  cout << Book1.author << endl;
  cout << Book1.subject << endl;
  cout << Book1.book_id << endl;
  
  return 0;
}