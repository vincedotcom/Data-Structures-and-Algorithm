#include <iostream>
using namespace std;

struct Movie {
  string title;
  string director;
  int release_year;
  string genre;

};

struct ViewModel {
  Movie movie[2];

  void DisplayAllMovies() {

    for (int i = 0; i < 2; i++) {
      cout << movie[i].title << endl;
      cout << movie[i].director << endl;
      cout << movie[i].release_year << endl;
      cout << movie[i].genre << endl;
    }
  }
};

int main() {

  Movie movie[2];
  ViewModel ViewMovie;

  for (int i = 0; i < 2; i++) {
    cout << "--- Enter Movie data ---" << endl;

    cout << "Enter the movie title: ";
    getline(cin, movie[i].title);

    cout << "Enter movie director: ";
    getline(cin, movie[i].director);


    cout << "Enter release year: ";
    cin >> movie[i].release_year;

    cin.ignore();

    cout << "Enter the genre: ";
    getline(cin, movie[i].genre);

  }

  ViewMovie.DisplayAllMovies();

  


  return 0;
}