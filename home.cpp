#include<iostream>
using namespace std;

class information {
private:
    string name;
    string email;
    int id;
    string isdelete;
    string isverified;
    string profile;

public:
    string password;

    void data(string name, string email, int id, string password, string isdelete, string isverified, string profile) {
        this->name = name;
        this->email = email;
        this->id = id;
        this->password = password;
        this->isverified = isverified;
        this->profile = profile;
        this->isdelete = isdelete;
    }

    void insert() {
        cout << "Enter id: "; cin >> id;
        cout << "Enter name: "; cin >> name;
        cout << "Enter email: "; cin >> email;
        cout << "Enter password: "; cin >> password;
        isdelete = "no"; // Default to not deleted
    }

    void display() {
        if (isdelete == "yes") {
            cout << "This account is deleted." << endl;
            return;
        }
        cout<<"--------------------------"<<endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
        cout << "Password: " << password << endl;
        cout<<"--------------------------"<<endl;
    }


    int getId() {
        return id;
    }

    void deleteAccount() {
        isdelete = "yes";
        cout << "Account deleted successfully." << endl;
    }
};

int main() {
    information info;
    info.insert();
    
    do {
        int op;
        cout<<"-----------------|menu|--------------------"<<endl;
        cout << "1. Enter information(id, name, email, password)" << endl;
        cout << "2. Verify password" << endl;
        cout << "3. Add profile" << endl;
        cout << "4. Search by id" << endl;
        cout << "5. Delete account" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter option: "; cin >> op;
        cout<<"-------------------------------------------"<<endl;

        switch (op) {
        case 1: {
            info.insert();
            break;
        }
        case 2: {
            string pass;
            cout << "Enter password: "; cin >> pass;
            if (pass == info.password) {
                cout << "Password verified successfully." << endl;
            } else {
                cout << "Password not verified." << endl;
            }
            break;
        }
        case 3: {
            string prof;
            cout << "Enter profile: "; cin >> prof;
        
            break;
        }
        case 4: {
            int searchId;
            cout << "Enter ID to search: "; cin >> searchId;
            if (searchId == info.getId()) {
                cout << "Account found:" << endl;
                info.display();
            } else {
                cout << "Account not found." << endl;
            }
            break;
        }
        case 5: {
            info.deleteAccount();
            break;
        }
        case 0: {
            cout << "Exiting..." << endl;
            return 0;
        }
        default: {
            cout << "Invalid option." << endl;
        }
        }
        
        info.display();

    } while (true);

    return 0;
}
