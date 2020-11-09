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

