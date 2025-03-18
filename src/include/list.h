#include <iostream>
#include <vector>
using namespace std;

class List{
    private:
    protected:
    public:
        List(){}
        ~List(){}

        vector <string> list;
        string username;
        void print_menu(); 
        void print_list(); 
        void add_item(); 
        void delete_item(); 

};