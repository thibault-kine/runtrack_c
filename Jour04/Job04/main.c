#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "create_album.h"

char *my_itoa(int n);

void print_album(t_album_list *album) {

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

int main() {
    t_album_list *ma_liste = create_album("Pink Floyd", "The Wall", 1979);
    ma_liste->next = create_album("Kendrick Lamar", "Good Kid, M.A.A.D. City", 2012);
    ma_liste->next->next = create_album("Trilogie", "Carpenter Brut", 2015);

    t_album_list *copie = ma_liste;
    while(ma_liste != NULL) {
        print_album(ma_liste);
        ma_liste = ma_liste->next;

        free(copie);
        copie = ma_liste;
    }

    ma_liste = copie;

    return 0;
}