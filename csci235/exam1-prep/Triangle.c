#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
#include "Triangle.h"

double perimeter(Triangle t) {
    double sum = 0;
    sum += distance(t.p1, t.p2);
    sum += distance(t.p2, t.p3);
    sum += distance(t.p3, t.p1);
    
    return sum;
}

double embiggen(Triangle t) {
    double embiggening = 0; 
    
    embiggening += cromulence(t.p1, t.p2);
    embiggening += cromulence(t.p2, t.p3);
    embiggening += cromulence(t.p3, t.p1);
    
    return embiggening;
}
