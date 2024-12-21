#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char filename[50] = "spl.txt";
    char inputData[100];
    char readData[100];

    
    printf("Enter some text to write to the file: ");
    fgets(inputData, sizeof(inputData), stdin);

    
    file = fopen(filename, "w"); 
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    fprintf(file, "%s", inputData); 
    fclose(file);                   
    printf("Data written to file successfully!\n");

    file = fopen(filename, "r"); 
    {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    fgets(readData, sizeof(readData), file);
    printf("Data read from file: %s\n", readData);
    fclose(file); 

    return 0;
}
