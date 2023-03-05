#ifndef MAT_H 
#define MAT_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include <unistd.h>

#define MAXCOLS 7
#define MAXROWS 7

typedef struct Item{
	int val;
}Item;

typedef struct Matrix{
	Item m[MAXROWS][MAXCOLS];
}Matrix;

void GenerateMatrix(Matrix *mat);
void SetMatrixSignature();
void SaveMatrix(Matrix *mat);

#endif