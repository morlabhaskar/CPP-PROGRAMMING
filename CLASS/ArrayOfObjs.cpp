#include <iostream>
using namespace std;

class Book{
    char title[50];
    char author[50];
    float price;
    public:
        void setDetails(){
            cout << "Enter Book Title: ";
            cin >> title;
            cout << "Enter Author Name: ";
            cin >> author;
            cout << "Enter Book Price: ";
            cin >> price;
        }
        void displayDetails(){
            cout << "\nTitle  : " << title;
            cout << "\nAuthor : " << author;
            cout << "\nPrice  : " << price << endl;
        }
};

int main(){
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    Book b[n];   // Array of objects
    for(int i = 0; i < n; i++){
        cout << "\nEnter details of Book " << i + 1 << endl;
        b[i].setDetails();
    }
    cout << "\n----- Book Details -----\n";
    for(int i = 0; i < n; i++){
        cout << "\nBook " << i + 1;
        b[i].displayDetails();
    }
}

