#include <iostream>
using namespace std;

class Stack {
private:
	int* p;
	int size;
	int tos;
public:
    Stack():Stack(4) {

    }
    Stack(int size) {
        this->size = size;
       this-> p = new int[this->size];
       this->tos = 0;
    }
    Stack(const Stack& src) {
        this->size = src.size;
        this->p = new int[this->size];
        this->tos = 0;
        for (int i = 0; i < src.tos; i++)
        {
            push(src.p[i]);
        }
    }
    ~Stack() {
        if (this->p) {
            delete[] p;
        }
    }
    bool push(int n) {
        if (this->tos == this->size) {
            this->size = 2 * this->size;
            int* temp = new int[this->size];
            for (int i = 0; i < this->tos; i++)
            {
                temp[i] = this->p[i];
            }
            delete[] this->p;
            p = temp;
            //this->p = new int[this->size];
            //for (int i = 0; i < this->tos; i++)
            //{
            //    this->p[i] = temp[i];
            //}
            //delete[] temp;
            this->p[tos] = n;
            tos++;
            return true;
        }
        else {
            this->p[tos++] = n;
            
            return true;
        }
        return false;
    }
    bool pop(int& n) {
        if (tos == 0) {
            return false;
        }
        n = p[--tos];
        if (this->size > 4 && this->tos == this->size / 2) {
            this->size = this->size / 2;
            int* temp = new int[this->size];
            for (int i = 0; i < this->tos; i++)
            {
                temp[i] = this->p[i];
            }
            delete[] this->p;
            p = temp;
            //this->p = new int[this->size];
            //for (int i = 0; i < this->tos; i++)
            //{
            //    this->p[i] = temp[i];
            //}
            //delete[] temp;
            
            return true;
        }
        return true;
    }
    int length() {
        return tos;
    }
    int getSize() {
        return size;
    }
};

int main(void) {
    int item;

    // Stack a�� 8�� push
    Stack a;
    cout << "a ó��: size = " << a.getSize() << " length = " << a.length() << endl;
    for (int i = 1; i <= 8; i++)
        if (a.push(i))
            cout << "a " << i << " push ����: size = " << a.getSize() << " length = " << a.length() << endl;
    cout << endl;

    // Stack copy�� 8�� �߰� push
    Stack copy(a);
    cout << "copy ó��: size = " << copy.getSize() << " length = " << copy.length() << endl;
    for (int i = 9; i <= 16; i++)
        if (copy.push(i))
            cout << "copy " << i << " push ����: size = " << copy.getSize() << " length = " << copy.length() << endl;
    cout << endl;

    // Stack a���� 9�� pop
    for (int i = 1; i <= 9; i++)
        if (a.pop(item))
            cout << "a " << item << " pop����: size = " << a.getSize() << " length = " << a.length() << endl;
    cout << endl;

    // Stack copy���� 17�� pop
    for (int i = 1; i <= 17; i++)
        if (copy.pop(item))
            cout << "copy " << item << " pop ����: size = " << copy.getSize() << " length = " << copy.length() << endl;
    cout << endl;

    return 0;
}