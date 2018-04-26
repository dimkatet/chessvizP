#include<stdio.h>
#include<iostream>
#include "board.h"
#include "board_read.h"
#include "print_board_html.h"
using namespace std;
int main()
{
  int k=1;
  char a[8][8]={
  {'R','N','B','Q','K','B','N','R'},
  {'P','P','P','P','P','P','P','P'},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {' ',' ',' ',' ',' ',' ',' ',' '},
  {'p','p','p','p','p','p','p','p'},
  {'r','n','b','k','q','b','n','r'}
	};
  char x0=0,y0=0,x1=0,y1=0,strk=0; 
  while(1)
  {
  scandata(a,x0,y0,x1,y1,strk);
  if(queue(a,x0,y0,x1,y1,strk,k))
  	{
	  motion0(a,x0,y0,x1,y1,strk);
	  printboard(a);
	  k++;
	}
  }
  return 0;
}
