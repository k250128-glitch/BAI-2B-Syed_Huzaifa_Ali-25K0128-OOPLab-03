#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &other) {
        title = other.title + " ( Clone)";
        author = other.author;
        price = other.price;
    }


    void setupBestseller(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "  [ Title: " << title << " | Author: " << author
             << " | Price: $" << price << " ]" << endl;
    }
};

int main() {
    string userTitle, userAuthor;
    double userPrice;

    cout << " WELCOME TO THE LIBRARY " << endl;

    Book b1;
    cout << "\nEntry 1 ():" << endl;
    b1.display();

    cout << "\n" << endl;
    cout << "Enter Book Title: ";
    getline(cin, userTitle);
    cout << "Enter Author Name: ";
    getline(cin, userAuthor);
    cout << "Enter Price: ";
    cin >> userPrice;

    Book b2(userTitle, userAuthor, userPrice);
    cout << "\nEntry 2 :" << endl;
    b2.display();


    Book b3 = b2; 
    cout << "\nEntry 3:" << endl;
    b3.display();

    
   

    return 0;
}
