#ifndef _FOGEFOGE_H
#define _FOGEFOGE_H

#define CIMA 'w'
#define BAIXO 's'
#define DIREITA 'd'
#define ESQUERDA 'a'
#define BOMBA 'b'

void move (char direcao);
int acabou ();
int ehdirecao(char direcao);
void fastasmas ();
int paraondefantasmavai(int xatual, int yatual, int* xdestino, int* ydestino);
void explodepilula2(int x, int y, int somax, int somay, int qtd);
void explodepilula();

#endif


