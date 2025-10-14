#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    FILE *src;
    FILE *dst;
    char ch;
    int count = 0; // Declare count here to keep track of copied characters

    // Check if correct number of arguments are provided
    if(argc < 3){
        printf("Usage: file_copy source_file destination_file\n");
        exit(1);
    }

    // Open source file in read mode
    src = fopen(argv[1], "r");
    if (src == NULL) {
        perror("Error opening source file");
        exit(1);
    }

    // Open destination file in write mode (create if doesn't exist)
    dst = fopen(argv[2], "w");
    if (dst == NULL) {
        perror("Error opening destination file");
        fclose(src); // Close source file before exiting
        exit(1);
    }

    // Read from source and write to destination character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
        count++; // Increment character count for each character copied
    }

    // Close both files
    fclose(src);
    fclose(dst);

    // Print success message with count of characters copied
    printf("Successfully copied %d characters.\n", count);

    return 0; // Return 0 to indicate successful execution
}

