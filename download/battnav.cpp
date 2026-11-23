#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int raggio=0,cer,i=40,j=40,k,n=0,m[8][8],f=28,g,h=91,h1=91,linea,oblo,dist,inc;
int ste,mov=0,distr=0,v[70][70],colpo,colore=0,i1=40,j1=40,cia,boh,ca,raggi=0;
int cont=1,contd=1,finale,ragg=0,rag=30,car,caric=0,caso,caso1,sparo,canc;
int colpispar=0,spostati=0,spostatila=0,c,c1,colpfatto,colp=0,blu=0,blu1=0;
int all=0,mi=0,si=0,preso=0;
int ten[8][8],d=0,d1=0;
char sposta[3],pape[56];
void sfarfallio(){
   for(car=0;car<45;car++){
   setbkcolor(caric);
   caric++;
   if(caric%15==0)
    caric=0;
   delay(5);
   cleardevice();
   setbkcolor(15);}}
void esplosione(){

  for(cer=0;cer<20;cer++){
     setbkcolor(cer);
     circle(i1,j1,raggio);
     raggio++;
     if(cer<4)
      setcolor(15);
      else
      if(cer<14)
       setcolor(14);
       else
        setcolor(4);
     delay(20);}
     raggio=0;
     setbkcolor(1);}
void nave(){
     delay(300);
     setcolor(1);
     for(cer=0;cer<20;cer++){
     circle(i1,j1,raggio);
     raggio++;}
     raggio=0;
     setcolor(15);
     line(34+i1-40,34+j1-40,41+i1-40,22+j1-40);
     line(34+i1-40,34+j1-40,38+i1-40,43+j1-40);
     line(41+i1-40,22+j1-40,52+i1-40,43+j1-40);
     line(46+i1-40,30+j1-40,50+i1-40,26+j1-40);
     line(49+i1-40,36+j1-40,54+i1-40,31+j1-40);
     line(50+i1-40,26+j1-40,54+i1-40,31+j1-40);}
void onde(){
     setcolor(3);
     f=0;
     f+=i1-12;
     g+=j1+9;
     arc(f,g,0,180,6);
     f=0;
     g=0;
     f+=i1;
     g+=j1+9;
     arc(f,g,0,180,6);
     f=0;
     f+=i1+12;
     g=0;
     g+=j1+9;
     arc(f,g,0,180,6);
     g=0;}
void tentativi(){
     for(c=0;c<60-si;c++){
      setcolor(4);
      circle(20+d,373,3);
      d+=9;}
      d=0;
      if(sposta[1]==13){
       si++;
       setcolor(1);
       circle(551-d1,373,3);
       d1+=9;}
     }
void mirino(int colore){
      if(m[i1+40][j1]==6)
       setcolor(1);
       else
        if(m[i1+40][j1]==7)
         setcolor(1);
          else
        setcolor(0);
	   circle(i1+40,j1,5);
      circle(i1+40,j1,15);
      line(21+i1,40+j1-40,59+i1,40+j1-40);
      line(40+i1,21+j1-40,40+i1,59+j1-40);
      if(m[i1-40][j1]==6)
       setcolor(1);
       else
       if(m[i1-40][j1]==7)
         setcolor(1);
          else
        setcolor(0);
      circle(i1-40,j1,5);
      circle(i1-40,j1,15);
      line(21+i1-80,40+j1-40,59+i1-80,40+j1-40);
      line(40+i1-80,21+j1-40,40+i1-80,59+j1-40);
      if(m[i1][j1-40]==6)
       setcolor(1);
       else
       if(m[i1][j1-40]==7)
         setcolor(1);
          else
        setcolor(0);
      circle(i1,j1-40,5);
      circle(i1,j1-40,15);
      line(21+i1-40,40+j1-80,59+i1-40,40+j1-80);
      line(40+i1-40,21+j1-80,40+i1-40,59+j1-80);
      if(m[i1][j1+40]==6)
       setcolor(1);
       else
        if(m[i1][j1+40]==7)
         setcolor(1);
          else
        setcolor(0);
      circle(i1,j1+40,5);
      circle(i1,j1+40,15);
      line(21+i1-40,40+j1,59+i1-40,40+j1);
      line(40+i1-40,21+j1,40+i1-40,59+j1);
      setcolor(colore);
      circle(i1,j1,5);
      circle(i1,j1,15);
      line(21+i1-40,40+j1-40,59+i1-40,40+j1-40);
      line(40+i1-40,21+j1-40,40+i1-40,59+j1-40);
   setcolor(10);
   outtextxy(0,0,"     1    2    3    4    5    6    7    8");
   outtextxy(5, 40,"A");
   outtextxy(5, 80,"B");
   outtextxy(5, 120,"C");
   outtextxy(5, 160,"D");
   outtextxy(5, 200,"E");
   outtextxy(5, 240,"F");
   outtextxy(5, 280,"G");
   outtextxy(5, 320,"H");
   setcolor(12);
   outtextxy(400, 40,"N A V A L");
   setcolor(3);
   outtextxy(400, 45," B A T T L E");
   setcolor(15);
   outtextxy(400,60,"MUOVI IL MIRINO CON LE FRECCETTE");
   outtextxy(400,75,"EW PREMI INVIO PER FARE FUOCO , MA");
   outtextxy(400,90,"ATTENTO AI COLPI LIMITATI(60)!!!");
   setcolor(4);
   outtextxy(345,37,"ESCI");
   setcolor(2);
   rectangle(20,475,340,384);
   outtextxy(30,388,"SMS DAL CAPITANO DI PRUA");
   setcolor(10);
   outtextxy(400, 410, "        B U O N");
   setcolor(12);
   outtextxy(400, 430, " D I V E R T I M E N T O");
   setcolor(10);
   outtextxy(20,350,"COLPI RIMASTI");
   tentativi();}
void presentazione(){
     do{ delay(100);
     cleardevice();
     setbkcolor(1);
     line(80+mov,250,240+mov,250);
     line(80+mov,250,40+mov,170);
     line(40+mov,170,280+mov,170);
     line(240+mov,250,280+mov,170);
     line(100+mov,170,100+mov,90);
     line(100+mov,90,140+mov,90);
     line(140+mov,90,140+mov,170);
     line(100+mov,100,140+mov,100);
     line(145+mov,170,145+mov,110);
     line(145+mov,110,185+mov,110);
     line(185+mov,110,185+mov,170);
     line(145+mov,120,185+mov,120);
     for(linea=0;linea<9;linea++){
      setcolor(4);
      line(101+mov,h,139+mov,h1);
      line(146+mov,h+20,184+mov,h1+20);
      h++;
      h1++;}
      h=91;
      h1=91;
      setcolor(15);
      for(oblo=0;oblo<7;oblo++){
       circle(85+dist+mov,210,5);
       circle(85+dist+mov,210,7);
       dist+=23;}
       dist=0;
       mov+=5;}while(mov<145);
       setcolor(4);
       circle(310,239,25);
       circle(310,239,10);
       line(310,202,310,276);
       line(270,239,350,239);
       setcolor(15);
       do{do{delay(30);
          line(310,202,310,212+colpo);
          line(270,239,280+colpo,239);
          line(310,276,310,266-colpo);
          line(350,239,340-colpo,239);
          colpo++;}while(colpo<30);
          setcolor(0);
          colpo++;}while(colpo<32);
          i1=310;
          j1=239;
          esplosione();
          raggio=0;
          for(cer=0;cer<150;cer++){
            if (cer<40)
             setcolor(15);
              else
              if(cer<100)
               setcolor(14);
               else
                setcolor(4);
           circle(310,239,raggio);
           raggio++;
           delay(10);}
           delay(200);
          sfarfallio();
          cleardevice();
          raggio=0;}
void vittoria(){
   setbkcolor(0);
   for(finale=0;finale<150;finale++){
    cleardevice();
    setcolor(4);
    circle(320,240,ragg);
    if(ragg>100){
    circle(320,240,raggi);
    raggi++;}
    ragg++;
    line(320,240,320+rag,240);
    line(320,240,320-rag,240);
    line(320,240,320,240+rag);
    line(320,240,320,240-rag);
    rag++;
    delay(60);
    }
   for(car=0;car<180;car++){
   setcolor(15);
   line(140,240,140+caric,240);
   line(500,240,500-caric,240);
   line(320,60,320,60+caric);
   line(320,420,320,420-caric);
   caric++;
   delay(10);}
   caric=0;}
void youwin(){
   caric=0;
   cleardevice();
   setbkcolor(0);
   randomize();
   for(car=0;car<500;car++){
   caso=random(600)+1;
   caso1=random(420)+1;
   caric=random(16);
   setcolor(caric);
   outtextxy(caso,caso1,"YOU WIN");
   delay(5); }}
void gameover(){
    caric=0;
   cleardevice();
   setbkcolor(0);
   randomize();
   for(car=0;car<500;car++){
   caso=random(600)+1;
   caso1=random(420)+1;
   caric=random(16);
   setcolor(caric);
   outtextxy(caso,caso1,"GAME OVER");
   delay(5); }}
void naval(){
    for(mi=0;mi<220;mi++){
     setcolor(4);
     line(0+all,0,0+all,480);
     all++;
     delay(20);}
     all=0;
     all=0;
     for(mi=0;mi<220;mi++){
     setcolor(2);
     line(640-all,0,640-all,480);
     all++;
     delay(20);}
     all=0;
     setcolor(4);
     outtextxy(258,238,"NAVAL BATTLE");
     outtextxy(247,252,"UNITI PER LA PATRIA");
     sleep(2);
     cleardevice();
     }

   void cancella(){
     canc=0;
     for(sparo=0;sparo<87;sparo++){
     setcolor(1);
     line(21,387+canc,339,387+canc);
     canc++;}}
   int main(){
   int gdriver=DETECT, gmode, errorcode,lin,a=20,b=20;
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if(errorcode !=grOk){
   cout<<"graphics error"<<grapherrormsg(errorcode);
   getch();
   exit(1);
   }
   presentazione();
   naval();
   setbkcolor(1);
   i1=40;
   j1=40;
   a=60;
   b=60;
   setcolor(14);
   rectangle(20,340,340,20);
   for(lin=0;lin<8;lin++){
   line(a, 340, b, 20);
   b+=40;
   a+=40;}
   a=20;
   b=20;
   for(lin=0;lin<8;lin++){
   line(340, a, 20, b);
   b+=40;
   a+=40;}
   mirino(colore);
   randomize();
   for(i=0;n<8;n++){
   if(n==0){
    j=0;
    i=0;}
   do{i=random(8)+1;
   j=random(8)+1;
   i=i*40;
   j=j*40;
   }while(m[i][j]==5);
   m[i][j]=5;
   }
   m[360][40]=8;
   colore=4;
   do{mirino(colore);
      sposta[1]=getch();
      if(sposta[1]==80){
        j1+=40;
        colore=4;
        mirino(colore);
        cont++;
        cancella();}
        else
        if(sposta[1]==72){
         j1-=40;
         colore=4;
         mirino(colore);
         cont--;
         cancella();}
         else
         if(sposta[1]==77){
          i1+=40;
          colore=4;
          mirino(colore);
          contd++;
          cancella();}
          else
          if(sposta[1]==75){
           i1-=40;
           colore=4;
           mirino(colore);
           contd--;
           cancella();}
            if(sposta[1]==13)
            if(((cont<9)&&(cont>0))&&((contd<9)&&(contd>0))){
            if((m[i1][j1]==7)||(m[i1][j1]==6)){
                 preso++;
               cancella();
               setcolor(12);
               outtextxy(30,420,"Ma che sei sordo hai gia sparato li!!!");}
             else
              if(m[i1][j1]==5){
               preso++;
               setcolor(12);
               outtextxy(30,420,"Ahhh!!!Colpito al cuore!!!");
               m[i1][j1]=7;
               esplosione();
               nave();
               onde();
               ca++;}
               else{
                 preso++;
               m[i1][j1]=6;
                setcolor(12);
               outtextxy(30,420,"Fallito!!!Ma no picarte adesso!!!");
               onde();}}
               else
               if(m[i1][j1]!=8){
                preso++;
                setcolor(12);
                outtextxy(30,420,"Ehiii bell'uomo ma dove spari?!?");}
                else
                outtextxy(30,420,"CIAO!!!CIAO!!!CIAO!!!");
                }while(((m[i1][j1]!=8)&&(ca<8))&&(preso<60)||(sposta[1]!=13));
   if(ca==8){
    vittoria();
    sfarfallio();
    youwin();}
    else{
     vittoria();
     sfarfallio();
     gameover();}
   getcolor;
   getch();
   closegraph();
   return 0;}