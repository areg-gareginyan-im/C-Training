#include "vector.h"
#include <stdlib.h>
#include <stdio.h>

struct vector * newVector() {
  size_t capacity = 10;
  struct vector *v = (struct vector *) malloc(sizeof(struct vector));
  double *data = (double *) calloc(capacity, sizeof(double));
  v->data = data;
  v->capacity = capacity;
  v->size = 0;
  return v;
}

void push(struct vector* v, double value) {
  if(v->size == v->capacity) {
    v->capacity *= 2;
    v->data = (double*) realloc(v->data, v->capacity * sizeof(v->data));
  }
  *(v->data + v->size) = value;
  ++v->size;
}

void delete(struct vector* v, unsigned int index) {
  if(v->size == 0) {
    return;
  }
  /** TODO: handle functionality */
  --v->size;
}

double get(struct vector* v, unsigned int index) {
  if(v->size > index + 1) {
    /** TODO: handle the corner case */
    return -1;
  }
  return *(v->data + v->size - 1);
}

void printV(struct vector* v) {
  int i;
  for(i = 0; i < v->size; ++i) {
    printf("%d element value:\t%f\n", i, *(v->data + i));
  }
}

