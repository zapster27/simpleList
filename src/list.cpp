#include "include/list.h"

void List::print_menu() {
    int choice;
    cout << "************\n";
    cout << "1 - Print List\n";
    cout << "2 - Add Item\n";
    cout << "3 - Remove Item\n";
    cout << "4 - Quit\n";
    cout << "************\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 4){
        exit(0);
    }
    else if (choice == 1) {
        print_list();
    }
    else if (choice == 2) {
        add_item();
    }
    else if (choice == 3) {
        delete_item();
    }
    else {
        cout << "choice not implemented\n";
    }
}

void List::add_item() {
    cout << "\n\n\n\n\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);
    cout << "Successfully added an item to the list.\n";
    cin.clear();

    print_menu();
}

void List::delete_item() {
    unsigned int choiceNum;
    cout << "\n\n\n\n\n\n\n";
    cout << "*** Delete Item ***\n";
    cout << "Select an item index to delete: /n";
    if (list.size()) {
        for(unsigned int i=0; i<list.size(); i++) {
            cout << i << ": " << list[i] << endl;
        }
    }
    else {
        cout << "No items to delete.\n";
    }
    
    cin >> choiceNum;//User input
    if (choiceNum >= 0 && choiceNum < list.size()) {
        list.erase(list.begin() + choiceNum);
        cout << "Successfully deleted the item from the list.\n";
    }
    else {
        cout << "Invalid choice.\n";
    }

    print_menu();

}
void List::print_list(){
    cout << "\n\n\n\n\n\n\n";
    cout << "*** List Items ***\n";
    if (list.size()) {
        for(unsigned int i=0; i<list.size(); i++) {
            cout << "*" << i << ": " << list[i] << endl;
        }
        cout << "M - Main Menu\n";
        char choice;
        cin >> choice;
        if (choice == 'M' || choice == 'm') {
            print_menu();
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
    else {
        cout << "No items to display.\n";
    }
    print_menu();
}