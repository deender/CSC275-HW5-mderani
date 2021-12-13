//
// Created by deend on 12/12/2021.
//

#ifndef HW5_LISTTOOLSHB_H
#define HW5_LISTTOOLSHB_H
template<class T>
class Node {
public:
    Node(const T& theData, Node<T>* theLink)
        : data(theData), link(theLink){};
    Node<T>* getLink() const{return link;}
    const T& getData() const{return data;}
    void setData(const T& theData){data = theData;}
    void setLink(Node<T>* ptr){link = ptr;}

   // const T &data;
   // const T &link; //Was getting errors and this was the only fix. Update: had a brain fart and forgot to declare private variables.
private:
    T data;
    Node<T> *link;
};

template<class T> void hInsert(Node<T>*& head, const T& theData); //inserts a node in the first spot
template<class T> void insert(Node<T>* afterMe, const T& theData); //inserts node
template<class T> void deleteNode(Node<T>* beforeMe); //deletes node
template<class T> void deleteFNode(Node<T>*& head);//template to delete first node
template <class T> Node<T>* search(Node<T>* head, const T& target); //template to search for node
template<class T> void display(Node<T>* head); //displays node



#endif //HW5_LISTTOOLSHB_H
