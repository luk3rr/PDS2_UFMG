#ifndef ITEM
#define ITEM

#include <ostream>
#include <string>
#include <iostream>

class Item {
    private:
        int _key, _val;

    public:
        Item();

        Item(int key, int val);

        friend bool operator > (const Item &i1, const Item &i2) {
            if (i1._val > i2._val) return true;
            return false;
        }

        friend std::ostream & operator << (std::ostream &out, const Item &i) {
            std::cout << "(<" << i._key << ">,<" << i._val << ">)";
        }
};

Item::Item() {
    this->_val = 0;
    this->_key = 0;
}

Item::Item(int key, int val) {
    this->_key = key;
    this->_val = val;
}

#endif // !ITEM
