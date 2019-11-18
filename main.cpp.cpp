#include "clip.h"
#include <iostream>

int main() {
    clip first ("Bring me to life", 28000, 3, "Evanescence", 1, 25,"Fallen",1000000);
    first.album = "Fallen";
    first.price = 1000000;

    first.get_inf();

    clip second ("Weight of the World", 30000, 4, "Evanescence", 3, 26,"The Open Door",3000000);
    second.album = "The Open Door";
    second.price = 3000000;
    second.get_inf();

    clip third ("Never Go Back", 10000, 2, "Evanescence", 10, 20,"Synthesis",80000);
    third.album = "Synthesis";
    third.price = 80000;
    third.get_inf();
}