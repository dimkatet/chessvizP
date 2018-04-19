void scandata(char a[9][9],char &x0,char &y0,char &x1,char &y1,char &strk)			//ââîä !âîçìîæíûõ! äàííûõ
{
	cin>>x0>>y0>>strk>>x1>>y1;
	while(checkdata(x0,y0,x1,y1,strk)||checkstartposition(a,x0,y0,x1,y1,strk)||checkfirstposition(a,x0,y0,x1,y1,strk))
		cin>>x0>>y0>>strk>>x1>>y1;	
}