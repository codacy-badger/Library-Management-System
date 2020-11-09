#include "operations.h"

#include <gtest/gtest.h>
namespace {

TEST(Book, getBookNameBasedOnIDTest) {
  Book book;
  EXPECT_EQ("Age of Wrath", book.getBookNameBasedOnID(15));
  EXPECT_EQ("Doctor in the Nude", book.getBookNameBasedOnID(100));
}
TEST(Book, getBookWithMinPagesTest) {
  Book book;
  EXPECT_EQ("Ashenden of The British Agent", book.getBookWithMinPages());
}


} // namespace
