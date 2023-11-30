#include <stdio.h>
#include <unistd.h>
#include "print_album.h"
#include "../../Jour03/Job02/my_itoa.c"

void print_album(t_album *album) {

    int title_size = 0;
    int artist_size = 0;

    while(album->title[title_size] != '\0') title_size++;
    while(album->artist[artist_size] != '\0') artist_size++;

    write(1, "\"", sizeof(char));
    write(1, album->title, sizeof(char) * title_size);
    write(1, "\" by \"", sizeof(char) * 6);
    write(1, album->artist, sizeof(char) * artist_size);
    write(1, "\" released in ", sizeof(char) * 14);
    write(1, my_itoa(album->year), sizeof(int));
    write(1, "\n", sizeof(char));
}

// int main() {
//     t_album mbdtf;
//     mbdtf.artist = "Kanye West";
//     mbdtf.title = "My Beautiful Dark Twisted Fantasy";
//     mbdtf.year = 2010;

//     print_album(&mbdtf);

//     t_album mm_food;
//     mm_food.artist = "MF DOOM";
//     mm_food.title = "MM..FOOD";
//     mm_food.year = 2004;

//     print_album(&mm_food);
// }