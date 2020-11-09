#include "book.h"

std::string Book::addBook(int id, std::string title, std::string author1,
                     std::string author2, std::string genre,
                     std::string subGenre, int pages, std::string publisher) {
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
    fout.open("new.csv",ios::out | ios::app);

    vector<string> row;
  string line, word, temp;
  getline(fin, line);

  while (getline(fin, line)) {
    row.clear();
    stringstream s(line);
    while (getline(s, word, ',')) {
      row.push_back(word);
      
    }
    if(id != stoi(row[0])){
    fout << line << endl;

    }
    }
  
    fout.close();
    fin.close();

    remove("books_new.csv");
    rename("new.csv", "books_new.csv");
    
return "Book removed successfully"; }

