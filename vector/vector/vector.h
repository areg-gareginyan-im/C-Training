#ifndef VECTOR_INCLUDED
#define VECTOR_INCLUDED
#include <stddef.h>

struct vector {
  double *data;
  size_t capacity;
  size_t size;
};

/**
 * Creates a new vector, initial capacity is 10
 */
struct vector * newVector();

/**
 * push a new double item into the vector. Resizes the vector if it's full.
 */
void push(struct vector* v, double value);

/**
 * Deletes the item of the given index from the given vector
 */
void delete(struct vector* v, unsigned int index);

/**
 * Gets the value of the given index from the vector
 */
double get(struct vector* v, unsigned int index);

/**
 * Prints the given vector
 */
void printV(struct vector* v);

#endif
