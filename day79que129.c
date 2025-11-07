#include <stdio.h>
int main() 
{ FILE *fp;
    char filename[] = "file.txt";
    int num, count = 0;
    long sum = 0;
    fp = fopen(filename, "r");
    if (fp == NULL) 
    { printf("Could not open %s\n", filename);
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1)
    { sum += num;
        count++;
    }
    fclose(fp);
    if (count == 0) 
    {  printf("No integers found in %s\n", filename);
        return 0;
    }
    double average = (double)sum / count;
    printf("File name: %s\n", filename);
    printf("Total no.: %d\n", count);
    printf("Sum: %ld\n", sum);
    printf("Average: %.3f\n", average);
    return 0;
}
