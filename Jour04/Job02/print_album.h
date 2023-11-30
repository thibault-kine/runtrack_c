#ifndef PRINT_ALBUM_H
#define PRINT_ALBUM_H

typedef struct album {
    char *artist;
    char *title;
    int year;
} t_album;

void print_album(t_album *album);

#endif