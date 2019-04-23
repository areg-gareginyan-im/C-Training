#include "vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

vector * newVector() {
  size_t capacity = 10;
  vector *v = (vector *) malloc(sizeof(vector));
  double *data = (double *) calloc(capacity, sizeof(double));
  v->data = data;
  v->capacity = capacity;
  v->size = 0;
  return v;
}

void push(vector* v, double value) {
  if(v->size == v->capacity) {
    increaseVectorSize(v);
  }
  *(v->data + v->size) = value;
  ++v->size;
}

void delete(vector* v, unsigned int index) {
  if(v->size == 0) {
    return;
  }
  /** TODO: handle functionality */
  --v->size;
}

double* get(vector* v, unsigned int index) {
  if(v->size < index + 1) {
    return NULL;
  }
  return (v->data + index);
}

void printV(vector* v) {
  int i;
  for(i = 0; i < v->size; ++i) {
    printf("%d element value:\t%f\n", i, v->data[i]);
  }
}

int indexOf(vector* v, double value) {
  int i;
  for(i = 0; i < v->size; ++i) {
    if(value == *(v->data + i)) {
      return i;
    }
  }
  return -1;
}

void insertElementAt(vector* v, double value, unsigned int index) {
  if(index >= v->size) {
    return;
  }
  if(v->size == v->capacity) {
    increaseVectorSize(v);
  }
  memmove((v->data + index + 1), (v->data + index), (v->size - index + 1) * sizeof(double));
  *(v->data + index) = value;
  ++v->size;
}

void clear(vector *v) {
  free(v);
  v = newVector();
}

void increaseVectorSize(vector *v) {
    v->capacity *= 2;
    v->data = (double*) realloc(v->data, v->capacity * sizeof(v->data));
}