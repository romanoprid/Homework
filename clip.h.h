#ifndef LAB4_LAPTOP_H
#define LAB4_LAPTOP_H
#include <string>
#include <iostream>
using namespace std;

class clip {

private:
    string name; //назва пісні
    int youtube ;  //кількість переглядів на youtube
    int lenght; // довжина кліпу (сек.)
    string singer; //ім'я виконавця

protected:
    int position; //позиція в чарті
    int memory; //пам'ять яку займає кліп(у мб)

public:
    string album ; // альбоми виконавця
    int price; //вартість вкладена у кліп

    clip();

    clip(string clipname, int clipyoutube, int cliplenght, string clipsinger, int clipposition, int clipmemory,string album, int price );

    string getName();

    int getYoutube();

    int getLenght();

    string getSinger();

    int getPosition();

    int getMemory();

    int getPrice();

    string getAlbum();

    void get_inf();

    ~clip();
};

#endif //LAB4_LAPTOP_H