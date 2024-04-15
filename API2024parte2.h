
#ifndef _API24parte2_h
#define _API24parte2_h

#include "APIG24.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

u32 Greedy(Grafo G, u32 * Orden);

char GulDukat(Grafo G, u32 * Orden);

char ElimGarak(Grafo G, u32 *Orden);

#endif
