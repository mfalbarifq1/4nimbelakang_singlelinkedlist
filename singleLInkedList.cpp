#include <iostream>
#include <string>
using namespace std;


class Node{
    
public:
    int noMHS;
    Node *next;
};

class LinkedList{
    Node *START;


     public:
     LinkedList(){
        START = NULL ;
     }
     void addNode(){
        int nim ;
        cout << "\nMasukkan nomer mahasiswa : ";
        cin >> nim;

        Node *nodeBaru= new Node;
        nodeBaru->noMHS = nim;

        if (START == NULL || nim <= START ->noMHS){
            if (START != NULL && nim == START-> noMHS)
            {
                cout << "\nDuplikasi noMHS tidak diijinkan\n";
                return;
            }
        }
     }
};