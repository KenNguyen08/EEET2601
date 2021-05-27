#include <stdio.h>

int copy(char const *infile, char const *outfile);

int main() {
    if (copy("cmd.c", "cmd3.c") == 1) {
        printf("File copy was successful\n");
    } else {
        printf("File copy was failed\n");
    }
    return 0;
}

int copy(char const *infile, char const *outfile) {
    // Open files for reading and writing
    FILE *ifp = fopen(infile, "r");
    if (ifp == NULL) {
        return 0;
    }
    FILE *ofp = fopen(outfile, "w");
    if (ofp == NULL) {
        return 0;
    }

    // Read each character from infile then write it to outfile
    int countline = 0;
    for (int ch = fgetc(ifp); ch != EOF; ch = fgetc(ifp)) {
        if(ch == '\n')
        {
            fputc( countline + ' ', ofp);
        }
        fputc(ch, ofp);
    }

    // Close files
    fclose(ifp);
    fclose(ofp);
    
    return 1;
}