#include <iostream>
using namespace std;

struct koordinat{
    int x;
    int y;

    koordinat* next;
};

typedef koordinat* ptrKoordinat;
typedef ptrKoordinat List;

void createElm(List& ttk, char newX, char newY){
    ptrKoordinat pNew = nullptr;

    pNew->x = newX;
    pNew->y = newY;

    pNew->next = ttk;
    ttk = pNew;
}

void print(List ttk){
    ptrKoordinat read = nullptr;
    if(read == nullptr){
        return;
    } else {
        read = ttk;
        do{
            cout << read->x << read->y << endl;
            read = read->next;
        } while ( read!= nullptr);
        
    }
}

main(){
    List titik = nullptr;
    string input;
    int pjg;

    getline(cin, input);
    pjg = input.length();
    int i = 0;
    while(i <= pjg){
        createElm(titik, input[i], input[i+2]);
        i += 4;
    }
     print(titik);
}