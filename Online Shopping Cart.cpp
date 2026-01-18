
#include <iostream>
#include <stdexcept>
using namespace std;

class Cart {
    int items;

public:
    Cart(int i = 0) : items(i) {}

    Cart operator+(int i) {
        return Cart(items + i);
    }

    void remove(int i) {
        if (i > items)
            throw runtime_error("Cannot remove more items!");
        items -= i;
    }

    void show() {
        cout << "Items in cart: " << items << endl;
    }
};

int main() {
    try {
        Cart c(5);
        c = c + 3;
        c.remove(10);
        c.show();
    }
    catch (exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}


