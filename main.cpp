#include<dos.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include <locale.h>

using namespace std;
int main()


	{
	setlocale(LC_ALL, "Turkish");
	
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\DGI");
	float x=1,y=0.00000,j=0.5,count=0.1;
	float r=15;
	setcolor(11);
	cout<<"----------PROJECT :  ""B�R TOPUN ZAMAN ���NDEK� S�N�M�----------"""<<endl;
	cout<<"Bili�im Sistemleri Ve Teknolojileri B�l�m� 1.S�n�f Bahar D�nemi Vize Projesi"<<endl;
	cout<<"AHMET FEYZ� G�LMEZ, AHMET DURAN G�K�E, YAREN BALAMUT, EMEK SA�LAM, S�MGE G�NDO�DU"<<endl;
	cout<<"==> Top ka� defa sekecek 0-18 aras� de�er giriniz : "<<endl;
	int a;
	cin>>a;
	
	line(0,215,92*a,215);
	Sleep(1);
	
	
	
	for(int k=1;k<=a;k++) //sekme sayisi
	{
		for(float i=90;i<270;i+=10) // d���p al�alma
		
		{
			y=cos(((i*22/7)/180))/j;
			if(y>0)
			y=y;
			x+=5;
			setcolor(14);
			setfillstyle(1,12);
			circle(x,y*100+200,r);
			floodfill(x,y*100+200,14);
			delay(100);
			setcolor(0);
			setfillstyle(1,0);
			circle(x,y*100+200,r);
			floodfill(x,y*100+200,0);
			
			
				
		}
		j+=count;
		count+=0.1;
	}
	getch();
	
}
