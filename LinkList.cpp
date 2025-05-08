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

        if (start != NULL || nim <= start->noMhs)
            if ((start != NULL) && (nim == start->noMhs)){
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            

    }
}
