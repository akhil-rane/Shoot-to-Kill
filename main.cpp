/*******************************

Developed by: Akhil Rane

********************************/

#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void fill_pixel(int x,int y,int x_max,int y_max,int xi)
{
    
    if(y>y_max)
    {
       return;
    }   
    
    if(x>x_max)
    {
        fill_pixel(xi,y+10,x_max,y_max,xi);                    
    } 
    else
    {
        putpixel(x,y,WHITE);   
        fill_pixel(x+6,y,x_max,y_max,xi); 
    } 
}
void fill_pixel1(int x,int y,int x_max,int y_max,int xi)
{
    
    if(y>y_max)
    {
       return;
    }   
    
    if(x>x_max)
    {
        fill_pixel1(xi,y+10,x_max,y_max,xi);                    
    } 
    else
    {
        putpixel(x,y,BLACK);   
        fill_pixel1(x+6,y,x_max,y_max,xi); 
    } 
}

main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc\bgi");

//scene1=title
settextstyle(BOLD_FONT, HORIZ_DIR, 4);
outtextxy(100, 200, "BIN LADEN: SHOOT TO KILL");
delay(2000);
cleardevice();


//scene2=entry
int i,j;
FILE* file = fopen ("yo.txt", "r");
  i=0;
  int m=0,n=0;
  int mat[55][128];
     
  while (!feof (file))
  {  
           
      fscanf (file, "%d", &i);      
      mat[m][n]=i;
      n++;
      if(n>127)
      {
        m++;
        n=0;
      } 
  }

FILE* file1 = fopen ("soldier.txt", "r");
  i=0;
  m=0,n=0;
  int mat1[45][23];
     
  while (!feof (file1))
  {  
           
      fscanf (file1, "%d", &i);      
      mat1[m][n]=i;
      n++;
      if(n>22)
      {
        m++;
        n=0;
      } 
  }

FILE* file2 = fopen ("laden_sleeping.txt", "r");
  i=0;
  m=0,n=0;
  int mat2[479][639];
     
  while (!feof (file2))
  {  
           
      fscanf (file2, "%d", &i);      
      mat2[m][n]=i;
      n++;
      if(n>638)
      {
        m++;
        n=0;
      } 
  }
FILE* file3 = fopen ("s1.txt", "r");
 i=0,j=0;
 m=0,n=0;
  int mat3[188][146];
     
  while (!feof (file3))
  {  
           
      fscanf (file3, "%d", &i);      
      mat3[m][n]=i;
      n++;
      if(n>145)
      {
        m++;
        n=0;
      } 
  }

FILE* file4 = fopen ("s2.txt", "r");
  i=0;
   m=0,n=0;
  int mat4[188][100];
     
  while (!feof (file4))
  {  
           
      fscanf (file4, "%d", &i);      
      mat4[m][n]=i;
      n++;
      if(n>99)
      {
        m++;
        n=0;
      } 
  }
FILE* file5 = fopen ("s3.txt", "r");
  i=0;
   m=0,n=0;
  int mat5[188][105];
     
  while (!feof (file5))
  {  
           
      fscanf (file5, "%d", &i);      
      mat5[m][n]=i;
      n++;
      if(n>104)
      {
        m++;
        n=0;
      } 
  }
FILE* file6 = fopen ("s4.txt", "r");
  i=0;
   m=0,n=0;
  int mat6[200][75];
     
  while (!feof (file6))
  {  
           
      fscanf (file6, "%d", &i);      
      mat6[m][n]=i;
      n++;
      if(n>74)
      {
        m++;
        n=0;
      } 
  }
FILE* file7 = fopen ("s5.txt", "r");
 i=0,j=0;
 m=0,n=0;
  int mat7[188][146];
     
  while (!feof (file7))
  {  
           
      fscanf (file7, "%d", &i);      
      mat7[m][n]=i;
      n++;
      if(n>145)
      {
        m++;
        n=0;
      } 
  }

FILE* file8 = fopen ("s6.txt", "r");
  i=0;
   m=0,n=0;
  int mat8[188][100];
     
  while (!feof (file8))
  {  
           
      fscanf (file8, "%d", &i);      
      mat8[m][n]=i;
      n++;
      if(n>99)
      {
        m++;
        n=0;
      } 
  }
FILE* file9 = fopen ("s7.txt", "r");
  i=0;
   m=0,n=0;
  int mat9[188][105];
     
  while (!feof (file9))
  {  
           
      fscanf (file9, "%d", &i);      
      mat9[m][n]=i;
      n++;
      if(n>104)
      {
        m++;
        n=0;
      } 
  }
FILE* file10 = fopen ("s8.txt", "r");
  i=0;
   m=0,n=0;
  int mat10[200][75];
     
  while (!feof (file10))
  {  
           
      fscanf (file10, "%d", &i);      
      mat10[m][n]=i;
      n++;
      if(n>74)
      {
        m++;
        n=0;
      } 
  }

FILE* file11 = fopen ("s9.txt", "r");
  i=0;
   m=0,n=0;
  int mat11[210][79];
     
  while (!feof (file11))
  {  
           
      fscanf (file11, "%d", &i);      
      mat11[m][n]=i;
      n++;
      if(n>78)
      {
        m++;
        n=0;
      } 
  }

FILE* file12 = fopen ("laden.txt", "r");
  i=0;
   m=0,n=0;
  int mat12[220][67];
     
  while (!feof (file12))
  {  
           
      fscanf (file12, "%d", &i);      
      mat12[m][n]=i;
      n++;
      if(n>66)
      {
        m++;
        n=0;
      } 
  }



//ground
line(0,330,getmaxx(),330);
fill_pixel(1,335,getmaxx(),getmaxy(),1);
fill_pixel(5,340,getmaxx(),getmaxy(),5);

//wall
line(160,250,getmaxx(),250);
rectangle(150,245,160,330);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(161,251,WHITE);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(151,251,WHITE);
//tree
setfillstyle(6,BROWN);
rectangle(50,255,70,255+75);
floodfill(51,256,WHITE);
setfillstyle(11,GREEN);
fillellipse(33,270,20,20);
fillellipse(43,250,20,20);
fillellipse(67,245,20,20);
fillellipse(83,268,20,20);

//ladens_house
line(350,250,350,230);
rectangle(340,220,getmaxx(),230);
line(350,220,350,130);
rectangle(340,120,getmaxx(),130);
rectangle(350,190,470,220);
rectangle(392,190,428,160);
rectangle(387,190,433,155);
line(387,155,433,155); 

rectangle(500,190,540,150);
rectangle(503,187,537,153);
line(500,150,540,150);
line(500,190,540,190);

rectangle(570,190,610,150);
rectangle(573,187,607,153);
line(570,150,610,150);
line(570,190,610,190);

setfillstyle(SOLID_FILL,YELLOW);
floodfill(388,150,WHITE);
floodfill(388,249,WHITE);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(341,221,WHITE);
floodfill(341,121,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(351,191,WHITE);
//setfillstyle(6,WHITE);
//floodfill(393,161,WHITE);
//floodfill(504,154,WHITE);
//floodfill(574,154,WHITE);
setfillstyle(SOLID_FILL,BROWN);
floodfill(388,156,WHITE);
floodfill(501,151,WHITE);
floodfill(571,151,WHITE);

line(520,187,520,153);
line(503,170,537,170);
line(590,187,590,153);
line(573,170,607,170);

//helicopter
int k=-128;
int l=-200;
setviewport(0,0,330,150,1);
while(k<200)
{
clearviewport();
for(i=1;i<55;i++)
{
    for(j=1;j<128;j++)
    {
       if(mat[i-1][j-1]==1)
       {
          putpixel(j+k,i,WHITE);                
       } 
    }             
}                 
k+=4;  
for(i=41;i<95;i++)
{
    for(j=1;j<128;j++)
    {
       if(mat[i-41][j-1]==1)
       {
          putpixel(j+l,i+41,WHITE);                
       } 
    }             
}                 
l+=4;

}
delay(500);

//ropes
setviewport(0,0,getmaxx(),getmaxy(),1);
line(285,55,285,250);
line(210,135,210,250);

delay(500);
//soldiers_geting_down
int t1=0;
for(t1=0;t1<3;t1++)
{
k=0;

while(k<195)
{
setviewport(261,55,285,249,1);
clearviewport();
for(i=1;i<46;i++)
{
    for(j=1;j<24;j++)
    {
       if(mat1[i-1][j-1]==1)
       {
          putpixel(j,i+k,WHITE);                
       } 
    }             
} 
setviewport(186,135,210,249,1);
clearviewport();
for(i=1;i<46;i++)
{
    for(j=1;j<24;j++)
    {
       if(mat1[i-1][j-1]==1)
       {
          putpixel(j,i+k,WHITE);                
       } 
    }             
}
k++;
delay(5);
}
}
cleardevice();

//scene3
setviewport(0,0,639,479,1);

rectangle(0,0,639,479);
setfillstyle(SOLID_FILL,WHITE);
floodfill(600,430,WHITE);
setcolor(BLACK);
rectangle(0,0,639,479);
for(i=1;i<479;i++)
{
    for(j=1;j<639;j++)
    {
       if(mat2[i-1][j-1]==0)
       {
          putpixel(j,i,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(600,430,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(2,330,BLACK);
floodfill(500,150,BLACK);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(500,200,BLACK);
floodfill(500,230,BLACK);
floodfill(470,230,BLACK);
floodfill(440,230,BLACK);
floodfill(370,240,BLACK);
floodfill(390,250,BLACK);
floodfill(410,250,BLACK);
floodfill(200,300,BLACK);
floodfill(230,300,BLACK);
floodfill(250,300,BLACK);
floodfill(180,300,BLACK);
floodfill(160,300,BLACK);
floodfill(130,300,BLACK);
floodfill(100,300,BLACK);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(290,300,BLACK);
floodfill(370,250,BLACK);

delay(400);
setbkcolor(WHITE);
setcolor(BLACK);
settextstyle(BOLD_FONT, HORIZ_DIR, 4);
outtextxy(270, 95, "Z");
delay(400);
settextstyle(BOLD_FONT, HORIZ_DIR, 5);
outtextxy(290, 65, "Z");
delay(400);
settextstyle(BOLD_FONT, HORIZ_DIR, 6);
outtextxy(315, 35, "Z");
delay(400);
settextstyle(BOLD_FONT, HORIZ_DIR, 7);
outtextxy(350, 5, "Z");
delay(1000);


//scene4

k=-100;
t1=0;
l=639;


while(k<130)
{
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

if(t1==0)
{
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat3[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat7[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+120,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,200,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+40,290,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+15,280,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+100,320,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+130,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+50,238,BLACK);


setfillstyle(SOLID_FILL,BROWN);
floodfill(l+85,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+25,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,200,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+85,290,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+135,280,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+45,320,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+20,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+97,238,BLACK);



}
else if(t1==1)
{
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat4[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat8[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,250,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,235,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,210,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+70,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,300,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+60,330,BLACK);
floodfill(k+10,320,BLACK);
floodfill(k+80,230,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,250,BLACK);
floodfill(l+65,230,BLACK);
floodfill(l+65,210,BLACK);
floodfill(l+35,160,BLACK);
floodfill(l+75,300,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+80,330,BLACK);
floodfill(l+45,330,BLACK);
floodfill(l+20,230,BLACK);


}
else if(t1==2)
{
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat5[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat9[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+35,250,BLACK);
floodfill(k+35,230,BLACK);
floodfill(k+35,190,BLACK);
floodfill(k+35,280,BLACK);
floodfill(k+55,160,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+10,330,BLACK);
floodfill(k+90,315,BLACK);
floodfill(k+60,230,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,250,BLACK);
floodfill(l+65,240,BLACK);
floodfill(l+85,200,BLACK);
floodfill(l+75,280,BLACK);
floodfill(l+55,160,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+100,330,BLACK);
floodfill(l+30,315,BLACK);
floodfill(l+45,230,BLACK);

}
t1++;
if(t1>2)
{
t1=0;
}        
k+=8;
l-=8;
setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
circle(280,225,10);

setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(320,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(280,225,BLACK);

delay(50);
}

k=132;
l=407;
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat6[i-1][j-1]==0)
       {
          putpixel(j+k+20,i+138,BLACK);                
       } 
    }             
}
for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat10[i-1][j-1]==0)
       {
          putpixel(j+l,i+138,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(190,145,BLACK);
floodfill(190,240,BLACK);
floodfill(190,260,BLACK);
floodfill(170,240,BLACK);
floodfill(166,190,BLACK);
floodfill(160,247,BLACK);
floodfill(207,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(210,230,BLACK);
floodfill(190,330,BLACK);
floodfill(195,325,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(440,145,BLACK);
floodfill(440,240,BLACK);
floodfill(470,240,BLACK);
floodfill(440,250,BLACK);
floodfill(470,190,BLACK);
floodfill(472,250,BLACK);
floodfill(430,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(450,330,BLACK);
floodfill(425,230,BLACK);
floodfill(438,325,BLACK);


setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
circle(280,225,10);

setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(320,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(280,225,BLACK);
delay(1000);


k=132;
l=407;
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setbkcolor(WHITE);
setcolor(BLACK);
rectangle(15,70,180,120);
line(170,120,185,140);
line(160,120,185,140);
settextstyle(BOLD_FONT, HORIZ_DIR, 1);
outtextxy(20,85,"Door is locked");


for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat6[i-1][j-1]==0)
       {
          putpixel(j+k+20,i+138,BLACK);                
       } 
    }             
}
for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat10[i-1][j-1]==0)
       {
          putpixel(j+l,i+138,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(190,145,BLACK);
floodfill(190,240,BLACK);
floodfill(190,260,BLACK);
floodfill(170,240,BLACK);
floodfill(166,190,BLACK);
floodfill(160,247,BLACK);
floodfill(207,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(210,230,BLACK);
floodfill(190,330,BLACK);
floodfill(195,325,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(440,145,BLACK);
floodfill(440,240,BLACK);
floodfill(470,240,BLACK);
floodfill(440,250,BLACK);
floodfill(470,190,BLACK);
floodfill(472,250,BLACK);
floodfill(430,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(450,330,BLACK);
floodfill(425,230,BLACK);
floodfill(438,325,BLACK);


setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
circle(280,225,10);

setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(320,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(280,225,BLACK);
delay(1000);

k=132;
l=407;
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setbkcolor(WHITE);
setcolor(BLACK);
rectangle(450,70,615,120);
line(460,120,455,140);
line(470,120,455,140);
settextstyle(BOLD_FONT, HORIZ_DIR, 1);
outtextxy(455,85,"Plant the bomb");


for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat6[i-1][j-1]==0)
       {
          putpixel(j+k+20,i+138,BLACK);                
       } 
    }             
}
for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat10[i-1][j-1]==0)
       {
          putpixel(j+l,i+138,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(190,145,BLACK);
floodfill(190,240,BLACK);
floodfill(190,260,BLACK);
floodfill(170,240,BLACK);
floodfill(166,190,BLACK);
floodfill(160,247,BLACK);
floodfill(207,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(210,230,BLACK);
floodfill(190,330,BLACK);
floodfill(195,325,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(440,145,BLACK);
floodfill(440,240,BLACK);
floodfill(470,240,BLACK);
floodfill(440,250,BLACK);
floodfill(470,190,BLACK);
floodfill(472,250,BLACK);
floodfill(430,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(450,330,BLACK);
floodfill(425,230,BLACK);
floodfill(438,325,BLACK);


setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
circle(280,225,10);

setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(320,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(280,225,BLACK);
delay(1000);


k=132;
l=407;
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setbkcolor(WHITE);
setcolor(BLACK);
rectangle(45,70,180,120);
line(170,120,185,140);
line(160,120,185,140);
settextstyle(BOLD_FONT, HORIZ_DIR, 1);
outtextxy(55,85,"Take cover");
rectangle(305,160,335,200);
rectangle(310,150,315,160);
rectangle(310,165,330,175);
rectangle(310,182,318,192);
rectangle(323,182,330,192);
setfillstyle(SOLID_FILL,BLUE);
floodfill(306,161,BLACK);
floodfill(311,151,BLACK);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(311,166,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(311,183,BLACK);
setfillstyle(SOLID_FILL,GREEN);
floodfill(324,183,BLACK);

for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat6[i-1][j-1]==0)
       {
          putpixel(j+k+20,i+138,BLACK);                
       } 
    }             
}
for(i=1;i<201;i++)
{
    for(j=1;j<76;j++)
    {
       if(mat10[i-1][j-1]==0)
       {
          putpixel(j+l,i+138,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(190,145,BLACK);
floodfill(190,240,BLACK);
floodfill(190,260,BLACK);
floodfill(170,240,BLACK);
floodfill(166,190,BLACK);
floodfill(160,247,BLACK);
floodfill(207,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(210,230,BLACK);
floodfill(190,330,BLACK);
floodfill(195,325,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(440,145,BLACK);
floodfill(440,240,BLACK);
floodfill(470,240,BLACK);
floodfill(440,250,BLACK);
floodfill(470,190,BLACK);
floodfill(472,250,BLACK);
floodfill(430,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(450,330,BLACK);
floodfill(425,230,BLACK);
floodfill(438,325,BLACK);


setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
circle(280,225,10);

setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(320,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(280,225,BLACK);
delay(1000);





k=407;
t1=0;
l=132;


while(k<680)
{
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

if(t1==0)
{
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat3[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat7[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+120,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,200,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+40,290,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+15,280,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+100,320,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+130,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+50,238,BLACK);


setfillstyle(SOLID_FILL,BROWN);
floodfill(l+85,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+25,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,200,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+85,290,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+135,280,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+45,320,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+20,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+97,238,BLACK);



}
else if(t1==1)
{
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat4[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat8[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,250,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,235,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,210,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+70,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,300,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+60,330,BLACK);
floodfill(k+10,320,BLACK);
floodfill(k+80,230,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,250,BLACK);
floodfill(l+65,230,BLACK);
floodfill(l+65,210,BLACK);
floodfill(l+35,160,BLACK);
floodfill(l+75,300,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+80,330,BLACK);
floodfill(l+45,330,BLACK);
floodfill(l+20,230,BLACK);


}
else if(t1==2)
{
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat5[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat9[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+35,250,BLACK);
floodfill(k+35,230,BLACK);
floodfill(k+35,190,BLACK);
floodfill(k+35,280,BLACK);
floodfill(k+55,160,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+10,330,BLACK);
floodfill(k+90,315,BLACK);
floodfill(k+60,230,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,250,BLACK);
floodfill(l+65,240,BLACK);
floodfill(l+85,200,BLACK);
floodfill(l+75,280,BLACK);
floodfill(l+55,160,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+100,330,BLACK);
floodfill(l+30,315,BLACK);
floodfill(l+45,230,BLACK);

}
t1++;
if(t1>2)
{
t1=0;
}        
k+=8;
l-=8;
setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
circle(280,225,10);

setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(320,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(280,225,BLACK);
rectangle(305,160,335,200);
rectangle(310,150,315,160);
rectangle(310,165,330,175);
rectangle(310,182,318,192);
rectangle(323,182,330,192);
setfillstyle(SOLID_FILL,BLUE);
floodfill(306,161,BLACK);
floodfill(311,151,BLACK);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(311,166,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(311,183,BLACK);
setfillstyle(SOLID_FILL,GREEN);
floodfill(324,183,BLACK);

delay(50);
}

delay(1000);
cleardevice();
ellipse(320,235,0,360,200,100);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(324,183,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(10,10,BLACK);   
setbkcolor(YELLOW);
setcolor(BLACK);
settextstyle(BOLD_FONT, HORIZ_DIR, 8);
outtextxy(200,200,"BOOM!!");
delay(1000);


k=-100;
t1=0;
l=639;


while(k<190)
{
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

if(t1==0)
{
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat3[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat7[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+120,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,200,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+40,290,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+15,280,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+100,320,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+130,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+50,238,BLACK);


setfillstyle(SOLID_FILL,BROWN);
floodfill(l+85,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+25,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,200,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+85,290,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+135,280,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+45,320,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+20,230,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(l+97,238,BLACK);



}
else if(t1==1)
{
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat4[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat8[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,250,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,235,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,210,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+70,155,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,300,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+60,330,BLACK);
floodfill(k+10,320,BLACK);
floodfill(k+80,230,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,250,BLACK);
floodfill(l+65,230,BLACK);
floodfill(l+65,210,BLACK);
floodfill(l+35,160,BLACK);
floodfill(l+75,300,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+80,330,BLACK);
floodfill(l+45,330,BLACK);
floodfill(l+20,230,BLACK);


}
else if(t1==2)
{
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat5[i-1][j-1]==0)
       {
          putpixel(j+k,i+150,BLACK);                
       } 
    }             
}
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat9[i-1][j-1]==0)
       {
          putpixel(j+l,i+150,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+35,250,BLACK);
floodfill(k+35,230,BLACK);
floodfill(k+35,190,BLACK);
floodfill(k+35,280,BLACK);
floodfill(k+55,160,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+10,330,BLACK);
floodfill(k+90,315,BLACK);
floodfill(k+60,230,BLACK);

setfillstyle(SOLID_FILL,BROWN);
floodfill(l+65,250,BLACK);
floodfill(l+65,240,BLACK);
floodfill(l+85,200,BLACK);
floodfill(l+75,280,BLACK);
floodfill(l+55,160,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(l+100,330,BLACK);
floodfill(l+30,315,BLACK);
floodfill(l+45,230,BLACK);

}
t1++;
if(t1>2)
{
t1=0;
}        
k+=8;
l-=8;
setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,WHITE);
floodfill(320,225,BLACK);

delay(50);
}

cleardevice();
setfillstyle(SOLID_FILL,YELLOW);
floodfill(20,25,BLACK);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setcolor(BLACK);
rectangle(260,120,380,330);
rectangle(250,110,390,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(251,225,BLACK);
setfillstyle(SOLID_FILL,WHITE);
floodfill(320,225,BLACK);
delay(500);


//scene5
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(1,1,BLACK);
setviewport(0,0,getmaxx(),getmaxy(),1);
rectangle(150,0,170,330);
//int i,j;
//int k,t1;
k=-100;
t1=0;
int h=7;


while(k<20)
{
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

if(t1==0)
{
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat3[i-1][j-1]==0)
       {
          putpixel(j+k,i+143,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,230-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+120,155-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,200-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+40,290-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+15,280-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+100,320-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+130,230-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+50,238-h,BLACK);
}
else if(t1==1)
{
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat4[i-1][j-1]==0)
       {
          putpixel(j+k,i+143,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,250-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,235-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,210-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+70,155-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,300-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+60,330-h,BLACK);
floodfill(k+10,320-h,BLACK);
floodfill(k+80,230-h,BLACK);
}
else if(t1==2)
{
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat5[i-1][j-1]==0)
       {
          putpixel(j+k,i+143,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+35,250-h,BLACK);
floodfill(k+35,230-h,BLACK);
floodfill(k+35,190-h,BLACK);
floodfill(k+35,280-h,BLACK);
floodfill(k+55,160-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+10,330-h,BLACK);
floodfill(k+90,315-h,BLACK);
floodfill(k+60,230-h,BLACK);
}
t1++;
if(t1>2)
{
t1=0;
}        
k+=8;
for(i=1;i<221;i++)
{
    for(j=1;j<68;j++)
    {
       if(mat12[i-1][j-1]==0)
       {
          putpixel(j+550,i+110,BLACK);                
       } 
    }             
}
circle(548+50,131,1);

setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(578,120,BLACK);
floodfill(578,170,BLACK);
floodfill(578,240,BLACK);

setfillstyle(SOLID_FILL,BLACK);
floodfill(575,325,BLACK);
floodfill(605,325,BLACK);


setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(1,1,BLACK);
setviewport(0,0,getmaxx(),getmaxy(),1);
rectangle(150,0,170,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(152,5,BLACK);
delay(50);
}

cleardevice();

setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

for(i=1;i<211;i++)
{
    for(j=1;j<79;j++)
    {
       if(mat11[i-1][j-1]==0)
       {
          putpixel(j+k+40,i+120,BLACK);                
       } 
    }             
}
for(i=1;i<221;i++)
{
    for(j=1;j<68;j++)
    {
       if(mat12[i-1][j-1]==0)
       {
          putpixel(j+550,i+110,BLACK);                
       } 
    }             
}
circle(548+50,131,1);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(578,120,BLACK);
floodfill(578,170,BLACK);
floodfill(578,240,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(575,325,BLACK);
floodfill(605,325,BLACK);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(590,325,BLACK);
circle(595,325,2);



setfillstyle(SOLID_FILL,BROWN);
floodfill(90+10,130,BLACK);
floodfill(90+10,230,BLACK);
floodfill(90+10,250,BLACK);
floodfill(70+10,235,BLACK);
floodfill(60+10,237,BLACK);
floodfill(105+10,250,BLACK);
setfillstyle(SOLID_FILL,BLACK);

floodfill(107+10,220,BLACK);
floodfill(90+10,320,BLACK);
floodfill(95+10,315,BLACK);

circle(90,320,3);

setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(1,1,BLACK);
setviewport(0,0,getmaxx(),getmaxy(),1);
rectangle(150,0,170,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(152,5,BLACK);

//door_open
delay(1000);
setcolor(BLACK);
rectangle(170,90,290,330);
rectangle(170,100,280,330);
circle(260,225,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(171,95,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(200,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(260,225,BLACK);
delay(1000);

k=180;
t1=0;
while(k<300)
{
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

if(t1==0)
{
for(i=1;i<188;i++)
{
    for(j=1;j<146;j++)
    {
       if(mat3[i-1][j-1]==0)
       {
          putpixel(j+k,i+143,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,230-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+120,155-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+80,200-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+40,290-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+15,280-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+100,320-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+130,230-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+50,238-h,BLACK);
}
else if(t1==1)
{
for(i=1;i<188;i++)
{
    for(j=1;j<100;j++)
    {
       if(mat4[i-1][j-1]==0)
       {
          putpixel(j+k,i+143,BLACK);                
       } 
    }             
}

setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,250-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,235-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,210-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+70,155-h,BLACK);
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+30,300-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+60,330-h,BLACK);
floodfill(k+10,320-h,BLACK);
floodfill(k+80,230-h,BLACK);
}
else if(t1==2)
{
for(i=1;i<188;i++)
{
    for(j=1;j<105;j++)
    {
       if(mat5[i-1][j-1]==0)
       {
          putpixel(j+k,i+143,BLACK);                
       } 
    }             
}
setfillstyle(SOLID_FILL,BROWN);
floodfill(k+35,250-h,BLACK);
floodfill(k+35,230-h,BLACK);
floodfill(k+35,190-h,BLACK);
floodfill(k+35,280-h,BLACK);
floodfill(k+55,160-h,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(k+10,330-h,BLACK);
floodfill(k+90,315-h,BLACK);
floodfill(k+60,230-h,BLACK);
}
t1++;
if(t1>2)
{
t1=0;
}        
k+=8;
for(i=1;i<221;i++)
{
    for(j=1;j<68;j++)
    {
       if(mat12[i-1][j-1]==0)
       {
          putpixel(j+550,i+110,BLACK);                
       } 
    }             
}
circle(548+50,131,1);

setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(578,120,BLACK);
floodfill(578,170,BLACK);
floodfill(578,240,BLACK);

setfillstyle(SOLID_FILL,BLACK);
floodfill(575,325,BLACK);
floodfill(605,325,BLACK);
circle(590,325,1);

setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(1,1,BLACK);
setviewport(0,0,getmaxx(),getmaxy(),1);
rectangle(150,0,170,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(152,5,BLACK);

setcolor(BLACK);
rectangle(170,90,290,330);
rectangle(170,100,280,330);
circle(260,225,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(171,95,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(200,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(260,225,BLACK);

delay(50);
}
FILE* file13 = fopen ("ss.txt", "r");
  i=0;
   m=0,n=0;
  
     
  while (!feof (file13))
  {  
           
      fscanf (file13, "%d", &i);      
      mat2[m][n]=i;
      n++;
      if(n>161)
      {
        m++;
        n=0;
      } 
  }

cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

for(i=1;i<147;i++)
{
    for(j=1;j<162;j++)
    {
       if(mat2[i-1][j-1]==0)
       {
          putpixel(j+k,i+182,BLACK);                
       } 
    }             
}
h=10;
setfillstyle(SOLID_FILL,BROWN);
floodfill(360+h,200,BLACK);
floodfill(360+h,250,BLACK);
floodfill(360+h,230,BLACK);
floodfill(390+h,230,BLACK);
floodfill(330+h,230,BLACK);
floodfill(330+h,280,BLACK);
floodfill(390+h,270,BLACK);

for(i=1;i<221;i++)
{
    for(j=1;j<68;j++)
    {
       if(mat12[i-1][j-1]==0)
       {
          putpixel(j+550,i+110,BLACK);                
       } 
    }             
}
circle(548+50,131,1);

setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(578,120,BLACK);
floodfill(578,170,BLACK);
floodfill(578,240,BLACK);

setfillstyle(SOLID_FILL,BLACK);
floodfill(575,325,BLACK);
floodfill(605,325,BLACK);
circle(590,325,1);

setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);
setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(1,1,BLACK);
setviewport(0,0,getmaxx(),getmaxy(),1);
rectangle(150,0,170,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(152,5,BLACK);

setcolor(BLACK);
rectangle(170,90,290,330);
rectangle(170,100,280,330);
circle(260,225,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(171,95,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(200,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(260,225,BLACK);

setviewport(455,200,555,210,1);
setbkcolor(LIGHTMAGENTA);
delay(1000);
for(i=0;i<100;i++)
{
clearviewport(); 
rectangle(2+i,6,2+i+6,8);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(2+i+1,7,BLACK);
delay(20);
}

setviewport(0,0,getmaxx(),getmaxy(),1);
for(i=2;i<20;i++)
{
setcolor(RED);
circle(580,185,i);
delay(50);
}
delay(1000);

//last_part
cleardevice();
setfillstyle(SOLID_FILL,WHITE);
floodfill(1,1,WHITE);

for(i=1;i<211;i++)
{
    for(j=1;j<79;j++)
    {
       if(mat11[i-1][j-1]==0)
       {
          putpixel(j+k+40,i+120,BLACK);                
       } 
    }             
}
printf("%d",k);
h=40;
setfillstyle(SOLID_FILL,BROWN);
floodfill(350+h,220,BLACK);
floodfill(340+h,130,BLACK);
floodfill(340+h,280,BLACK);
floodfill(350+h,280,BLACK);
floodfill(320+h,230,BLACK);
floodfill(312+h,240,BLACK);
setfillstyle(SOLID_FILL,BLACK);
floodfill(350+h,190,BLACK);
floodfill(340+h,320,BLACK);
floodfill(348+h,315,BLACK);
setcolor(BLACK);
rectangle(400,60,555,110); 
line(390,148,410,110);
line(390,148,420,110);
setbkcolor(WHITE);
settextstyle(BOLD_FONT, HORIZ_DIR, 1);
outtextxy(410, 75, "SIR,Hez dead!");

setcolor(BLACK);
line(0,330,getmaxx(),330);
setfillstyle(SOLID_FILL,LIGHTGREEN);
floodfill(10,400,BLACK);
fill_pixel1(1,335,getmaxx(),getmaxy(),1);
fill_pixel1(5,340,getmaxx(),getmaxy(),5);
setfillstyle(SOLID_FILL,LIGHTMAGENTA);
floodfill(1,1,BLACK);
setviewport(0,0,getmaxx(),getmaxy(),1);
rectangle(150,0,170,330);
setfillstyle(SOLID_FILL,BLACK);
floodfill(152,5,BLACK);

setcolor(BLACK);
rectangle(170,90,290,330);
rectangle(170,100,280,330);
circle(260,225,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(171,95,BLACK);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(200,225,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(260,225,BLACK);
delay(2000);

//the_end
cleardevice();
setfillstyle(SOLID_FILL,BLACK);
floodfill(1,1,BLACK);

setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(BOLD_FONT, HORIZ_DIR, 4);
outtextxy(250, 200, "THE END");

getch();
return 0;
}
