// #include string.h   strlen()
int strlen(char *s) {
    int i = 0;
    while (s[i++]) {}
    return i;

    // while(s[i] != 0) {
    //   i++;
    // }
}

void strcpy(char *d, const char *s) {
    while(*d++ = *s++){;}
}

void strcpy(char *dest, const char *source) {
    int i = 0;
    do {
        dest[i] = source[i];
    }
    while(source[i] != 0);
}