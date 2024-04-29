
#include "API2024parte2.h"

u32 Greedy(Grafo G, u32 * Orden){
    u32 nv = NumeroDeVertices(G);
    u32 vert_painted =0;
    u32 used_colors =0;
    for (u32 i = 0; i < nv; i++)
    {
        u32 vert_selected = Orden[i];
        if (Color(vert_selected, G)!= 0)
        {
            return INT32_MAX;
        }
        u32 how_many_vecinos = Grado(vert_selected, G);
        color used_colors[how_many_vecinos];
        for (u32 j = 0; j < how_many_vecinos; j++)
        {
            u32 vert_vecino = Vecino(j,vert_selected,G);
            used_colors[j] = Color(vert_vecino,G);
        }

        
    }

    if (vert_painted != nv)
    {
        return INT32_MAX;
    }

    return

}