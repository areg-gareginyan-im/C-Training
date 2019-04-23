#ifndef VECTOR_INCLUDED
#define VECTOR_INCLUDED
#include <stddef.h>

typedef struct {
  double *data;
  size_t capacity;
  size_t size;
} vector;

/**
 * Creates a new vector, initial capacity is 10
 */
vector * newVector();

/**
 * Inserts a new double item into the vector. Resizes the vector if it's full.
 */
void insert(vector* v, double value);

/**
 * Deletes the item of the given index from the given vector
 */
void delete(vector* v, unsigned int index);

/**
 * Gets the value of the given index from the vector
 */
double* get(vector* v, unsigned int index);

/**
 * Prints the given vector
 */
void printV(vector* v);

/**
 * Returns the index of the  given value
 */
int indexOf(vector* v, double value);

/**
 * Inserts the givent element into the vector with the given index 
 */
void insertElementAt(vector* v, double value, unsigned int index);

/**
 * Clears the vector
 */
void clear(vector* v);

/**
 * Increases the vector size
 */
void increaseVectorSize(vector* v);

/**
 * Sorts the vector using TODO algorithm
 */
void sort(vector* v);

/**
 * Swaps the values of the given pointers
 */
void swap(double *a, double *b);

#endif
