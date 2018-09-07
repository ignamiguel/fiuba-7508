#define VGABUF ((volatile char *) 0xb8000)

static volatile char * VGABUF2 = (volatile char *) 0xb8000;

static void vga_write(const volatile char *s, int linea, int color) {
    char *p = s;
    *(p + 120) += 88;
    volatile char *buf = p;
    
    *buf++ = linea;
    *buf++ = color;

    *buf++ = 79;
    *buf++ = 47;
    *buf++ = 75;
    *buf++ = 47;
}

void comienzo(void) {
    int linea = 0;
    int color = 0;
    vga_write(VGABUF2, linea, color);

    while (1)
        asm("hlt");
}



/***********/
/* Parte 1 */
/***********/
// void comienzo(void) {
//     while (1)
//         continue;
// }
/***********/
// Parte 2 */
/***********/
// void comienzo(void) {
//     while (1)
//         asm("hlt");
// }
/***********/
/* Parte 3 */
/***********/
