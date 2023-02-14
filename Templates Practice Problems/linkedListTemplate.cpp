#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        
        Node(T data) {
            this->data = data;
            next = NULL;
        }
    };
    
    Node* head;
    Node* tail;
    
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    void add_front(T data) {
        Node* new_node = new Node(data);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            new_node->next = head;
            head = new_node;
        }
    }
    
    void add_back(T data) {
        Node* new_node = new Node(data);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
    }
    
    void remove_front() {
        if (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    
    void remove_back() {
        if (tail != NULL) {
            if (head == tail) {
                delete head;
                head = NULL;
                tail = NULL;
            } else {
                Node* temp = head;
                while (temp->next != tail) {
                    temp = temp->next;
                }
                delete tail;
                tail = temp;
                tail->next = NULL;
            }
        }
    }
    
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList<int> intList;
    intList.add_front(3);
    intList.add_front(2);
    intList.add_front(1);
    intList.add_back(4);
    intList.add_back(5);
    intList.print();
    intList.remove_front();
    intList.remove_back();
    intList.print();
    
    LinkedList<double> doubleList;
    doubleList.add_front(1.1);
    doubleList.add_front(2.2);
    doubleList.add_front(3.3);
    doubleList.add_back(4.4);
    doubleList.add_back(5.5);
    doubleList.print();
    doubleList.remove_front();
    doubleList.remove_back();
    doubleList.print();
    
    return 0;
}
