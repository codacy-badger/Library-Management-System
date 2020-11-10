
#ifndef __BOOK_
#define __BOOK_

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Book {
  int m_id;
  std::string m_title;
  std::string m_author1;
  std::string m_author2;
  std::string m_genre;
  std::string m_subGenre;
  int m_pages;
  std::string m_publisher;

public:
  std::string addBook(int, std::string, std::string, std::string, std::string,
                      std::string, int, std::string);
  std::string deleteBook(int);
  std::string getBookNameBasedOnID(int);
  std::string getBookWithMaxPages();
  std::string getBookWithMinPages();
};

#endif
