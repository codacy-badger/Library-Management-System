#include "operations.h"

#include <gtest/gtest.h>
namespace {

TEST(Book, getNumberOfBooksBasedOnPublisherTest) {
  Library l1;
  EXPECT_EQ(2, l1.getNumberOfBooksBasedOnPublisher("Wiley"));
  EXPECT_EQ(35,l1.getNumberOfBooksBasedOnPublisher("Penguin"));
  EXPECT_EQ(6, l1.getNumberOfBooksBasedOnPublisher("HarperCollins"));
  EXPECT_EQ(3, l1.getNumberOfBooksBasedOnPublisher("Springer"));
  EXPECT_EQ(1, l1.getNumberOfBooksBasedOnPublisher("CRC"));
  EXPECT_EQ(2, l1.getNumberOfBooksBasedOnPublisher("Apress"));
  EXPECT_EQ(1, l1.getNumberOfBooksBasedOnPublisher("HBA"));
  EXPECT_EQ(4, l1.getNumberOfBooksBasedOnPublisher("O'Reilly"));
  EXPECT_EQ(2, l1.getNumberOfBooksBasedOnPublisher("Pan"));
  EXPECT_EQ(3, l1.getNumberOfBooksBasedOnPublisher("Rupa"));
  EXPECT_EQ(3, l1.getNumberOfBooksBasedOnPublisher("Pearson"));
  EXPECT_EQ(0, l1.getNumberOfBooksBasedOnPublisher("Ispring"));
}
TEST(Library, countBooksBasedOnGenreTest) {
  Library l1;
  EXPECT_EQ(13, l1.countBooksBasedOnGenre("science"));
  EXPECT_EQ(24, l1.countBooksBasedOnGenre("tech"));
  EXPECT_EQ(38, l1.countBooksBasedOnGenre("fiction"));
  EXPECT_EQ(36, l1.countBooksBasedOnGenre("nonfiction"));
  EXPECT_EQ(9, l1.countBooksBasedOnGenre("philosophy"));
  EXPECT_EQ(0, l1.countBooksBasedOnGenre("nonscience"));
}
TEST(Book, getBookWithMaxPagesTest) {
  Book book;
  EXPECT_EQ("Computer Vision A Modern Approach", book.getBookWithMaxPages());
}


} // namespace
