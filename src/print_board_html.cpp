#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "board_print_html.h"
int print(int board[8][8])
{
	FILE *index = fopen ("index.html", "w");
	if (index==NULL) {printf ("error opening file");}
	FILE *source = fopen ("header.html", "r");
	int c;
	while ((c = fgetc(source)) != EOF) {
		fputc (c, index);
	}
	fprintf (index, "<body>\n\t<table class=\"chessboard\">\n\t\t"); //lol kek
	for (int i = 0; i<8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j==0) fprintf (index, "<tr>");
			if (board[i][j]==0) fprintf (index, "<td></td>\n");
			else {
			fprintf (index, "<td><span class=\"");
			switch (board[i][j]) {
				case 'R': fprintf (index, "black rook");   break;
				case 'N': fprintf (index, "black knight"); break;
				case 'B': fprintf (index, "black bishop"); break;
				case 'K': fprintf (index, "black king");   break;
				case 'Q': fprintf (index, "black queen");  break;
				case 'P': fprintf (index, "black pawn");   break;
				case 'r': fprintf (index, "white rook");   break;
				case 'n': fprintf (index, "white knight"); break;
				case 'b': fprintf (index, "white bishop"); break;
				case 'k': fprintf (index, "white king");   break;
				case 'q': fprintf (index, "white queen");  break;
				case 'p': fprintf (index, "white pawn");   break;
			}
			fprintf (index, "\"></span></td>\n");
			}
		if (j==7) fprintf (index, "</tr>");
		}
	}
}