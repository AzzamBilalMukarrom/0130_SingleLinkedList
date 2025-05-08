#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node*next;
};

class list{
Node *start;

public:
    list()
    {
        start = NULL;

    }
    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;
        Node *Nodebaru = new Node;
        Nodebaru->noMhs = nim;

        if (start != NULL || nim <= start->noMhs){
            if ((start != NULL) && (nim == start->noMhs)){
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            Nodebaru->next = start;
            start = Nodebaru;
            return;
        }
        Node *previous = start;
    Node *current = start;

    while ((current != NULL) && (nim >= current->noMhs)){
        if (nim == current->noMhs){
            cout << "\nDuplikasi noMhs tidak diijinkan|n";
            return;
        }
        previous = current;
        current = current->next;
    }
    Nodebaru->next = current;
    previous->next = Nodebaru;
    }

    bool listempty(){
        return (start == NULL);
    }

    bool Search(int nim, Node **previous, Node **current){
        *previous = start;
        *current = start;

        while ((*current != NULL) && (nim != (*current)->noMhs))
        {
            *previous = *current;
            *current = (*current)->next;
        }
        return (*current != NULL);
    }

    bool delnode(int nim){
        Node *current, *previous;
        if(!Search(nim, &previous, &current))
        return false;

        if (current == start)
        start = start->next;
        else
        previous->next = current->next;

        delete current;
        return true;
    }
    

}
