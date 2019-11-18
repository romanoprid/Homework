#include "clip.h"
using namespace std;

clip::clip(){
    name;
    youtube;
    lenght;
    singer;
    position;
    memory;
    album;
    price;
}

clip::    clip(string clipname, int clipyoutube, int cliplenght, string clipsinger, int clipposition, int clipmemory, string clipalbum, int clipprice ){
    name = clipname;
    youtube = clipyoutube;
    lenght = cliplenght;
    singer = clipsinger;
    position = clipposition;
    memory = clipmemory;
    album = clipalbum;
    price = clipprice;
}
string clip::getName(){
    return name;
}
int clip::getYoutube(){
    return youtube;
}
int clip::getLenght() {
    return lenght;
}
string clip::getSinger() {
    return singer;
}
int clip::getPosition() {
    return position;
}
int clip::getMemory() {
    return memory;
}
string clip::getAlbum() {
    return album;
}
int clip::getPrice() {
    return price;
}
void clip::get_inf() {
    cout << "\nYour clip is: " <<"\""<<getName() << "\""<<"\nAlbum is: "<<getAlbum() << "\""<<"\nPrice is: "<< getPrice() << "\"" << ", Views on youtube are: " << getYoutube() << ", Lenght is: " << getLenght() << ", Name of singer is: " << getSinger() << ", Position is:" << getPosition() <<" Memory is: " << getMemory() << "\n";
}
clip::~clip() {
    cout <<"Destructed"<< endl;
}