#include "include/list.h"

int main(int arg_count, char *arg_values[]) {
    if(arg_count > 1) {
        List simpleList;
        simpleList.username = string(arg_values[1]);
        simpleList.print_menu();
    } else {
        cout << "username not supplied" << endl;
    }
    return 0;
}
