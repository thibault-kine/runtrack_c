#include <stdlib.h>
#include "realloc_album.h"
#include "../../Jour02/Job03/array_clone.c"

t_album *realloc_album(t_album *albums, int size, int newsize) {

    t_album *res = malloc(sizeof(t_album) * newsize);
    int i = 0;
    for(i = 0; i < size; i++) {
        res[i] = albums[i];
    }

    return res;
}

int main() {

    t_album grad;
    grad.title = "The Life of Pablo";
    grad.artist = "Kanye West";
    grad.year = 2016;

    t_album astro;
    astro.title = "Astroworld";
    astro.artist = "Travis Scott";
    astro.year = 2018;

    t_album damn;
    damn.title = "DAMN.";
    damn.artist = "Kendrick Lamar";
    damn.year = 2017;
    
    t_album albums[2] = { grad, astro};
    // Ajoute une 4ème case pour un nouvel album
    t_album *new_albums = realloc_album(albums, 2, 3);
    new_albums[2] = damn;

    for(int i = 0; i < 3; i++) {
        print_album(&new_albums[i]);
    }

    free(new_albums);
}