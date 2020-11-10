#include "operations.cpp"
#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

int main() {
  int id;
  std::string title;
  std::string author1;
  std::string author2;
  std::string genre;
  std::string subGenre;
  int pages;
  std::string publisher;

  Library l;
  Book b;
  // l.GettingAllAccounts();
  int choice;
  while (1) {
    std::cout
        << "-----------------------Enter your choice-------------------\n";

    std::cout << std::setw(40) << "1.Add a book\n";
    std::cout << std::setw(46) << "2.Get info of book\n";
    std::cout << std::setw(43) << "3.Delete a book\n";
    std::cout << std::setw(34) << "4.Exit\n";

    while (1) {
      cin >> choice;
      if (!cin) {
        cout << "Wrong Choice. Enter again " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
      }
      if (!cin.fail() && choice >= 1 && choice <= 4)
        break;
      else
        cout << "Wrong Choice. Enter again " << endl;
    }
    switch (choice) {
    case 1:
      cout << "Enter the id: ";
      cin >> id;
      cout << endl;
      cout << "Enter the title: ";
      cin >> title;
      cout << endl;
      cout << "Enter the author1: ";
      cin >> author1;
      cout << endl;
      cout << "Enter the author2: ";
      cin >> author2;
      cout << endl;
      cout << "Enter Genre: ";
      cin >> genre;
      cout << endl;
      cout << "Enter Sub-Genre: ";
      cin >> subGenre;
      cout << endl;
      cout << "Enter pages: ";
      cin >> pages;
      cout << endl;
      cout << "Enter publisher: ";
      cin >> publisher;
      cout << endl;
      cout << b.addBook(id, title, author1, author2, genre, subGenre, pages,
                        publisher)
           << endl;
      break;
    case 2:
      while (1) {
        std::cout
            << "-----------------------Enter your choice-------------------\n";

        std::cout << std::setw(60) << "1.Book count based on publisher\n";
        std::cout << std::setw(52) << "2.Book name based on id\n";
        std::cout << std::setw(54) << "3.Book with maximum pages\n";
        std::cout << std::setw(54) << "4.Book with minimum pages\n";
        std::cout << std::setw(56) << "5.Book count based on Genre\n";
        std::cout << std::setw(60) << "6.Book count based on Sub-Genre\n";
        std::cout << std::setw(70)
                  << "7.Book count based on Genre and Sub-Genre\n";
        std::cout << std::setw(35) << "8.Exit\n";
        int choice1;
        while (1) {
          cin >> choice1;
          if (!cin) {
            cout << "Wrong Choice. Enter again " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
          }
          if (!cin.fail() && choice1 >= 1 && choice1 <= 8)
            break;
          else
            cout << "Wrong Choice. Enter again " << endl;
        }
        switch (choice1) {
        case 1:
          cout << "Enter publisher: ";
          cin >> publisher;
          cout << endl;
          cout << l.getNumberOfBooksBasedOnPublisher(publisher) << endl;
          break;
        case 2:
          cout << "Enter the id: ";
          cin >> id;
          cout << endl;
          cout << b.getBookNameBasedOnID(id) << endl;
          break;
        case 3:
          cout << b.getBookWithMaxPages() << endl;
          break;
        case 4:
          cout << b.getBookWithMinPages() << endl;
          break;
        case 5:
          cout << "Enter the genre: ";
          cin >> genre;
          cout << endl;
          cout << l.countBooksBasedOnGenre(genre) << endl;
          break;

        case 6:
          cout << "Enter the subGenre: ";
          cin >> subGenre;
          cout << endl;
          cout << l.countBooksBasedOnSubGenre(subGenre) << endl;
          break;
        case 7:
          cout << "Enter the genre: ";
          cin >> genre;
          cout << endl;

          cout << "Enter the subGenre: ";
          cin >> subGenre;
          cout << endl;
          cout << l.countBooksBasedOnGenreAndSubGenre(genre, subGenre) << endl;
          break;

        default:
          return 0;
        }
      }
      break;
    case 3:
      cout << "Enter the id: ";
      cin >> id;
      cout << endl;
      cout << b.deleteBook(id) << endl;
      break;
    default:
      return 0;
    }
  }
  return 0;
}
