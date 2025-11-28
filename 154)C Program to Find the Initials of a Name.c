#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    int cap = 1;
    for(int i=0; name[i]; i++){
        if(cap && name[i] != ' '){ printf("%c", name[i]); cap=0; }
        if(name[i] == ' ') cap=1;
    }
    printf("\n");
    return 0;
}
