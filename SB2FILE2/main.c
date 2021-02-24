#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp_in, *fp_out;
    char *infile = "1.jpg";
    char *outfile = "2.jpg";
    int ch;
    fp_in = fopen(infile, "rb");
    if (fp_in == NULL)
    {
        perror("File Opening Failed!");
        return EXIT_FAILURE;
    }
    fp_out = fopen(outfile, "wb");
    while(1)
    {
        ch = fgetc(fp_in);
        if(ch == EOF)
        {
            break;
        }
        fputc(ch, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);
    return 0;
}
