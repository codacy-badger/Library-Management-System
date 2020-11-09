#ifndef __OPERATIONS_
#define __OPERATIONS_

#include "book.h"

class Library {
int count;

public:
  int getNumberOfBooksBasedOnPublisher(std::string);
  int countBooksBasedOnGenre(std::string);
  int countBooksBasedOnSubGenre(std::string);
  int countBooksBasedOnGenreAndSubGenre(std::string,std::string);
};

#endif
