#include "API2024parte2.h"
#include <stdio.h>

//Greedy --> Complexity --> O( n * (d+d+d)) --> O(n * 3d)
// --> O(3n*d) --> O(3*2m) --> O(6m) --> O(m)
// Aclaración --> n*d = 2m por el lema de apreton de manos 
u32 Greedy(Grafo G, u32 * Orden){
    u32 nv = NumeroDeVertices(G);
    u32 vert_painted =0;
    u32 total_colors =0;
    u32 delta = Delta(G)+1;
    for (u32 i = 0; i < nv; i++)
    {
        u32 vert_selected = Orden[i];
        if (Color(vert_selected, G)!= 0)
        {
            return INT32_MAX;
        }
        u32 how_many_vecinos = Grado(vert_selected, G);
        color used_colors[delta];
        for (u32 j = 0; j < how_many_vecinos; j++)
        {
            u32 vert_vecino = Vecino(j,vert_selected,G);
          }
    }

    if (vert_painted != nv)
    {
        return INT32_MAX;
    }

    return total_colors;

}