#include<stdio.h>
#include<iostream>
#include <board.hpp>
using namespace std;
int	checkfirstposition(char a[9][9],char x0,char y0,char x1,char y1,char strk)					
{
	if(a[-(((int)y0)-56)][((int)x0)-96]!=' ')
	{
	if(strk=='-') { if(a[-(((int)y1)-56)][((int)x1)-96]==' ') return 0; else return 1;	}
	if(strk=='x') { if(a[-(((int)y1)-56)][((int)x1)-96]!=' ') return 0; else return 1;	} 
	}
	else return 1;
}
int queue(char a[9][9],char x0,char y0,char x1,char y1,char strk,int k)								
{
	if(k%2)
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-96]>94)
		return 1;
		else return 0;
	}
	else
	{
		if((int)a[-(((int)y0)-56)][((int)x0)-96]<94)
		return 1;
		else return 0;
	}
}
int	checkstartposition(char a[9][9],char x0,char y0,char x1,char y1,char strk)					
{
	switch((int)a[-(((int)y0)-56)][((int)x0)-96])
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
}