#include <stdio.h>

int main() {
    FILE *input_file, *output_file;
    char input_filename[] = "input.txt";
    char output_filename[] = "output_trials.txt";
    char buffer[1024]; // Buffer to store each line of text

    // Open the input file for reading
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error: Unable to open input file %s\n", input_filename);
        return 1;
    }

    // Open the output file for writing
    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error: Unable to open output file %s\n", output_filename);
        fclose(input_file); // Close the input file
        return 1;
    }

    // Read from input file and write to output file
    while (fgets(buffer, sizeof(buffer), input_file) != NULL) {
        fputs(buffer, output_file);
    }

    // Close the files
    fclose(input_file);
    fclose(output_file);

    printf("File copied successfully from %s to %s\n", input_filename, output_filename);

    return 0;
}