#include "book.h"

std::string Book::addBook(int id, std::string title, std::string author1,
                          std::string author2, std::string genre,
                          std::string subGenre, int pages,
                          std::string publisher) {
  fstream fin;
  fin.open("books_new.csv");
  fin.seekg(0, ios::end);
  fin << id << ", " << title << ", " << author1 << ", " << author2 << ", "
      << genre << ", " << subGenre << ", " << pages << ", " << publisher
      << std::endl;

  return "Book added successfully";
}

std::string Book::deleteBook(int id) {
  fstream fin;
  fstream fout;
  fin.open("books_new.csv", ios::in);
  fout.open("new.csv", ios::out | ios::app);

  vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
    }
    if (id != stoi(row[0])) {
      fout << line << endl;
    }
  }

  fout.close();
  fin.close();

  remove("books_new.csv");
  rename("new.csv", "books_new.csv");

  return "Book removed successfully";
}

std::string Book::getBookNameBasedOnID(int id) {
  fstream fin;
  fin.open("books_new.csv");
  int count = 0;
  vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
    }
    m_id = stoi(row[0]);
    if (m_id == id) {
      count++;
      break;
    }
  }
  if (count == 0)
    return "Sorry!! No book found\n";
  else
    return row[1];
}
std::string Book::getBookWithMaxPages() {
  fstream fin;
  fin.open("books_new.csv");
  int maxpages = 0;
  std::string title;
  vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
    }
    m_pages = stoi(row[6]);
    if (m_pages > maxpages) {
      maxpages = m_pages;
      title = row[1];
    }
  }
  return title;
}

std::string Book::getBookWithMinPages() {
  fstream fin;
  fin.open("books_new.csv");
  int minpages = 1000;
  std::string title;
  vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
    }
    m_pages = stoi(row[6]);
    if (m_pages < minpages) {
      minpages = m_pages;
      title = row[1];
    }
  }
  return title;
}
