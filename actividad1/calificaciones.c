#include <stdio.h>
int main () {
    float alumno1, alumno2, alumno3, alumno4, alumno5;

    if (alumno1>alumno2) {
        if alumno1>alumno3 {
            if alumno1>alumno4 {
                if alumno1>alumno5 {
                    alumno1 = alumno1 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            } else {
                if alumno4 > alumno5 {
                    alumno4 = alumno4 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            }
        } else {
            if alumno3 > alumno4 {
                if alumno3 > alumno5 {
                    alumno3 = alumno3 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            } else {
                if alumno4 > alumno5 {
                    alumno4 = alumno4 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            }
        }
    } else {
        if alumno2 > alumno3 {
            if alumno2 > alumno4 {
                if alumno2 > alumno5 {
                    alumno2 = alumno2 + 1 
                } else {
                    alumno5 = alumno5 + 1
                }
            } else {
                if alumno4 > alumno5 {
                    alumno4 = alumno4 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            }
        } else {
            if alumno3 > alumno4 {
                if alumno3 > alumno5 {
                    alumno3 = alumno3 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            } else {
                alumno4 > alumno5 {
                    alumno4 = alumno4 + 1
                } else {
                    alumno5 = alumno5 + 1
                }
            }
        }
    }
    
    return 0;
}