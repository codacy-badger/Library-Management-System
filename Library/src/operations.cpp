#include "operations.h"
#include "book.cpp"

int Library::getNumberOfBooksBasedOnPublisher(std::string publisher) {

  fstream fin;
  fin.open("books_new.csv");
  string publisher2;
  count = 0;
  vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
    }
    publisher2 = row[7];
    if (publisher.compare(publisher2) == 0) {
      count++;
    }
  }
  return count;
}
int Library::countBooksBasedOnGenre(std::string genre) {
  fstream fin;
  fin.open("books_new.csv");
  count = 0;
  string genre1;
  vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
    }
    genre1 = row[4];
    if (genre.compare(genre1) == 0) {
      count++;
    }
  }
  return count;
}
