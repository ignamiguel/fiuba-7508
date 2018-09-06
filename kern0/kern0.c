#define VGABUF ((volatile char *) 0xb8000)

void comienzo(void) {
    volatile char *buf = VGABUF;

    *buf++ = 79;
    *buf++ = 47;
    *buf++ = 75;
    *buf++ = 47;

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
