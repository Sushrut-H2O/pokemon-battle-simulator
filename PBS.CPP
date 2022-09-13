#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
#include <math.h>

union REGS in, out;

struct move
{
  char name[20];
  int type;
  int power;
  int acc;
  int pp;
};

struct pokemon
{
  char name[20];
  int dex;
  int type1;
  int type2;
  int atk;
  int def;
  int speed;
  int hp;
  move move1;
  move move2;
  move move3;
  move move4;
};

//Functions for Printing Type
char *printtype1(pokemon x)
{
  char *p;
  if (x.type1 == 1)
    p = "NORMAL";
  else if (x.type1 == 2)
    p = "FIRE";
  else if (x.type1 == 3)
    p = "WATER";
  else if (x.type1 == 4)
    p = "GRASS";
  else if (x.type1 == 5)
    p = "ELECTR";
  else if (x.type1 == 6)
    p = "FLYING";
  else if (x.type1 == 7)
    p = "DARK";
  else if (x.type1 == 8)
    p = "PSYCHC";
  else if (x.type1 == 9)
    p = "GHOST";
  else if (x.type1 == 10)
    p = "POISON";
  else if (x.type1 == 11)
    p = "GROUND";
  else if (x.type1 == 12)
    p = "ROCK";
  else if (x.type1 == 13)
    p = "BUG";
  else if (x.type1 == 14)
    p = "STEEL";
  else if (x.type1 == 15)
    p = "FIGHT";
  else if (x.type1 == 16)
    p = "ICE";
  else if (x.type1 == 17)
    p = "DRAGON";

  return p;
}

char *printtype2(pokemon x)
{
  char *p;
  if (x.type2 == 1)
    p = "NORMAL";
  else if (x.type2 == 2)
    p = "FIRE";
  else if (x.type2 == 3)
    p = "WATER";
  else if (x.type2 == 4)
    p = "GRASS";
  else if (x.type2 == 5)
    p = "ELECTR";
  else if (x.type2 == 6)
    p = "FLYING";
  else if (x.type2 == 7)
    p = "DARK";
  else if (x.type2 == 8)
    p = "PSYCHC";
  else if (x.type2 == 9)
    p = "GHOST";
  else if (x.type2 == 10)
    p = "POISON";
  else if (x.type2 == 11)
    p = "GROUND";
  else if (x.type2 == 12)
    p = "ROCK";
  else if (x.type2 == 13)
    p = "BUG";
  else if (x.type2 == 14)
    p = "STEEL";
  else if (x.type2 == 15)
    p = "FIGHT";
  else if (x.type2 == 16)
    p = "ICE";
  else if (x.type2 == 17)
    p = "DRAGON";
  else
    p = "NO TYPE";

  return p;
}

int typecolor1(pokemon x)
{
  int p;
  if (x.type1 == 1)
    p = 7;
  else if (x.type1 == 2)
    p = 12;
  else if (x.type1 == 3)
    p = 1;
  else if (x.type1 == 4)
    p = 2;
  else if (x.type1 == 5)
    p = 14;
  else if (x.type1 == 6)
    p = 9;
  else if (x.type1 == 7)
    p = 0;
  else if (x.type1 == 8)
    p = 13;
  else if (x.type1 == 9)
    p = 1;
  else if (x.type1 == 10)
    p = 5;
  else if (x.type1 == 11)
    p = 6;
  else if (x.type1 == 12)
    p = 6;
  else if (x.type1 == 13)
    p = 10;
  else if (x.type1 == 14)
   p = 8;
  else if (x.type1 == 15)
    p = 4;
  else if (x.type1 == 16)
    p = 3;
  else if (x.type1 == 17)
    p = 5;

  return p;
}

int typecolor2(pokemon x)
{
  int p;
  if (x.type2 == 1)
    p = 7;
  else if (x.type2 == 2)
    p = 12;
  else if (x.type2 == 3)
    p = 1;
  else if (x.type2 == 4)
    p = 2;
  else if (x.type2 == 5)
    p = 14;
  else if (x.type2 == 6)
    p = 9;
  else if (x.type2 == 7)
    p = 0;
  else if (x.type2 == 8)
    p = 13;
  else if (x.type2 == 9)
    p = 1;
  else if (x.type2 == 10)
    p = 5;
  else if (x.type2 == 11)
    p = 6;
  else if (x.type2 == 12)
    p = 6;
  else if (x.type2 == 13)
    p = 10;
  else if (x.type2 == 14)
    p = 8;
  else if (x.type2 == 15)
    p = 4;
  else if (x.type2 == 16)
    p = 3;
  else if (x.type2 == 17)
    p = 5;
  else
    p = 15;

  return p;
}

int typestyle1(pokemon x)
{
  int p;
  if (x.type1 == 1)
    p = 1;
  else if (x.type1 == 2)
    p = 1;
  else if (x.type1 == 3)
    p = 1;
  else if (x.type1 == 4)
    p = 1;
  else if (x.type1 == 5)
    p = 1;
  else if (x.type1 == 6)
    p = 1;
  else if (x.type1 == 7)
    p = 1;
  else if (x.type1 == 8)
    p = 1;
  else if (x.type1 == 9)
    p = 2;
  else if (x.type1 == 10)
    p = 1;
  else if (x.type1 == 11)
    p = 1;
  else if (x.type1 == 12)
    p = 2;
  else if (x.type1 == 13)
    p = 1;
  else if (x.type1 == 14)
    p = 1;
  else if (x.type1 == 15)
    p = 1;
  else if (x.type1 == 16)
    p = 1;
  else if (x.type1 == 17)
    p = 2;
  else
    p = 0;

  return p;
}

int typestyle2(pokemon x)
{
  int p;
  if (x.type2 == 1)
    p = 1;
  else if (x.type2 == 2)
    p = 1;
  else if (x.type2 == 3)
    p = 1;
  else if (x.type2 == 4)
    p = 1;
  else if (x.type2 == 5)
    p = 1;
  else if (x.type2 == 6)
    p = 1;
  else if (x.type2 == 7)
    p = 1;
  else if (x.type2 == 8)
    p = 1;
  else if (x.type2 == 9)
    p = 2;
  else if (x.type2 == 10)
    p = 1;
  else if (x.type2 == 11)
    p = 1;
  else if (x.type2 == 12)
    p = 2;
  else if (x.type2 == 13)
    p = 1;
  else if (x.type2 == 14)
    p = 1;
  else if (x.type2 == 15)
    p = 1;
  else if (x.type2 == 16)
    p = 1;
  else if (x.type2 == 17)
    p = 2;
  else
    p = 0;

  return p;
}

int movetypecolor (move x)
{
  int p;
  if (x.type == 1)
    p = 7;
  else if (x.type == 2)
    p = 12;
  else if (x.type == 3)
    p = 1;
  else if (x.type == 4)
    p = 2;
  else if (x.type == 5)
    p = 14;
  else if (x.type == 6)
    p = 9;
  else if (x.type == 7)
    p = 0;
  else if (x.type == 8)
    p = 13;
  else if (x.type == 9)
    p = 1;
  else if (x.type == 10)
    p = 5;
  else if (x.type == 11)
    p = 6;
  else if (x.type == 12)
    p = 6;
  else if (x.type == 13)
    p = 10;
  else if (x.type == 14)
    p = 8;
  else if (x.type == 15)
    p = 4;
  else if (x.type == 16)
    p = 3;
  else if (x.type == 17)
    p = 5;

  return p;
}

int movetypestyle (move x)
{
  int p;
  if (x.type == 1)
    p = 1;
  else if (x.type == 2)
    p = 1;
  else if (x.type == 3)
    p = 1;
  else if (x.type == 4)
    p = 1;
  else if (x.type == 5)
    p = 1;
  else if (x.type == 6)
    p = 1;
  else if (x.type == 7)
    p = 1;
  else if (x.type == 8)
    p = 1;
  else if (x.type == 9)
    p = 2;
  else if (x.type == 10)
    p = 1;
  else if (x.type == 11)
    p = 1;
  else if (x.type == 12)
    p = 2;
  else if (x.type == 13)
    p = 1;
  else if (x.type == 14)
    p = 1;
  else if (x.type == 15)
    p = 1;
  else if (x.type == 16)
    p = 1;
  else if (x.type == 17)
    p = 2;
  else
    p = 0;
  return p;
}

//Global Variables
int gd = DETECT, gm;
int midx = 638/2;
int midy = 478/2;
pokemon red[6];
pokemon redbattle;
pokemon bluebattle;
move redmove;
move bluemove;
pokemon store[6];

//Display Functions
void printpokemon(pokemon a, pokemon b, pokemon c, pokemon d, pokemon e, pokemon f, pokemon g, pokemon h, pokemon i)
{
  rectangle (midx - 300, 120, midx - 150, 170);
    outtextxy (midx - 225, 135, a.name);
    if(a.type2 != 0)
    {
      rectangle (midx - 290, 145, midx - 230, 165);
	setfillstyle (typestyle1(a), typecolor1(a));
	floodfill (midx - 289, 146, 15);
	outtextxy (midx - 260, 155, printtype1(a));
      rectangle (midx - 220, 145, midx - 160, 165);
	setfillstyle (typestyle2(a), typecolor2(a));
	floodfill (midx - 219, 146, 15);
	outtextxy (midx - 190, 155, printtype2(a));
    }

    else
    {
      rectangle (midx - 255, 145, midx - 195, 165);
	setfillstyle (typestyle1(a), typecolor1(a));
	floodfill (midx - 254, 146, 15);
	outtextxy (midx - 225, 155, printtype1(a));
    }

  rectangle (midx - 75, 120, midx + 75, 170);
    outtextxy (midx, 135, b.name);
    rectangle (midx - 65, 145, midx - 5, 165);
      setfillstyle (typestyle1(b), typecolor1(b));
      floodfill (midx - 64, 146, 15);
      outtextxy (midx - 35, 155, printtype1(b));
    rectangle (midx + 5, 145, midx + 65, 165);
      setfillstyle (typestyle2(b), typecolor2(b));
      floodfill (midx + 6, 146, 15);
      outtextxy (midx + 35, 155, printtype2(b));
  //This position has no dual types

  rectangle (midx + 150, 120, midx + 300, 170);
    outtextxy (midx + 225, 135, c.name);
    rectangle (midx + 195, 145, midx + 255, 165);
      setfillstyle (typestyle1(c), typecolor1(c));
      floodfill (midx + 196, 146, 15);
      outtextxy (midx + 225, 155, printtype1(c));
  //This position has no dual types


  rectangle (midx - 300, 220, midx - 150, 270);
    outtextxy (midx - 225, 235, d.name);
    if(d.type2 != 0)
    {
      rectangle (midx - 290, 245, midx - 230, 265);
	setfillstyle (typestyle1(d), typecolor1(d));
	floodfill (midx - 289, 246, 15);
	outtextxy (midx - 260, 255, printtype1(d));
      rectangle (midx - 220, 245, midx - 160, 265);
	setfillstyle (typestyle2(d), typecolor2(d));
	floodfill (midx - 219, 246, 15);
	outtextxy (midx - 190, 255, printtype2(d));
    }

    else
    {
      rectangle (midx - 255, 245, midx - 195, 265);
	setfillstyle (typestyle1(d), typecolor1(d));
	floodfill (midx - 254, 246, 15);
	outtextxy (midx - 225, 255, printtype1(d));
    }

  rectangle (midx - 75, 220, midx + 75, 270);
    outtextxy (midx, 235, e.name);
    if(e.type2 != 0)
    {
      rectangle (midx - 65, 245, midx - 5, 265);
	setfillstyle (typestyle1(e), typecolor1(e));
	floodfill (midx - 64, 246, 15);
	outtextxy (midx - 35, 255, printtype1(e));
      rectangle (midx + 5, 245, midx + 65, 265);
	setfillstyle (typestyle2(e), typecolor2(e));
	floodfill (midx + 6, 246, 15);
	outtextxy (midx + 35, 255, printtype2(e));
    }

    else
    {
      rectangle (midx - 30, 245, midx + 30, 265);
	setfillstyle (typestyle1(e), typecolor1(e));
	floodfill (midx - 29, 246, 15);
	outtextxy (midx, 255, printtype1(e));
    }

  rectangle (midx + 150, 220, midx + 300, 270);
    outtextxy (midx + 225, 235, f.name);
    if(f.type2 != 0)
    {
      rectangle (midx + 160, 245, midx + 220, 265);
	setfillstyle (typestyle1(f), typecolor1(f));
	floodfill (midx + 161, 246, 15);
	outtextxy (midx + 190, 255, printtype1(f));
      rectangle (midx + 230, 245, midx + 290, 265);
	setfillstyle (typestyle2(f), typecolor2(f));
	floodfill (midx + 231, 246, 15);
	outtextxy (midx + 260, 255, printtype2(f));
    }

    else
    {
      rectangle (midx + 195, 245, midx + 255, 265);
	setfillstyle (typestyle1(f), typecolor1(f));
	floodfill (midx + 196, 246, 15);
	outtextxy (midx + 225, 255, printtype1(f));
    }

  rectangle (midx - 300, 320, midx - 150, 370);
    outtextxy (midx - 225, 335, g.name);
    rectangle (midx - 290, 345, midx - 230, 365);
      setfillstyle (typestyle1(g), typecolor1(g));
      floodfill (midx - 289, 346, 15);
      outtextxy (midx - 260, 355, printtype1(g));
    rectangle (midx - 220, 345, midx - 160, 365);
      setfillstyle (typestyle2(g), typecolor2(g));
      floodfill (midx - 219, 346, 15);
      outtextxy (midx - 190, 355, printtype2(g));
  //This position has no single types

  rectangle (midx - 75, 320, midx + 75, 370);
    outtextxy (midx, 335, h.name);
    if(h.type2 != 0)
    {
      rectangle (midx - 65, 345, midx - 5, 365);
	setfillstyle (typestyle1(h), typecolor1(h));
	floodfill (midx - 64, 346, 15);
	outtextxy (midx - 35, 355, printtype1(h));
      rectangle (midx + 5, 345, midx + 65, 365);
	setfillstyle (typestyle2(h), typecolor2(h));
	floodfill (midx + 6, 346, 15);
	outtextxy (midx + 35, 355, printtype2(h));
    }

    else
    {
      rectangle (midx - 30, 345, midx + 30, 365);
	setfillstyle (typestyle1(h), typecolor1(h));
	floodfill (midx - 29, 346, 15);
	outtextxy (midx, 355, printtype1(h));
    }

  rectangle (midx + 150, 320, midx + 300, 370);
    outtextxy (midx + 225, 335, i.name);
    rectangle (midx + 195, 345, midx + 255, 365);
      setfillstyle (typestyle1(i), typecolor1(i));
      floodfill (midx + 196, 346, 15);
      outtextxy (midx + 225, 355, printtype1(i));
    //This position has no dual types

}

void displayteam(pokemon a, pokemon b, pokemon c, pokemon d, pokemon e, pokemon f)
{

//Group 1
  rectangle (midx - 300, 100, midx - 150, 200);
    outtextxy (midx - 225, 120, a.name);
    if (a.type2 == 0)
    {
      rectangle (midx - 255, 165, midx - 195, 185);
	setfillstyle (typestyle1 (a), typecolor1 (a));
	floodfill (midx - 254, 166, 15);
	outtextxy (midx - 225, 175, printtype1(a));
    }

    else
    {
      rectangle (midx - 290, 165, midx - 230, 185);
	setfillstyle (typestyle1 (a), typecolor1(a));
	floodfill (midx - 289, 166, 15);
	outtextxy (midx - 260, 175, printtype1(a));
      rectangle (midx - 220, 165, midx - 160, 185);
	setfillstyle (typestyle2 (a), typecolor2 (a));
	floodfill (midx - 219, 166, 15);
	outtextxy (midx - 190, 175, printtype2(a));
    }

//Group 2
  rectangle (midx - 75, 100, midx + 75, 200);
    outtextxy (midx, 120, b.name);
    if (b.type2 == 0)
    {
      rectangle (midx - 30, 165, midx + 30, 185);
	setfillstyle (typestyle1 (b), typecolor1 (b));
	floodfill (midx - 29, 166, 15);
	outtextxy (midx, 175, printtype1(b));
    }

  else
  {
    rectangle (midx - 65, 165, midx - 5, 185);
      setfillstyle (typestyle1 (b), typecolor1(b));
      floodfill (midx - 64, 166, 15);
      outtextxy (midx - 35, 175, printtype1(b));
    rectangle (midx + 5, 165, midx + 65, 185);
      setfillstyle (typestyle2 (b), typecolor2 (b));
      floodfill (midx + 6, 166, 15);
      outtextxy (midx + 35, 175, printtype2(b));
  }

//Group 3
  rectangle (midx + 150, 100, midx + 300, 200);
    outtextxy (midx + 225, 120, c.name);
    if (c.type2 == 0)
    {
      rectangle (midx + 195, 165, midx + 255, 185);
	setfillstyle (typestyle1 (c), typecolor1 (c));
	floodfill (midx + 196, 166, 15);
	outtextxy (midx + 225, 175, printtype1(c));
    }

    else
    {
      rectangle (midx + 160, 165, midx + 220, 185);
	setfillstyle (typestyle1 (c), typecolor1(c));
	floodfill (midx + 161, 166, 15);
	outtextxy (midx + 190, 175, printtype1(c));
      rectangle (midx + 230, 165, midx + 290, 185);
	  setfillstyle (typestyle2 (c), typecolor2 (c));
	  floodfill (midx + 231, 166, 15);
	  outtextxy (midx + 260, 175, printtype2(c));
    }

//Group 4
  rectangle (midx - 300, 300, midx - 150, 400);
    outtextxy (midx - 225, 320, d.name);
    if (d.type2 == 0)
    {
      rectangle (midx - 255, 365, midx - 195, 385);
	setfillstyle (typestyle1 (d), typecolor1 (d));
	floodfill (midx - 254, 366, 15);
	outtextxy (midx - 225, 375, printtype1(d));
    }

    else
    {
      rectangle (midx - 290, 365, midx - 230, 385);
	setfillstyle (typestyle1 (d), typecolor1(d));
	floodfill (midx - 289, 366, 15);
	outtextxy (midx - 260, 375, printtype1(d));
      rectangle (midx - 220, 365, midx - 160, 385);
	setfillstyle (typestyle2 (d), typecolor2 (d));
	floodfill (midx - 219, 366, 15);
	outtextxy (midx - 190, 375, printtype2(d));
    }

//Group 5
  rectangle (midx - 75, 300, midx + 75, 400);
    outtextxy (midx, 320, e.name);
    if (e.type2 == 0)
    {
      rectangle (midx - 30, 365, midx + 30, 385);
	setfillstyle (typestyle1 (e), typecolor1 (e));
	floodfill (midx - 29, 366, 15);
	outtextxy (midx, 375, printtype1(e));
    }

    else
     {
       rectangle (midx - 65, 365, midx - 5, 385);
	 setfillstyle (typestyle1 (e), typecolor1(e));
	 floodfill (midx - 64, 366, 15);
	 outtextxy (midx - 35, 375, printtype1(e));
       rectangle (midx + 5, 365, midx + 65, 385);
	 setfillstyle (typestyle2 (e), typecolor2 (e));
	 floodfill (midx + 6, 366, 15);
	 outtextxy (midx + 35, 375, printtype2(e));
      }

  //Group 6
  rectangle (midx + 150, 300, midx + 300, 400);
    outtextxy (midx + 225, 320, f.name);
    if (f.type2 == 0)
    {
      rectangle (midx + 195, 365, midx + 255, 385);
	setfillstyle (typestyle1 (f), typecolor1 (f));
	floodfill (midx + 196, 366, 15);
	outtextxy (midx + 225, 375, printtype1(f));
    }

    else
    {
      rectangle (midx + 160, 365, midx + 220, 385);
	setfillstyle (typestyle1 (f), typecolor1(f));
	floodfill (midx + 161, 366, 15);
	outtextxy (midx + 190, 375, printtype1(f));
      rectangle (midx + 230, 365, midx + 290, 385);
	setfillstyle (typestyle2 (f), typecolor2 (f));
	floodfill (midx + 231, 366, 15);
	outtextxy (midx + 260, 375, printtype2(f));
    }

}
//Sound Functions
void clicksound()
{
  sound (1800);
  delay (60);
  nosound();
}

void startsound()
{
  sound (659.25); delay (120);
  nosound(); delay (75);
  sound (659.25); delay (120);
  nosound(); delay (150);
  sound (659.25); delay (120);
  nosound(); delay (150);
  sound (523.25); delay (90);
  nosound(); delay (40);
  sound (659.25); delay (120);
  nosound(); delay (150);
  sound (783.99); delay (180);
  nosound(); delay (450);
  sound (392.00); delay (200);
  nosound();
}

void losesound()
{
  sound (783.99); sound (987.77); delay (120);
  nosound(); delay (75);
  sound (1174.66); sound (1396.91); delay (120);
  nosound(); delay (75);
  sound (1174.66); sound (1396.91); delay (120);
  nosound(); delay (75);
  sound (1174.66); sound (1396.91); delay (120);
  nosound(); delay (75);
  sound (1046.50); sound (1318.51); delay (120);
  nosound(); delay (75);
  sound (987.77); sound (1174.66); delay (120);
  nosound(); delay (75);
  sound (783.99); sound (1046.50); delay (120);
  nosound(); delay (75);
  sound (659.25); delay (120);
  nosound(); delay (75);
  sound (659.25); delay (120);
  nosound(); delay (75);
  sound (523.25); delay (120);
  nosound();
}

void winsound()
{
  sound (880.00); delay (120);
  nosound(); delay (75);
  sound (880.00); delay (120);
  nosound(); delay (75);
  sound (880.00); delay (120);
  nosound(); delay (75);
  sound (880.00); delay (120);
  nosound(); delay (75);
  sound (987.77); delay (120);
  nosound(); delay (75);
  sound (1108.73); delay (120);
  nosound(); delay (75);
  sound (1174.66); delay (120);
  nosound();
}

//Game Functions
void playblue (pokemon &a)
{
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  rectangle (382, 151, 579, 251);
  setviewport (383, 152, 578, 250, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  int xmb = (382 + 579) / 2;
  outtextxy (xmb, 171, a.name);
  outtextxy (xmb - 10, 191, "HP = ");
  char hps[17];
  outtextxy (xmb + 15, 191, itoa (a.hp, hps, 10));
  setcolor (15);
  if (a.type2 == 0)
  {
    rectangle (xmb - 30, 221, xmb + 30, 241);
      setfillstyle (typestyle1 (a), typecolor1 (a));
      floodfill (xmb - 29, 222, 15);
      outtextxy (xmb, 231, printtype1(a));
  }
  else
  {
    rectangle (xmb - 65, 221, xmb - 5, 241);
      setfillstyle (typestyle1 (a), typecolor1(a));
      floodfill (xmb - 64, 222, 15);
      setcolor (15);
      outtextxy (xmb - 35, 231, printtype1(a));
    rectangle (xmb + 5, 221, xmb + 65, 241);
      setfillstyle (typestyle2 (a), typecolor2 (a));
      floodfill (xmb + 6, 222, 15);
      outtextxy (xmb + 35, 231, printtype2(a));
  }
}

void playred (pokemon &a)
{
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  setviewport (62, 130, 259, 328, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  rectangle (61, 229, 258, 329);
  setcolor (15);
  int xmr = (61 + 258) / 2;
  outtextxy (xmr, 249, a.name);
  outtextxy (xmr - 10, 269, "HP = ");
  char hps[17];
  outtextxy (xmr + 15, 269, itoa (a.hp, hps, 10));
  setcolor (15);
  if (a.type2 == 0)
  {
    rectangle (xmr - 30, 299, xmr + 30, 319);
    setfillstyle (typestyle1 (a), typecolor1 (a));
    floodfill (xmr - 29, 300, 15);
    setcolor (15);
    outtextxy (xmr, 309, printtype1(a));
  }
  else
  {
    setcolor (15);
    rectangle (xmr - 65, 299, xmr - 5, 319);
      setfillstyle (typestyle1 (a), typecolor1(a));
      floodfill (xmr - 64, 300, 15);
      setcolor (15);
      outtextxy (xmr - 35, 309, printtype1(a));
    rectangle (xmr + 5, 299, xmr + 65, 319);
      setfillstyle (typestyle2 (a), typecolor2 (a));
      floodfill (xmr + 6, 300, 15);
      outtextxy (xmr + 35, 309, printtype2(a));
  }
}

int xmc = 320;
int ymc = 429;

//Bottom Screen
void playchoice ()
{
  setcolor (15);
  setfillstyle (1, 4);
  rectangle (xmc - 250, ymc - 40, xmc - 150, ymc + 40);
    floodfill (xmc - 249, ymc - 39, 15);
    outtextxy (xmc - 200, ymc, "RUN");
  rectangle (xmc - 100, ymc - 40, xmc + 100, ymc + 40);
    floodfill (xmc - 99, ymc - 39, 15);
    outtextxy (xmc, ymc, "FIGHT");
  rectangle (xmc + 150, ymc - 40, xmc + 250, ymc + 40);
    floodfill (xmc + 151, ymc - 39, 15);
    outtextxy (xmc + 200, ymc, "SWITCH");
}

//Display Moves
void playmove (pokemon &a)
{
  setviewport (2, 380, 638, 478, 1);
  clearviewport ();
  setviewport (0, 0, 639, 479, 1);
  rectangle (1, 379, 639, 479);
  setcolor (15);
  settextjustify (CENTER_TEXT, CENTER_TEXT);

    rectangle (xmc - 180, ymc - 40, xmc - 20, ymc - 10);
    setfillstyle (movetypestyle(a.move1), movetypecolor(a.move1));
    floodfill (xmc - 179, ymc - 39, 15);
    setcolor (15);
    outtextxy (xmc - 120, ymc - 25, a.move1.name);
    char pps1 [10];
    outtextxy (xmc - 40, ymc - 25, itoa (a.move1.pp, pps1, 10));

    rectangle (xmc + 20, ymc - 40, xmc + 180, ymc - 10);
    setfillstyle (movetypestyle(a.move2), movetypecolor(a.move2));
    floodfill (xmc + 21, ymc - 39, 15);
    setcolor (15);
    outtextxy (xmc + 80, ymc - 25, a.move2.name);
    char pps2 [10];
    outtextxy (xmc + 160, ymc - 25, itoa (a.move2.pp, pps2, 10));

    rectangle (xmc - 180, ymc + 10, xmc - 20, ymc + 40);
    setfillstyle (movetypestyle(a.move3), movetypecolor(a.move3));
    floodfill (xmc - 179, ymc + 11, 15);
    setcolor (15);
    outtextxy (xmc - 120, ymc + 25, a.move3.name);
    char pps3 [10];
    outtextxy (xmc - 40, ymc + 25, itoa (a.move3.pp, pps3, 10));

    rectangle (xmc + 20, ymc + 10, xmc + 180, ymc + 40);
    setfillstyle (movetypestyle(a.move4), movetypecolor(a.move4));
    floodfill (xmc + 22, ymc + 11, 15);
    setcolor (15);
    outtextxy (xmc + 80, ymc + 25, a.move4.name);
    char pps4 [10];
    outtextxy (xmc + 160, ymc + 25, itoa (a.move4.pp, pps4, 10));
}

//Random Mouse Functions
void mouseposi (int &xpos, int &ypos, int &click)
{
  in.x.ax = 3;
  int86 (51, &in, &out);
  click = out.x.bx;
  xpos = out.x.cx;
  ypos = out.x.dx;
}

int callmouse()
{
  in.x.ax = 1;
  int86 (51, &in, &out);
  return 1;
}

void setposi (int &xpos, int &ypos)
{
  in.x.ax = 4;
  in.x.cx = xpos;
  in.x.dx = ypos;
  int86 (51, &in, &out);
}

//Which Pokemon First
void decidefirst(pokemon &a, pokemon &b, pokemon &c, pokemon &d, pokemon &e, pokemon &f)
{
  int constant = 0;
  int xposi, yposi, cl;
  int r = getmaxx(), s = midy;
  setposi (r, s);
  callmouse();
  do
  {
    mouseposi (xposi, yposi, cl);
    if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 100) && (yposi < 200)) || ((yposi > 300) && (yposi < 400))))
    {
      clicksound();
      break;
    }
  } while (constant == 0);
  if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 100) && (yposi < 200))
  {
    red[0] = a;
    red[1] = b;
    red[2] = c;
    red[3] = d;
    red[4] = e;
    red[5] = f;
  }
  else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 100) && (yposi < 200))
  {
    red[0] = b;
    red[1] = a;
    red[2] = c;
    red[3] = d;
    red[4] = e;
    red[5] = f;
  }
  else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 100) && (yposi < 200))
  {
    red[0] = c;
    red[1] = a;
    red[2] = b;
    red[3] = d;
    red[4] = e;
    red[5] = f;
  }
  else if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 300) && (yposi < 400))
  {
    red[0] = d;
    red[1] = a;
    red[2] = b;
    red[3] = c;
    red[4] = e;
    red[5] = f;
  }
  else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 300) && (yposi < 400))
  {
    red[0] = e;
    red[1] = a;
    red[2] = b;
    red[3] = c;
    red[4] = d;
    red[5] = f;
  }
  else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 300) && (yposi < 400))
  {
    red[0] = f;
    red[1] = a;
    red[2] = b;
    red[3] = c;
    red[4] = d;
    red[5] = e;
  }

  for (int i = 0; i < 6; i++)
    store[i] = red[i];
}

//When Switching
void decideswitch(pokemon &a, pokemon &b, pokemon &c, pokemon &d, pokemon &e, pokemon &f)
{
  clrscr();
  closegraph();
  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  outtextxy (midx, 50, "Which Pokemon would you like to send out?");
  displayteam (a, b, c, d, e, f);
  int constant = 0, xposi, yposi, cl;
  int r = getmaxx(), s = midy;
  setposi (r, s);
  callmouse();
  int zerohp;
  do
  {
    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 100) && (yposi < 200)) || ((yposi > 300) && (yposi < 400))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);
    zerohp = 0;
    if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 100) && (yposi < 200))
      redbattle = a;
    else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 100) && (yposi < 200))
      redbattle = b;
    else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 100) && (yposi < 200))
      redbattle = c;
    else if ((xposi > midx - 300) && (xposi < midx - 150) && (yposi > 300) && (yposi < 400))
      redbattle = d;
    else if ((xposi > midx - 75) && (xposi < midx + 75) && (yposi > 300) && (yposi < 400))
      redbattle = e;
    else if ((xposi > midx + 150) && (xposi < midx + 300) && (yposi > 300) && (yposi < 400))
      redbattle = f;
    if(redbattle.hp == 0)
    {
      zerohp = 1;
      outtextxy (midx, 70, "Pokemon has fainted...");
    }
  } while(zerohp == 1);
}

//Start of Battle
void battleopen (pokemon &b, pokemon &r)
{
  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  rectangle (1, 1, 639, 101);
  setfillstyle (1, 0);
  floodfill (2, 2, 15);
  setcolor (15);
  outtextxy (100, 51, "You are challenged by Champion Blue!");
  getch();
  clicksound();

  clearviewport();
  setcolor (15);
  rectangle (1, 1, 639, 101);
  floodfill (2, 2, 15);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (100, 51, "Champion Blue sent out");
  outtextxy (280, 51, b.name);
  getch();
  clicksound();

  setcolor (15);
  setviewport (0, 0, 639, 479, 1);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  playblue (b);
  setfillstyle (1, 0);
  getch();
  clicksound();

  setviewport (2, 2, 638, 100, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  floodfill (2, 2, 15);
  rectangle (1, 1, 639, 101);
  floodfill (2, 2, 15);
  setcolor (15);
  outtextxy (100, 51, "Go!");
  outtextxy (160, 51, r.name);
  getch();
  clicksound();

  setcolor (15);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  playred (r);
  setfillstyle (1, 0);
  getch();
  clicksound();
}

//Move Effectiveness Functions
float checksuper(pokemon x, move a)
{
  int sfire [5] = {4, 13, 14, 16, 18};
  int swater [5] = {2, 11, 12, 18, 18};
  int sgrass [5] = {3, 11, 12, 18, 18};
  int selectr [5] = {3, 6, 18, 18, 18};
  int sflying [5] = {4, 13, 15, 18, 18};
  int sdark [5] = {8, 9, 18, 18, 18};
  int spsychc [5] = {10, 15, 18, 18, 18};
  int sghost [5] = {8, 9, 18, 18, 18};
  int spoison [5] = {4, 13, 18, 18, 18};
  int sground [5] = {2, 5, 12, 14, 18};
  int srock [5] = {2, 13, 16, 18, 18};
  int sbug [5] = {4, 7, 8, 18, 18};
  int ssteel [5] = {6, 18, 18, 18, 18};
  int sfight [5] = {1, 7, 12, 14, 16};
  int sice [5] = {4, 6, 11, 17, 18};
  int sdragon [5] = {17, 18, 18, 18, 18};
  float checksuper = 1;

  for (int i = 0; i < 5; i++)
  {
    if(a.type == 2 && (x.type1 == sfire [i] || x.type2 == sfire [i]))
      checksuper *= 2;
    else if (a.type == 3 && (x.type1 == swater [i] || x.type2 == swater [i]))
      checksuper *= 2;
    else if (a.type == 4 && (x.type1 == sgrass [i] || x.type2 == sgrass [i]))
      checksuper *= 2;
    else if (a.type == 5 && (x.type1 == selectr [i] || x.type2 == selectr [i]))
      checksuper *= 2;
    else if (a.type == 6 && (x.type1 == sflying [i] || x.type2 == sflying [i]))
      checksuper *= 2;
    else if (a.type == 7 && (x.type1 == sdark [i] || x.type2 == sdark [i]))
      checksuper *= 2;
    else if (a.type == 8 && (x.type1 == spsychc [i] || x.type2 == spsychc [i]))
      checksuper *= 2;
    else if (a.type == 9 && (x.type1 == sghost [i] || x.type2 == sghost [i]))
      checksuper *= 2;
    else if (a.type == 10 && (x.type1 == spoison [i] || x.type2 == spoison [i]))
      checksuper *= 2;
    else if (a.type == 11 && (x.type1 == sground [i] || x.type2 == sground [i]))
      checksuper *= 2;
    else if (a.type == 12 && (x.type1 == srock [i] || x.type2 == srock [i]))
      checksuper *= 2;
    else if (a.type == 13 && (x.type1 == sbug [i] || x.type2 == sbug [i]))
      checksuper *= 2;
    else if (a.type == 14 && (x.type1 == ssteel [i] || x.type2 == ssteel [i]))
      checksuper *= 2;
    else if (a.type == 15 && (x.type1 == sfight [i] || x.type2 == sfight [i]))
      checksuper *= 2;
    else if (a.type == 16 && (x.type1 == sice [i] || x.type2 == sice [i]))
      checksuper *= 2;
    else if (a.type == 17 && (x.type1 == sdragon [i] || x.type2 == sdragon [i]))
      checksuper *= 2;
    else
      checksuper *= 1;
  }
  return checksuper;
}

float checknot (pokemon x, move a)
{
  int nnormal [7] = {12, 14, 18, 18, 18, 18, 18};
  int nfire [7] = {2, 3, 11, 12, 17, 18, 18};
  int nwater [7] = {3, 4, 17, 18, 18, 18, 18};
  int ngrass [7] = {2, 4, 6, 10, 13, 16, 17};
  int nelectr [7] = {4, 5, 17, 18, 18, 18, 18};
  int nflying [7] = {5, 12, 14, 18, 18, 18, 18};
  int ndark [7] = {7, 15, 18, 18, 18, 18, 18};
  int npsychc [7] = {8, 14, 18, 18, 18, 18, 18};
  int nghost [7] = {7, 18, 18, 18, 18, 18, 18};
  int npoison [7] = {9, 10, 11, 12, 18, 18, 18};
  int nground [7] = {4, 13, 18, 18, 18, 18, 18};
  int nrock [7] = {11, 14, 15, 18, 18, 18, 18};
  int nbug [7] = {2, 6, 9, 10, 14, 15, 18};
  int nsteel [7] = {2, 3, 5, 14, 18, 18, 18};
  int nfight [7] = {6, 8, 10, 13, 18, 18, 18};
  int nice [7] = {2, 3, 14, 16, 18, 18, 18};
  int ndragon [7] = {14, 18, 18, 18, 18, 18, 18};
  float checknot = 1;

  for (int i = 0; i < 6; i++)
  {
    if(a.type == 1 && (x.type1 == nnormal [i] || x.type2 == nnormal [i]))
      checknot *= 0.5;
    else if(a.type == 2 && (x.type1 == nfire [i] || x.type2 == nfire [i]))
      checknot *= 0.5;
    else if (a.type == 3 && (x.type1 == nwater [i] || x.type2 == nwater [i]))
      checknot *= 0.5;
    else if (a.type == 4 && (x.type1 == ngrass [i] || x.type2 == ngrass [i]))
      checknot *= 0.5;
    else if (a.type == 5 && (x.type1 == nelectr [i] || x.type2 == nelectr [i]))
      checknot *= 0.5;
    else if (a.type == 6 && (x.type1 == nflying [i] || x.type2 == nflying [i]))
      checknot *= 0.5;
    else if (a.type == 7 && (x.type1 == ndark [i] || x.type2 == ndark [i]))
      checknot *= 0.5;
    else if (a.type == 8 && (x.type1 == npsychc [i] || x.type2 == npsychc [i]))
      checknot *= 0.5;
    else if (a.type == 9 && (x.type1 == nghost [i] || x.type2 == nghost [i]))
      checknot *= 0.5;
    else if (a.type == 10 && (x.type1 == npoison [i] || x.type2 == npoison [i]))
      checknot *= 0.5;
    else if (a.type == 11 && (x.type1 == nground [i] || x.type2 == nground [i]))
      checknot *= 0.5;
    else if (a.type == 12 && (x.type1 == nrock [i] || x.type2 == nrock [i]))
      checknot *= 0.5;
    else if (a.type == 13 && (x.type1 == nbug [i] || x.type2 == nbug [i]))
      checknot *= 0.5;
    else if (a.type == 14 && (x.type1 == nsteel [i] || x.type2 == nsteel [i]))
      checknot *= 0.5;
    else if (a.type == 15 && (x.type1 == nfight [i] || x.type2 == nfight [i]))
      checknot *= 0.5;
    else if (a.type == 16 && (x.type1 == nice [i] || x.type2 == nice [i]))
      checknot *= 0.5;
    else if (a.type == 17 && (x.type1 == ndragon [i] || x.type2 == ndragon [i]))
      checknot *= 0.5;
    else
      checknot *= 1;
  }
  return checknot;
}

float checknull (pokemon x, move a)
{
  int xelectr [1] = {11};
  int xnormal [1] = {9};
  int xghost [1] = {1};
  int xground [1] = {6};
  int xfight [1] = {9};
  int xpoison [1] = {14};
  int xpsychc [1] = {7};
  float checknull = 1;

  for (int i = 0; i < 1; i++)
  {
    if(a.type == 5 && (x.type1 == xelectr [i] || x.type2 == xelectr [i]))
      checknull = 0;
    else if (a.type == 1 && (x.type1 == xnormal [i] || x.type2 == xnormal [i]))
      checknull = 0;
    else if (a.type == 9 && (x.type1 == xghost [i] || x.type2 == xghost [i]))
      checknull = 0;
    else if (a.type == 11 && (x.type1 == xground [i] || x.type2 == xground [i]))
      checknull = 0;
    else if (a.type == 15 && (x.type1 == xfight [i] || x.type2 == xfight [i]))
      checknull = 0;
    else if (a.type == 10 && (x.type1 == xpoison [i] || x.type2 == xpoison [i]))
      checknull = 0;
    else if (a.type == 8 && (x.type1 == xpsychc [i] || x.type2 == xpsychc [i]))
      checknull = 0;
    else
      checknull = 1;
  }
  return checknull;
}

int accuracy (move &a)
{
  int ac, rand;
  rand = random(100) + 1;
  if (rand <= a.acc)
    ac = 1;
  else
    ac = 0;
  return ac;
}

int usemove(move &a, pokemon &atk, pokemon &def)
{
  int damage, x;
  damage = floor(((32 * a.power * (atk.atk * 1.0/def.def)/50) + 2) * checksuper(def, a) * checknot(def, a) * checknull(def, a));
  if(accuracy(a) == 0)
  {
    damage = 0;
    x = 0;
  }
  else
    x = 1;
  def.hp -= damage;
  if (def.hp < 0)
    def.hp = 0;
  a.pp--;
  return x;
}

void turn (pokemon &b, pokemon &r)
{
  playblue(b);
  int rm, bm;
  setviewport (1, 1, 639, 101, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  rectangle (1, 1, 639, 101);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (100, 51, "What will Red do?");

  setcolor (15);
  rectangle (1, 379, 639, 479);
  setcolor (15);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  playchoice();

  int u = getmaxx(), v = midy;
  setposi (u, v);
  callmouse();
  int constant = 0;
  int xposi, yposi, cl;

  do
  {
    mouseposi (xposi, yposi, cl);
    if ((out.x.bx == 1) && (((xposi > xmc - 250) && (xposi < xmc - 150)) || ((xposi > xmc - 100) && (xposi < xmc + 100)) || ((xposi > xmc + 150) && (xposi < xmc + 250))) && ((yposi > ymc - 40) && (yposi < ymc + 40)))
    {
      clicksound();
      break;
    }
  } while (constant == 0);

  int flag = 0;

  if ((xposi > xmc - 100) && (xposi < xmc + 100))
  {
    flag = 1;
    move movearr[4];
    movearr[0] = b.move1;
    movearr[1] = b.move2;
    movearr[2] = b.move3;
    movearr[3] = b.move4;
    move bluemove = movearr[random(4)];
    setposi (u, v);
    callmouse();
    playmove (r);

    do
    {
      mouseposi (xposi, yposi, cl);
      if (out.x.bx == 1)
      {
	if (((xposi > xmc - 180) && (xposi < xmc - 20)) && ((yposi > ymc - 40) && (yposi < ymc - 10)))
	{
	  redmove = r.move1;
	  if (b.speed >= r.speed)
	  {
	    do
	    {
	      if (r.move1.pp > 0)
	      {
		bm = usemove (bluemove, b, r);
		if(r.hp > 0)
		  rm = usemove (r.move1, r, b);
		break;
	      }
	      else if (r.move1.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	  }

	  else if (r.speed > b.speed)
	  {
	    do
	    {
	      if (r.move1.pp > 0)
	      {
		rm = usemove (r.move1, r, b);
		break;
	      }
	      else if (r.move1.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	    if (b.hp > 0)
	      bm = usemove(bluemove, b, r);
	  }
	  break;
	}

	else if (((xposi > xmc + 20) && (xposi < xmc + 180)) && ((yposi > ymc - 40) && (yposi < ymc - 10)))
	{
	  redmove = r.move2;
	  if (b.speed >= r.speed)
	  {
	    do
	    {
	      if (r.move2.pp > 0)
	      {
		bm = usemove(bluemove, b, r);
		if(r.hp > 0)
		  rm = usemove (r.move2, r, b);
		break;
	      }
	      else if (r.move2.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	  }

	  else if (r.speed > b.speed)
	  {
	    do
	    {
	      if (r.move2.pp > 0)
	      {
		rm = usemove (r.move2, r, b);
		break;
	      }
	      else if (r.move2.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	    if (b.hp > 0)
	      bm = usemove(bluemove, b, r);
	  }
	  break;
	}

	else if (((xposi > xmc - 180) && (xposi < xmc - 20)) && ((yposi > ymc + 10) && (yposi < ymc + 40)))
	{
	  redmove = r.move3;
	  if (b.speed >= r.speed)
	  {
	    do
	    {
	      if (r.move3.pp > 0)
	      {
		bm = usemove(bluemove, b, r);
		if(r.hp > 0)
		  rm = usemove (r.move3, r, b);
		break;
	      }
	      else if (r.move3.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	  }

	  else if (r.speed > b.speed)
	  {
	    do
	    {
	      if (r.move3.pp > 0)
	      {
		rm = usemove (r.move3, r, b);
		break;
	      }
	      else if (r.move3.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	    if (b.hp > 0)
	      bm = usemove(bluemove, b, r);
	  }
	  break;
	}

	else if (((xposi > xmc + 20) && (xposi < xmc + 180)) && ((yposi > ymc + 10) && (yposi < ymc + 40)))
	{
	  redmove = r.move4;
	  if (b.speed >= r.speed)
	  {
	    do
	    {
	      if ((r.hp > 0) && (r.move4.pp > 0))
	      {
		bm = usemove(bluemove, b, r);
		if(r.hp > 0)
		  rm = usemove (r.move4, r, b);
		break;
	      }
	      else if (r.move4.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	  }

	  else if (r.speed > b.speed)
	  {
	    do
	    {
	      if (r.move4.pp > 0)
	      {
		rm = usemove (r.move4, r, b);
		break;
	      }
	      else if (r.move4.pp == 0);
	      {
		setviewport(2, 2, 638, 100, 1);
		clearviewport ();
		outtextxy (100, 51, "Not enough PP!");
		setviewport(2, 380, 638, 478, 1);
		clearviewport();
		getch();
		clicksound();
		break;
	      }
	    } while (constant == 0);
	    if (b.hp > 0)
	      bm = usemove(bluemove, b, r);
	  }
	  break;
	}
      }
    } while (constant == 0);

    delay (500);
    float effect = checknull(b, redmove) * checksuper(b, redmove) * checknot(b, redmove);
    if (r.speed > b.speed)
    {
      setviewport (2, 380, 638, 478, 1);
      clearviewport();
      setviewport (1, 1, 639, 101, 1);
      clearviewport();
      setviewport (0, 0, 639, 479, 1);
      setcolor (15);
      rectangle (1, 1, 639, 101);
      settextjustify (LEFT_TEXT, LEFT_TEXT);

      if (redmove.pp > 0)
      {
	outtextxy (100, 51, "Your Pokemon used");
	outtextxy (250, 51, redmove.name);
	getch();
	clicksound();
	setviewport (1, 1, 639, 101, 1);
	clearviewport();
	setviewport (0, 0, 639, 479, 1);
	setcolor (15);
	rectangle (1, 1, 639, 101);
	setcolor (15);
	settextjustify (LEFT_TEXT, LEFT_TEXT);

	if (rm == 0)
	{
	  outtextxy (100, 51, "But it missed...");
	  getch();
	  clicksound();
	}
	else if (effect == 0)
	{
	  outtextxy (100, 51, "But it had no effect...");
	  getch();
	  clicksound();
	}
	else if (effect > 1.0)
	{
	  outtextxy (100, 51, "It's super effective!");
	  getch();
	  clicksound();
	}
	else if (effect < 1.0)
	{
	  outtextxy (100, 51, "It's not very effective...");
	  getch();
	  clicksound();
	}
	settextjustify (CENTER_TEXT, CENTER_TEXT);
	playblue (b);
	delay (500);
      }

      if (b.hp > 0)
      {
	setviewport (1, 1, 639, 101, 1);
	clearviewport();
	setviewport (0, 0, 639, 479, 1);
	setcolor (15);
	rectangle (1, 1, 639, 101);
	setcolor (15);
	settextjustify (LEFT_TEXT, LEFT_TEXT);
	outtextxy (100, 51, "Opponent used");
	outtextxy (225, 51, bluemove.name);
	getch();
	clicksound();
	setviewport (1, 1, 639, 101, 1);
	clearviewport();
	setviewport (0, 0, 639, 479, 1);
	setcolor (15);
	rectangle (1, 1, 639, 101);
	setcolor (15);
	settextjustify (LEFT_TEXT, LEFT_TEXT);
	effect = checknull(r, bluemove) * checksuper(r, bluemove) * checknot(r, bluemove);

	if (bm == 0)
	{
	  outtextxy (100, 51, "But it missed...");
	  getch();
	  clicksound();
	}
	else if (effect == 0)
	{
	  outtextxy (100, 51, "But it had no effect...");
	  getch();
	  clicksound();
	}
	else if (effect > 1.0)
	{
	  outtextxy (100, 51, "It's super effective!");
	  getch();
	  clicksound();
	}
	else if (effect < 1.0)
	{
	  outtextxy (100, 51, "It's not very effective...");
	  getch();
	  clicksound();
	}
	playred (r);
      }

      setcolor (15);
      setviewport (0, 0, 639, 479, 1);
      setcolor (15);
      settextjustify (CENTER_TEXT, CENTER_TEXT);
      setfillstyle (1, 0);
      playred (r);
      setfillstyle (1, 0);
      getch();
      clicksound();
      setposi (u, v);
      callmouse();
    }

    if (b.speed >= r.speed)
    {
      setviewport (2, 380, 638, 478, 1);
      clearviewport();
      setviewport (1, 1, 639, 101, 1);
      clearviewport();
      setviewport (0, 0, 639, 479, 1);
      setcolor (15);
      rectangle (1, 1, 639, 101);
      settextjustify (LEFT_TEXT, LEFT_TEXT);
      outtextxy (100, 51, "Opponent used");
      outtextxy (225, 51, bluemove.name);
      getch();
      clicksound();
      setviewport (1, 1, 639, 101, 1);
      clearviewport();
      setviewport (0, 0, 639, 479, 1);
      setcolor (15);
      rectangle (1, 1, 639, 101);
      setcolor (15);
      settextjustify (LEFT_TEXT, LEFT_TEXT);

      float effect = checknull(r, bluemove) * checksuper(r, bluemove) * checknot(r, bluemove);
      if (bm == 0)
      {
	outtextxy (100, 51, "But it missed...");
	getch();
	clicksound();
      }
      else if (effect == 0)
      {
	outtextxy (100, 51, "But it had no effect...");
	getch();
	clicksound();
      }
      else if (effect > 1.0)
      {
	outtextxy (100, 51, "It's super effective!");
	getch();
	clicksound();
      }
      else if (effect < 1.0)
      {
	outtextxy (100, 51, "It's not very effective...");
	getch();
	clicksound();
      }

      settextjustify (CENTER_TEXT, CENTER_TEXT);
      playred (r);

      delay (500);
      setcolor (15);
      setviewport (0, 0, 639, 479, 1);
      setcolor (15);
      settextjustify (CENTER_TEXT, CENTER_TEXT);
      setfillstyle (1, 0);
      playred (r);
      setfillstyle (1, 0);
      setposi (u, v);
      callmouse();

      if (r.hp > 0)
      {
	setviewport (2, 380, 638, 478, 1);
	clearviewport();
	setviewport (1, 1, 639, 101, 1);
	clearviewport();
	setviewport (0, 0, 639, 479, 1);
	setcolor (15);
	rectangle (1, 1, 639, 101);
	settextjustify (LEFT_TEXT, LEFT_TEXT);

	if (redmove.pp > 0)
	{
	  outtextxy (100, 51, "Your Pokemon used");
	  outtextxy (250, 51, redmove.name);
	  getch();
	  clicksound();
	  setviewport (1, 1, 639, 101, 1);
	  clearviewport();
	  setviewport (0, 0, 639, 479, 1);
	  setcolor (15);
	  rectangle (1, 1, 639, 101);
	  setcolor (15);
	  settextjustify (LEFT_TEXT, LEFT_TEXT);

	  float effect = checknull(b, redmove) * checksuper(b, redmove) * checknot(b, redmove);
	  if (rm == 0)
	  {
	    outtextxy (100, 51, "But it missed...");
	    getch();
	    clicksound();
	  }
	  else if (effect == 0)
	  {
	    outtextxy (100, 51, "But it had no effect...");
	    getch();
	    clicksound();
	  }
	  else if (effect > 1.0)
	  {
	    outtextxy (100, 51, "It's super effective!");
	    getch();
	    clicksound();
	  }
	  else if (effect < 1.0)
	  {
	    outtextxy (100, 51, "It's not very effective...");
	    getch();
	    clicksound();
	  }
	  settextjustify (CENTER_TEXT, CENTER_TEXT);
	  playblue (b);
	  delay (500);
	}
      }
    }
  }

  else if ((xposi > xmc + 150) && (xposi < xmc + 250) && (flag == 0))
  {
    move movearr[4];
    movearr[0] = b.move1;
    movearr[1] = b.move2;
    movearr[2] = b.move3;
    movearr[3] = b.move4;
    move bluemove = movearr[random(4)];
    pokemon z = r;
    for (int i = 0; i < 6; i++)
    {
      if (store[i].dex == r.dex)
	store[i] = r;
    }
    decideswitch (store[0], store[1], store[2], store[3], store[4], store[5]);
    clrscr();
    closegraph();
    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);

    setfillstyle (1, 0);
    setcolor (15);
    setviewport (0, 0, 639, 479, 1);
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    playblue (b);
    setfillstyle (1, 0);

    setcolor (15);
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    playred (z);
    setfillstyle (1, 0);

    setviewport (0, 0, 639, 479, 1);
    setcolor (15);
    rectangle (1, 1, 639, 101);
    floodfill (2, 2, 15);
    setcolor (15);
    outtextxy (100, 51, "Come back!");
    outtextxy (180, 51, z.name);
    getch();
    clicksound();
    setviewport (2, 2, 638, 100, 1);
    clearviewport ();
    setviewport (0, 0, 639, 479, 1);
    floodfill (2, 2, 15);
    outtextxy (100, 51, "Go!");
    outtextxy (150, 51, r.name);
    getch();
    clicksound();

    setviewport (2, 380, 629, 478, 1);
    clearviewport();
    setviewport (0, 0, 639, 479, 1);
    setcolor (15);
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    playred (r);
    setfillstyle (1, 0);
    setviewport (1, 1, 639, 101, 1);
    clearviewport();
    setviewport (0, 0, 639, 479, 1);
    setcolor (15);
    rectangle (1, 1, 639, 101);
    setcolor (15);
    settextjustify (LEFT_TEXT, LEFT_TEXT);
    bm = usemove (bluemove, b, r);
    outtextxy (100, 51, "Opponent used");
    outtextxy (220, 51, bluemove.name);
    getch();
    clicksound();
    setviewport (1, 1, 639, 101, 1);
    clearviewport();
    setviewport (0, 0, 639, 479, 1);
    setcolor (15);
    rectangle (1, 1, 639, 101);
    setcolor (15);
    settextjustify (LEFT_TEXT, LEFT_TEXT);
    if (checksuper (r, bluemove) != 1.0)
    {
      outtextxy (100, 51, "It's super effective!");
      getch();
      clicksound();
    }
    else if (checknot (r, bluemove) != 1.0)
    {
      outtextxy (100, 51, "It's not very effective...");
      getch();
      clicksound();
    }
    else if (checknull (r, bluemove) == 0)
    {
      outtextxy (100, 51, "But it had no effect...");
      getch();
      clicksound();
    }
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    playred (r);
  }

  else if((xposi > xmc - 250) && (xposi < xmc - 150))
  {
    clrscr();
    closegraph();
    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    outtextxy (midx, midy, "You forfeited the battle.");
    losesound();
    getch();
    closegraph();
    exit(0);
  }

  setviewport (2, 2, 638, 100, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);

  getch();
  settextjustify (CENTER_TEXT, CENTER_TEXT);

  setviewport (2, 380, 638, 478, 1);
  clearviewport ();
  setviewport (0, 0, 639, 479, 1);
}

void bluenext (pokemon &b, pokemon &r)
{
  bluebattle = b;
  setviewport (1, 1, 639, 101, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);                                            \
  setcolor (15);
  rectangle (1, 1, 639, 101);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (100, 51, "Opponent's Pokemon fainted");
  getch();
  clicksound();
  setviewport (382, 151, 639, 251, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  getch();
  clicksound();
  setviewport (1, 1, 638, 100, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  rectangle (1, 1, 639, 101);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (100, 41, "Champion Blue is about to send out");
  outtextxy (100, 61, b.name);
  getch();
  clicksound();
  setviewport (1, 1, 639, 101, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  rectangle (1, 1, 639, 101);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (100, 51, "Would you like to switch your Pokemon?");
  setviewport (2, 380, 638, 478, 1);
  clearviewport ();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  rectangle (1, 379, 639, 479);
  setcolor (15);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  setfillstyle (1, 4);
  rectangle (xmc - 150, ymc - 40, xmc - 50, ymc + 40);
  floodfill (xmc - 149, ymc - 39, 15);
  outtextxy (xmc - 100, ymc, "YES");
  rectangle (xmc + 50, ymc - 40, xmc + 150, ymc + 40);
  floodfill (xmc + 51, ymc - 39, 15);
  outtextxy (xmc + 100, ymc, "NO");
  setfillstyle (1, 0);

  int u = getmaxx(), v = midy;
  setposi (u, v);
  callmouse();
  int constant = 0;
  int xposi, yposi, cl;

  do
  {
    mouseposi (xposi, yposi, cl);
    if ((out.x.bx == 1) && (((xposi > xmc - 150) && (xposi < xmc - 50)) || ((xposi > xmc + 50) && (xposi < xmc + 150))) && ((yposi > ymc - 40) && (yposi < ymc + 40)))
    {
      clicksound();
      break;
    }
  } while (constant == 0);

  if ((xposi > xmc - 150) && (xposi < xmc - 50))
  {
    pokemon z = r;
    for (int i = 0; i < 6; i++)
    {
      if (store[i].dex == r.dex)
	store[i] = r;
    }
    decideswitch (store[0], store[1], store[2], store[3], store[4], store[5]);
    clrscr();
    closegraph();
    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);

    setfillstyle (1, 0);
    setcolor (15);
    setviewport (0, 0, 639, 479, 1);
    setfillstyle (1, 0);

    setcolor (15);
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    playred (z);
    setfillstyle (1, 0);
    setviewport (2, 2, 638, 100, 1);

    clearviewport();
    setviewport (0, 0, 639, 479, 1);
    setcolor (15);
    floodfill (2, 2, 15);
    rectangle (1, 1, 639, 101);
    setcolor (15);
    outtextxy (100, 51, "Come back!");
    outtextxy (180, 51, z.name);
    getch();
    clicksound();
    setviewport (2, 2, 638, 100, 1);
    clearviewport ();
    setviewport (0, 0, 639, 479, 1);
    outtextxy (100, 51, "Go!");
    outtextxy (150, 51, r.name);
    getch();
    clicksound();

    setcolor (15);
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    playred (r);
    setfillstyle (1, 0);
    getch();
  }

  else
  {
    setviewport (2, 380, 638, 478, 1);
    clearviewport ();
    setviewport (0, 0, 639, 479, 1);
    setfillstyle (1, 0);
    setcolor (15);
    setviewport (0, 0, 639, 479, 1);
  }

  settextjustify (CENTER_TEXT, CENTER_TEXT);
  setfillstyle (1, 0);
  setviewport (2, 2, 638, 100, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  setcolor (15);
  outtextxy (100, 51, "Champion Blue sent out");
  outtextxy (280, 51, b.name);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  getch();
  clicksound();
  playblue(b);
}

void rednext (pokemon &r)
{
  setviewport (1, 1, 639, 101, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  setcolor (15);
  rectangle (1, 1, 639, 101);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (100, 51, "Your Pokemon fainted!");
  getch();
  clicksound();

  for (int i = 0; i < 6; i++)
    if (store[i].dex == r.dex)
      store[i] = r;

  decideswitch (store[0], store[1], store[2], store[3], store[4], store[5]);  clrscr();
  closegraph();
  initgraph(&gd, &gm, "c:\\turboc3\\bgi");
  playblue (bluebattle);
  rectangle (1, 1, 639, 101);
  outtextxy (100, 51, "Go!");
  outtextxy (150, 51, r.name);
  playred(r);
  getch();
  clicksound();
}

void instruct()
{
  rectangle(1, 1, 638, 478);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  outtextxy (midx, 50, "Welcome to the Pokemon League!");
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  outtextxy (40, 100, "Prepare to face the world's most powerful trainer, and your rival since");
  outtextxy (40, 115, "childhood, Blue.");
  outtextxy (40, 155, "You must select a team of 6 Pokemon and battle the opponent.");
  outtextxy (40, 195, "Different typed moves have varying effect on different typed Pokemon.");
  outtextxy (40, 235, "During the battle, HP indicates the number of Health Points your Pokemon");
  outtextxy (40, 250, "has left. If the HP becomes zero, the Pokemon faints and can no longer");
  outtextxy (40, 265, "battle.");
  outtextxy (40, 305, "The number next to each move indicates the move's remaining PP or Power");
  outtextxy (40, 320, "Points. If the move has no PP remaining, the move cannot be used. Be");
  outtextxy (40, 335, "careful not to use a move with no PP remaining, as if you do, you cannot");
  outtextxy (40, 350, "use a move in that turn.");
}

class lb
{
  int rank;
  char name[30];
  float score;

  public:
  void input(int remhp, int tothp);
  friend void write();
  friend void sort();
  friend void display();
}trainer;

void lb::input(int remhp, int tothp)
{
  cout<<"ENTER YOUR NAME : ";
  gets(name);
  score = (remhp * 100.0) / (tothp * 1.0);
  rank = 1;
}

void write(lb user)
{
  ofstream out;
  out.open("PBSLB.DAT", ios::app|ios::binary);
  out.write((char*)&user, sizeof(user));
  out.close();
}

void sort()
{
  lb user[20];
  int i, j, n = 0;
  ifstream in;
  in.open("PBSLB.DAT", ios::in|ios::binary);

  while(!in.eof())
  {
    in.read((char*)&user[n], sizeof(user[n]));
    n++;
  }
  n--;
  in.close();
  lb temp;

  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n - i - 1; j++)
    {
      if (user[j].score < user[j+1].score)
      {
	temp = user[j];
	user[j] = user[j+1];
	user[j+1] = temp;
      }
    }
  }

  for(i = 0; i < n; i++)
    user[i].rank = i + 1;

  ofstream out;
  out.open("PBSLB.DAT", ios::out|ios::binary);
  for(i = 0; i < n; i++)
    out.write((char*)&user[i], sizeof(user[i]));
  out.close();
}

void display()
{
  lb user[20];
  int i, n = 0;
  ifstream in;
  in.open("PBSLB.DAT", ios::in|ios::binary);
  lb temp;
  while(!in.eof())
  {
    in.read((char*)&user[n], sizeof(user[n]));
    n++;
  }
  n--;
  in.close();

  for(i = 0; i < n; i++)
    cout<<"\nNAME : "<<user[i].name<<"\tRANK : "<<user[i].rank<<"\tSCORE : "<<int(user[i].score);
}

//MAIN
void main()
{
  randomize();
  pokemon team[6];

  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  outtextxy (midx, midy - 20, "POKEMON BATTLE SIMULATOR");
  outtextxy (midx, midy + 20, "Press any key to begin");
  startsound();
  getch();
  clicksound();
  clearviewport();

  setbkcolor(0);
  instruct();
  getch();
  clicksound();
  clearviewport();

  setfillstyle (1, 9);
  setcolor (15);
  settextjustify (LEFT_TEXT, LEFT_TEXT);
  rectangle (100, 400, 539, 450);
  setcolor (15);
  outtextxy (120, 420, "PROFESSOR OAK: Welcome to the Pokemon League!");
  getch();
  clicksound();

  setviewport (126, 401, 513, 449, 1);
  clearviewport();
  setviewport (0, 0, 639, 479, 1);
  outtextxy (120, 420, "PROFESSOR OAK: It's time to choose your Pokemon!");
  getch();
  clicksound();
  clearviewport();

  int back = 1;
  setcolor (15);
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  int constant = 0;
  int xposi, yposi, cl, a, b;
  a = getmaxx();
  b = midy;
  setposi (a, b);
  callmouse();
  outtextxy (midx, 50, "POKEMON MENU");

  pokemon group1[8];
  pokemon group2[8];
  pokemon group3[8];
  pokemon group4[8];
  pokemon group5[8];
  pokemon group6[8];

  pokemon p1;
  pokemon p2;
  pokemon p3;
  pokemon p4;
  pokemon p5;
  pokemon p6;
  pokemon p7;
  pokemon p8;
  pokemon p9;
  ifstream f;
  f.open ("POKEMON.DAT", ios::in|ios::binary);

  do
  {
    cleardevice();
    f.seekg(0, ios::beg);
    //GROUP 1
    f.read ((char*)&p1, sizeof(p1));
    f.read ((char*)&p2, sizeof(p2));
    f.read ((char*)&p3, sizeof(p3));
    f.read ((char*)&p4, sizeof(p4));
    f.read ((char*)&p5, sizeof(p5));
    f.read ((char*)&p6, sizeof(p6));
    f.read ((char*)&p7, sizeof(p7));
    f.read ((char*)&p8, sizeof(p8));
    f.read ((char*)&p9, sizeof(p9));
    outtextxy (midx, 80, "Choose a starter Pokemon");
    printpokemon(p1, p2, p3, p4, p5, p6, p7, p8, p9);

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);

    if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
    {
      team [0] = p1;
      group1[0] = p2;
      group1[1] = p3;
      group1[2] = p4;
      group1[3] = p5;
      group1[4] = p6;
      group1[5] = p7;
      group1[6] = p8;
      group1[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
    {
      team [0] = p2;
      group1[0] = p1;
      group1[1] = p3;
      group1[2] = p4;
      group1[3] = p5;
      group1[4] = p6;
      group1[5] = p7;
      group1[6] = p8;
      group1[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
    {
      team [0] = p3;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p4;
      group1[3] = p5;
      group1[4] = p6;
      group1[5] = p7;
      group1[6] = p8;
      group1[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
    {
      team [0] = p4;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p3;
      group1[3] = p5;
      group1[4] = p6;
      group1[5] = p7;
      group1[6] = p8;
      group1[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
    {
      team [0] = p5;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p3;
      group1[3] = p4;
      group1[4] = p6;
      group1[5] = p7;
      group1[6] = p8;
      group1[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
    {
      team [0] = p6;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p3;
      group1[3] = p4;
      group1[4] = p5;
      group1[5] = p7;
      group1[6] = p8;
      group1[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
    {
      team [0] = p7;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p3;
      group1[3] = p4;
      group1[4] = p5;
      group1[5] = p6;
      group1[6] = p8;
      group1[7] = p9;
    }
    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
    {
      team [0] = p8;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p3;
      group1[3] = p4;
      group1[4] = p5;
      group1[5] = p6;
      group1[6] = p7;
      group1[7] = p9;
    }
    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
    {
      team [0] = p9;
      group1[0] = p1;
      group1[1] = p2;
      group1[2] = p3;
      group1[3] = p4;
      group1[4] = p5;
      group1[5] = p6;
      group1[6] = p7;
      group1[7] = p8;
    }

    clrscr();
    closegraph();

    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();

    //GROUP 2
    f.read ((char*)&p1, sizeof(p1));
    f.read ((char*)&p2, sizeof(p2));
    f.read ((char*)&p3, sizeof(p3));
    f.read ((char*)&p4, sizeof(p4));
    f.read ((char*)&p5, sizeof(p5));
    f.read ((char*)&p6, sizeof(p6));
    f.read ((char*)&p7, sizeof(p7));
    f.read ((char*)&p8, sizeof(p8));
    f.read ((char*)&p9, sizeof(p9));
    outtextxy (midx, 80, "Choose one Pokemon out of the following");
    printpokemon(p1, p2, p3, p4, p5, p6, p7, p8, p9);

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);

    if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
    {
      team [1] = p1;
      group2[0] = p2;
      group2[1] = p3;
      group2[2] = p4;
      group2[3] = p5;
      group2[4] = p6;
      group2[5] = p7;
      group2[6] = p8;
      group2[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
    {
      team [1] = p2;
      group2[0] = p1;
      group2[1] = p3;
      group2[2] = p4;
      group2[3] = p5;
      group2[4] = p6;
      group2[5] = p7;
      group2[6] = p8;
      group2[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
    {
      team [1] = p3;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p4;
      group2[3] = p5;
      group2[4] = p6;
      group2[5] = p7;
      group2[6] = p8;
      group2[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
    {
      team [1] = p4;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p3;
      group2[3] = p5;
      group2[4] = p6;
      group2[5] = p7;
      group2[6] = p8;
      group2[7] = p9;
    }
    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
    {
      team [1] = p5;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p3;
      group2[3] = p4;
      group2[4] = p6;
      group2[5] = p7;
      group2[6] = p8;
      group2[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
    {
      team [1] = p6;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p3;
      group2[3] = p4;
      group2[4] = p5;
      group2[5] = p7;
      group2[6] = p8;
      group2[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
    {
      team [1] = p7;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p3;
      group2[3] = p4;
      group2[4] = p5;
      group2[5] = p6;
      group2[6] = p8;
      group2[7] = p9;
    }
    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
    {
      team [1] = p8;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p3;
      group2[3] = p4;
      group2[4] = p5;
      group2[5] = p6;
      group2[6] = p7;
      group2[7] = p9;
    }
    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
    {
      team [1] = p9;
      group2[0] = p1;
      group2[1] = p2;
      group2[2] = p3;
      group2[3] = p4;
      group2[4] = p5;
      group2[5] = p6;
      group2[6] = p7;
      group2[7] = p8;
    }

    clrscr();
    closegraph();

    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();

    //GROUP 3
    f.read ((char*)&p1, sizeof(p1));
    f.read ((char*)&p2, sizeof(p2));
    f.read ((char*)&p3, sizeof(p3));
    f.read ((char*)&p4, sizeof(p4));
    f.read ((char*)&p5, sizeof(p5));
    f.read ((char*)&p6, sizeof(p6));
    f.read ((char*)&p7, sizeof(p7));
    f.read ((char*)&p8, sizeof(p8));
    f.read ((char*)&p9, sizeof(p9));
    outtextxy (midx, 80, "Choose one Pokemon out of the following");
    printpokemon(p1, p2, p3, p4, p5, p6, p7, p8, p9);

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);

    if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
    {
      team [2] = p1;
      group3[0] = p2;
      group3[1] = p3;
      group3[2] = p4;
      group3[3] = p5;
      group3[4] = p6;
      group3[5] = p7;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
    {
      team [2] = p2;
      group3[0] = p1;
      group3[1] = p3;
      group3[2] = p4;
      group3[3] = p5;
      group3[4] = p6;
      group3[5] = p7;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
    {
      team [2] = p3;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p4;
      group3[3] = p5;
      group3[4] = p6;
      group3[5] = p7;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
    {
      team [2] = p4;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p3;
      group3[3] = p5;
      group3[4] = p6;
      group3[5] = p7;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
    {
      team [2] = p5;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p3;
      group3[3] = p4;
      group3[4] = p6;
      group3[5] = p7;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
    {
      team [2] = p6;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p3;
      group3[3] = p4;
      group3[4] = p5;
      group3[5] = p7;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
    {
      team [2] = p7;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p3;
      group3[3] = p4;
      group3[4] = p5;
      group3[5] = p6;
      group3[6] = p8;
      group3[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
    {
      team [2] = p8;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p3;
      group3[3] = p4;
      group3[4] = p5;
      group3[5] = p6;
      group3[6] = p7;
      group3[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
    {
      team [2] = p9;
      group3[0] = p1;
      group3[1] = p2;
      group3[2] = p3;
      group3[3] = p4;
      group3[4] = p5;
      group3[5] = p6;
      group3[6] = p7;
      group3[7] = p8;
    }

    clrscr();
    closegraph();

    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();

    //GROUP 4
    f.read ((char*)&p1, sizeof(p1));
    f.read ((char*)&p2, sizeof(p2));
    f.read ((char*)&p3, sizeof(p3));
    f.read ((char*)&p4, sizeof(p4));
    f.read ((char*)&p5, sizeof(p5));
    f.read ((char*)&p6, sizeof(p6));
    f.read ((char*)&p7, sizeof(p7));
    f.read ((char*)&p8, sizeof(p8));
    f.read ((char*)&p9, sizeof(p9));
    outtextxy (midx, 80, "Choose one Pokemon out of the following");
    printpokemon(p1, p2, p3, p4, p5, p6, p7, p8, p9);

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);

    if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
    {
      team [3] = p1;
      group4[0] = p2;
      group4[1] = p3;
      group4[2] = p4;
      group4[3] = p5;
      group4[4] = p6;
      group4[5] = p7;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
    {
      team [3] = p2;
      group4[0] = p1;
      group4[1] = p3;
      group4[2] = p4;
      group4[3] = p5;
      group4[4] = p6;
      group4[5] = p7;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
    {
      team [3] = p3;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p4;
      group4[3] = p5;
      group4[4] = p6;
      group4[5] = p7;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
    {
      team [3] = p4;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p3;
      group4[3] = p5;
      group4[4] = p6;
      group4[5] = p7;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if (xposi > (midx - 75) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
    {
      team [3] = p5;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p3;
      group4[3] = p4;
      group4[4] = p6;
      group4[5] = p7;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
    {
      team [3] = p6;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p3;
      group4[3] = p4;
      group4[4] = p5;
      group4[5] = p7;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
    {
      team [3] = p7;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p3;
      group4[3] = p4;
      group4[4] = p5;
      group4[5] = p6;
      group4[6] = p8;
      group4[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
    {
      team [3] = p8;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p3;
      group4[3] = p4;
      group4[4] = p5;
      group4[5] = p6;
      group4[6] = p7;
      group4[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
    {
      team [3] = p9;
      group4[0] = p1;
      group4[1] = p2;
      group4[2] = p3;
      group4[3] = p4;
      group4[4] = p5;
      group4[5] = p6;
      group4[6] = p7;
      group4[7] = p8;
    }

    clrscr();
    closegraph();

    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();

    //GROUP 5
    f.read ((char*)&p1, sizeof(p1));
    f.read ((char*)&p2, sizeof(p2));
    f.read ((char*)&p3, sizeof(p3));
    f.read ((char*)&p4, sizeof(p4));
    f.read ((char*)&p5, sizeof(p5));
    f.read ((char*)&p6, sizeof(p6));
    f.read ((char*)&p7, sizeof(p7));
    f.read ((char*)&p8, sizeof(p8));
    f.read ((char*)&p9, sizeof(p9));
    outtextxy (midx, 80, "Choose one Pokemon out of the following");
    printpokemon(p1, p2, p3, p4, p5, p6, p7, p8, p9);

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);

    if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
    {
      team [4] = p1;
      group5[0] = p2;
      group5[1] = p3;
      group5[2] = p4;
      group5[3] = p5;
      group5[4] = p6;
      group5[5] = p7;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
    {
      team [4] = p2;
      group5[0] = p1;
      group5[1] = p3;
      group5[2] = p4;
      group5[3] = p5;
      group5[4] = p6;
      group5[5] = p7;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
    {
      team [4] = p3;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p4;
      group5[3] = p5;
      group5[4] = p6;
      group5[5] = p7;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
    {
      team [4] = p4;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p3;
      group5[3] = p5;
      group5[4] = p6;
      group5[5] = p7;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
    {
      team [4] = p5;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p3;
      group5[3] = p4;
      group5[4] = p6;
      group5[5] = p7;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
    {
      team [4] = p6;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p3;
      group5[3] = p4;
      group5[4] = p5;
      group5[5] = p7;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
    {
      team [4] = p7;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p3;
      group5[3] = p4;
      group5[4] = p5;
      group5[5] = p6;
      group5[6] = p8;
      group5[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
    {
      team [4] = p8;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p3;
      group5[3] = p4;
      group5[4] = p5;
      group5[5] = p6;
      group5[6] = p7;
      group5[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
    {
      team [4] = p9;
      group5[0] = p1;
      group5[1] = p2;
      group5[2] = p3;
      group5[3] = p4;
      group5[4] = p5;
      group5[5] = p6;
      group5[6] = p7;
      group5[7] = p8;
    }

    clrscr();
    closegraph();

    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();

    //GROUP 6
    f.read ((char*)&p1, sizeof(p1));
    f.read ((char*)&p2, sizeof(p2));
    f.read ((char*)&p3, sizeof(p3));
    f.read ((char*)&p4, sizeof(p4));
    f.read ((char*)&p5, sizeof(p5));
    f.read ((char*)&p6, sizeof(p6));
    f.read ((char*)&p7, sizeof(p7));
    f.read ((char*)&p8, sizeof(p8));
    f.read ((char*)&p9, sizeof(p9));
    outtextxy (midx, 80, "Choose one Pokemon out of the following");
    printpokemon(p1, p2, p3, p4, p5, p6, p7, p8, p9);

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && (((xposi > midx - 300) && (xposi < midx - 150)) || ((xposi > midx - 75) && (xposi < midx + 75)) || ((xposi > midx + 150) && (xposi < midx + 300))) && (((yposi > 120) && (yposi < 170)) || ((yposi > 220) && (yposi < 270)) || ((yposi > 320) && (yposi < 370))))
      {
	clicksound();
	break;
      }
    } while (constant == 0);

    clrscr();
    closegraph();
    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();

    if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 120) && (yposi < 170))
    {
      team[5] = p1;
      group6[0] = p2;
      group6[1] = p3;
      group6[2] = p4;
      group6[3] = p5;
      group6[4] = p6;
      group6[5] = p7;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 120) && (yposi < 170))
    {
      team[5] = p2;
      group6[0] = p1;
      group6[1] = p3;
      group6[2] = p4;
      group6[3] = p5;
      group6[4] = p6;
      group6[5] = p7;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 120) && (yposi < 170))
    {
      team [5] = p3;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p4;
      group6[3] = p5;
      group6[4] = p6;
      group6[5] = p7;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 220) && (yposi < 270))
    {
      team [5] = p4;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p3;
      group6[3] = p5;
      group6[4] = p6;
      group6[5] = p7;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 220) && (yposi < 270))
    {
      team [5] = p5;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p3;
      group6[3] = p4;
      group6[4] = p6;
      group6[5] = p7;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 220) && (yposi < 270))
    {
      team[5] = p6;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p3;
      group6[3] = p4;
      group6[4] = p5;
      group6[5] = p7;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx - 300)) && (xposi < (midx - 150)) && (yposi > 320) && (yposi < 370))
    {
      team[5] = p7;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p3;
      group6[3] = p4;
      group6[4] = p5;
      group6[5] = p6;
      group6[6] = p8;
      group6[7] = p9;
    }

    else if ((xposi > (midx - 75)) && (xposi < (midx + 75)) && (yposi > 320) && (yposi < 370))
    {
      team[5] = p8;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p3;
      group6[3] = p4;
      group6[4] = p5;
      group6[5] = p6;
      group6[6] = p7;
      group6[7] = p9;
    }

    else if ((xposi > (midx + 150)) && (xposi < (midx + 300)) && (yposi > 320) && (yposi < 370))
    {
      team [5] = p9;
      group6[0] = p1;
      group6[1] = p2;
      group6[2] = p3;
      group6[3] = p4;
      group6[4] = p5;
      group6[5] = p6;
      group6[6] = p7;
      group6[7] = p8;
    }

    clrscr();
    closegraph();

    initgraph (&gd, &gm, "c:\\turboc3\\bgi");
    settextjustify (CENTER_TEXT, CENTER_TEXT);
    setposi (a, b);
    callmouse();


    //DISPLAY TEAM
    outtextxy (midx, 50, "YOUR TEAM");
    displayteam(team[0], team[1], team[2], team[3], team[4], team[5]);


    //Back and Continue
    rectangle (midx - 310, 440, midx - 230, 460);
    outtextxy (midx - 270, 450, "BACK");
    rectangle (midx + 230, 440, midx + 310, 460);
    outtextxy (midx + 270, 450, "CONTINUE");

    do
    {
      mouseposi (xposi, yposi, cl);
      if ((out.x.bx == 1) && ((xposi > midx + 230) && (xposi < midx + 310)) && ((yposi > 440) && (yposi < 460)))
      {
	back = 2;
	clicksound();
	break;
      }

      else if ((out.x.bx == 1) && ((xposi > midx - 310) && (xposi < midx - 230)) && ((yposi > 440) && (yposi < 460)))
      {
	back = 0;
	clicksound();
	break;
      }
    } while (constant == 0);
  } while (back == 0);
  clrscr();
  closegraph();

  int tothp = 0;
  for (int h = 0; h < 6; h++)
    tothp += team[h].hp;

  pokemon opp [6];

  do
  {
    opp[0] = group1[random(8)];
  } while (opp[0].type2 == 0);

  opp[1] = group2[random(8)];
  do
  {
    opp[2] = group3[random(8)];
  } while (opp[2].type2 == 0);

  opp[3] = group4[random(8)];
  opp[4] = group5[random(8)];
  do
  {
	opp[5] = group6[random(8)];
  } while (opp[5].type2 == 0);

  int num [6] = {0, 1, 2, 3, 4, 5};
  int n = 6;
  pokemon blue [6];

  for (int l = 0; l <= 5; l++)
  {
    int rand = num[random(n)];
    blue [l] = opp[rand];
    for (int del = 0; del < n - 1; del++)
    {
      if (rand == num[del])
      {
	for (int remove = del; remove < n-1; remove++)
	  num [remove] = num [remove+1];
      }
    }
    n--;
  }

  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  outtextxy (midx, midy, "You will face Blue now!");
  getch();
  clicksound();
  clrscr();
  closegraph();

  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  outtextxy (midx, 50, "BLUE'S TEAM");
  displayteam(opp[0], opp[1], opp[2], opp[3], opp[4], opp[5]);
  getch();
  clicksound();
  clrscr();
  closegraph();

  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);
  displayteam(team[0], team[1], team[2], team[3], team[4], team[5]);
  outtextxy (midx, 50, "Which Pokemon will you send out first?");
  decidefirst(team[0], team[1], team[2], team[3], team[4], team[5]);
  clrscr();
  closegraph();
  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);

  redbattle = red[0];
  bluebattle = blue[0];
  clrscr();
  closegraph();
  int i = 0, j = 0;

  battleopen(bluebattle, redbattle);

  do
  {
    turn (bluebattle, redbattle);
    red[j] = redbattle;
    if ((bluebattle.hp == 0) || (redbattle.hp == 0))
      break;
  } while (constant == 0);

  do
  {
    if (bluebattle.hp == 0)
    {
      bluenext (blue[i + 1], redbattle);
      i++;
    }

    else if (redbattle.hp == 0)
    {
      rednext(redbattle);
      j++;
    }

    do
    {
      turn (bluebattle, redbattle);
      red[j] = redbattle;
      if ((bluebattle.hp == 0) || (redbattle.hp == 0))
	break;
    } while (constant == 0);

    if ((i >= 5) || (j >= 5))
      break;
  } while (constant == 0);

  if (bluebattle.hp > 0)
  {
    if (j < 5)
    {
      rednext(redbattle);
      j++;
      do
      {
	turn(bluebattle, redbattle);
	red[j] = redbattle;
	if (bluebattle.hp == 0)
	  break;
	else if (redbattle.hp == 0)
	{
	  rednext(redbattle);
	  j++;
	}
	if (j >= 5)
	{
	  i = 0;
	  j++;
	  break;
	}
      } while (constant == 0);
    }
  }

  else if (redbattle.hp > 0)
  {
    if (i < 5)
    {
      bluenext(blue[i + 1], redbattle);
      i++;
      do
      {
	do
	{
	  turn(bluebattle, redbattle);
	  red[j] = redbattle;
	  if ((bluebattle.hp == 0) || (redbattle.hp == 0))
	    break;
	} while (constant == 0);
	if (bluebattle.hp == 0)
	{
	  bluenext (blue[i + 1], redbattle);
	  i++;
	}
	else if (redbattle.hp == 0)
	  break;
	if (i >= 5)
	{
	  j = 0;
	  i++;
	  break;
	}
      } while (constant == 0);
    }
  }
  getch();
  clicksound();
  clrscr();
  closegraph();
  initgraph (&gd, &gm, "c:\\turboc3\\bgi");
  settextjustify (CENTER_TEXT, CENTER_TEXT);

  int remhp = 0;

  if((i >= 5) && ((red[0].hp > 0) || (red[1].hp > 0) || (red[2].hp > 0) || (red[3].hp > 0) || (red[4].hp > 0) || (red[5].hp > 0)))
  {
    for (h = 0; h < 6; h++)
      remhp += red[h].hp;

    outtextxy (midx, midy, "You are now the Pokemon League Champion!");
    winsound();
    getch();
    clicksound();
    clearviewport();
    outtextxy (midx, 50, "HALL OF FAME");
    displayteam (team[0], team[1], team[2], team[3], team[4], team[5]);
  }
  else if(j >= 5 && ((blue[0].hp > 0) || (blue[1].hp > 0) || (blue[2].hp > 0) || (blue[3].hp > 0) || (blue[4].hp > 0) || (blue[5].hp > 0)))
  {
    outtextxy (midx, midy, "Better luck next time!");
    losesound();
  }
  getch();
  closegraph();
  clrscr();

  lb trainer;
  trainer.input(remhp, tothp);
  clrscr();
  write(trainer);
  sort();
  display();
  getch();
}