#include<stdio.h>
#include<iostream>
#include "board.h"
using namespace std;
int	checkfirstposition(char a[8][8],char x0,char y0,char x1,char y1,char strk)					
{
	if(a[-(((int)y0)-56)][((int)x0)-96]!=' ')
	{
	if(strk=='-') { if(a[-(((int)y1)-56)][((int)x1)-97]==' ') return 0; else return 1;	}
	if(strk=='x') { if(a[-(((int)y1)-56)][((int)x1)-97]!=' ') return 0; else return 1;	} 
	}
	else return 1;
	return 1;
}
int queue(char a[8][8],char x0,char y0,char x1,char y1,char strk,int k)								
{
	if(k%2)
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-97]>94)
		return 1;
		else return 0;
	}
	else
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-97]<94)
		return 1;
		else return 0;
	}
	return 1;
}
int	checkstartposition(char a[8][8],char x0,char y0,char x1,char y1,char strk)					
{
	switch((int)a[-(((int)y0)-56)][((int)x0)-97])
	{
	case 112:
	if(y0=='2') {
		if(((int)x0==(int)x1)&&(((int)y0==((int)y1-1))||((int)y0==((int)y1-2)))) return 0; 	else	return 1;
	}
	else
	if(((int)x0==(int)x1)&&((int)y0==((int)y1-1)))	return 0;	else	return 1;
	case 80:
	if(y0=='7')	{
		if(((int)x0==(int)x1)&&(((int)y0==((int)y1+1))||((int)y0==((int)y1+2)))) return 0; 	else	return 1;
	}
	else
	if(((int)x0==(int)x1)&&((int)y0==((int)y1+1)))	return 0;	else	return 1;
	default: return 1;
	}
	return 1;
}
void motion0(char a[8][8],char x0,char y0,char x1,char y1,char strk)
{
	char zdviz=0;
	zdviz=a[-(((int)y0)-56)][((int)x0)-97];
	a[-(((int)y0)-56)][((int)x0)-97]=a[-(((int)y1)-56)][((int)x1)-97];
	a[-(((int)y1)-56)][((int)x1)-97]=zdviz;
}
int checkdata(char x0,char y0,char x1,char y1,char strk)
{
	if(((int)x0>=97)&&((int)x0<=104)&&((int)x1>=97)&&((int)x1<=104)&&((int)y0>=49)&&((int)y0<=56)&&((int)y1>=49)&&((int)y1<=56)) return 0;
	else return 1;
	return 1;
}
