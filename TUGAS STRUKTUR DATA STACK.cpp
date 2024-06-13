#include <iostream>
#include <stack>
#include <string>

using namespace std;

void displayMenu() {
    cout << "\n=== Menu Operasi Tumpukan Buku ===" << endl;
    cout << "1. Push (Tambahkan Buku)" << endl;
    cout << "2. Pop (Ambil Buku dari Puncak)" << endl;
    cout << "3. Peek (Lihat Buku di Puncak)" << endl;
    cout << "4. IsEmpty (Cek Apakah Tumpukan Kosong)" << endl;
    cout << "5. Size (Jumlah Buku dalam Tumpukan)" << endl;
    cout << "6. Exit (Keluar)" << endl;
    cout << "Pilih operasi (1-6): ";
}

void push(stack<string>& bookStack) {
    string book;
    cout << "Masukkan nama buku yang ingin ditambahkan: ";
    cin.ignore();
    getline(cin, book);
    bookStack.push(book);
    cout << "Buku \"" << book << "\" telah ditambahkan ke tumpukan." << endl;
}

void pop(stack<string>& bookStack) {
    if (bookStack.empty()) {
        cout << "Tumpukan kosong. Tidak ada buku untuk diambil." << endl;
    } else {
        cout << "Buku \"" << bookStack.top() << "\" telah diambil dari tumpukan." << endl;
        bookStack.pop();
    }
}

void peek(stack<string>& bookStack) {
    if (bookStack.empty()) {
        cout << "Tumpukan kosong. Tidak ada buku di puncak." << endl;
    } else {
        cout << "Buku di puncak tumpukan: \"" << bookStack.top() << "\"" << endl;
    }
}

void isEmpty(const stack<string>& bookStack) {
    if (bookStack.empty()) {
        cout << "Tumpukan kosong." << endl;
    } else {
        cout << "Tumpukan tidak kosong." << endl;
    }
}

void size(const stack<string>& bookStack) {
    cout << "Jumlah buku dalam tumpukan: " << bookStack.size() << endl;
}

int main() {
    stack<string> bookStack;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                push(bookStack);
                break;
            case 2:
                pop(bookStack);
                break;
            case 3:
                peek(bookStack);
                break;
            case 4:
                isEmpty(bookStack);
                break;
            case 5:
                size(bookStack);
                break;
            case 6:
                cout << "Keluar dari program." << endl;
                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    }

    return 0;
}


