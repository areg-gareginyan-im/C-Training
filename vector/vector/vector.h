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
 * push a new double item into the vector. Resizes the vector if it's full.
 */
void push(vector* v, double value);

/**
 * Deletes the item of the given index from the given vector
 */
void delete(vector* v, unsigned int index);

/**
 * Gets the value of the given index from the vector
 */
double get(vector* v, unsigned int index);

/**
 * Prints the given vector
 */
void printV(vector* v);

#endif
