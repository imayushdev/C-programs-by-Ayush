/*
    Compare Contents of Two Files
    Author: Ayush
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp1, *fp2;
    int ch1, ch2;
    char file1[100], file2[100];
    int flag = 0;

    // Taking first file name as input
    printf("File1 name: ");
    scanf("%s", file1);

    // Opening first file
    fp1 = fopen(file1, "r");

    // Taking second file name as input
    printf("File2 name: ");
    scanf("%s", file2);

    // Opening second file
    fp2 = fopen(file2, "r");

    // Closing program if either file is not opened
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File not found\n");
        exit(1);
    }

    // Comparing characters of both files one by one
    do
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        // If characters differ, files are not equal
        if (ch1 != ch2)
        {
            printf("Unequal files\n");
            fclose(fp1);
            fclose(fp2);
            return;
        }
    }
    while (ch1 != EOF && ch2 != EOF);

    // If both files end together, they are equal; else, they are not
    if (ch1 == EOF && ch2 == EOF)
        printf("Equal files\n");
    else
        printf("Unequal files\n");

    // Closing the files
    fclose(fp1);
    fclose(fp2);
}
