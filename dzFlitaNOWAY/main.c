#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputfile;
    FILE *outputfile;
    int roads, vertices;
    inputfile = fopen("C:/Users/Acer/Desktop/dzFlitaNOWAY/input.txt", "r");
    outputfile = fopen("C:/Users/Acer/Desktop/dzFlitaNOWAY/graph.dot", "w");
    fprintf(outputfile, "graph{\n");
    while (fscanf(inputfile, "%d %d", &vertices, &roads)!=EOF) {
        fprintf(outputfile,"%d -- %d\n", vertices, roads);
    }

    fprintf(outputfile, "}\n");
    fclose(inputfile);
    fclose(outputfile);
    system("dot -Tpng -O C:/Users/Acer/Desktop/dzFlitaNOWAY/graph.dot");
    system("C:/Users/Acer/Desktop/dzFlitaNOWAY/graph.dot.png");

    return 0;
}