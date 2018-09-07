
kern0:     file format elf32-i386


Disassembly of section .text:

00100000 <multiboot>:
  100000:	02 b0 ad 1b 00 00    	add    0x1bad(%eax),%dh
  100006:	00 00                	add    %al,(%eax)
  100008:	fe 4f 52             	decb   0x52(%edi)
  10000b:	e4                   	.byte 0xe4

0010000c <comienzo>:
  10000c:	80 05 78 80 0b 00 58 	addb   $0x58,0xb8078
  100013:	c6 05 00 80 0b 00 00 	movb   $0x0,0xb8000
  10001a:	c6 05 01 80 0b 00 00 	movb   $0x0,0xb8001
  100021:	c6 05 02 80 0b 00 4f 	movb   $0x4f,0xb8002
  100028:	c6 05 03 80 0b 00 2f 	movb   $0x2f,0xb8003
  10002f:	c6 05 04 80 0b 00 4b 	movb   $0x4b,0xb8004
  100036:	c6 05 05 80 0b 00 2f 	movb   $0x2f,0xb8005
  10003d:	f4                   	hlt    
  10003e:	eb fd                	jmp    10003d <comienzo+0x31>
