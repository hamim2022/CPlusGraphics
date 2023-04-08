
#include<graphics.h>
#include<iostream>
using namespace std;


void mosque();
void apartment();
void media();
void bike ();
void watch();

name()
{
     //MD

    //M
   line(30,30,30,80);
   line(30,30,45,60);
   line(45,60,60,30);
   line(60,30,60,80);


   //D
   line(70,30,70,80);
   ellipse(70,55,-90,90,25,25);

   //ZUBAIR

   //Z
   line(130,30,175,30);
   line(175,30,130,80);
   line(130,80,175,80);

   //U
   line(185,30,185,70);
   line(215,30,215,70);
   ellipse(200,70,180,360,15,15);

   //B
   line(225,30,225,80);
   ellipse(225,43,-90,90,22,15);
   ellipse(225,70,-90,90,22,15);

   //A
   line(275,30,255,80);
   line(275,30,295,80);
   line(265,53,285,53);

     //I
   line(310,30,310,80);
   line(305,30,315,30);
   line(305,80,315,80);



   //R
   line(330,30,330,80);
   ellipse(330,45,-90,90,22,15);
   line(330,55,350,80);



   //HOSSAIN

   //H
   line(390,30,390,80);
   line(390,55,410,55);
   line(410,30,410,80);

   //O
   circle(440,55,25);

   //S
   ellipse(495,45,70,-130,25,15);
   ellipse(480,70,-110,100,25,15);

   //S
   ellipse(530,45,70,-130,25,15);
   ellipse(515,70,-110,100,25,15);

   //A
   line(570,30,590,80);
   line(570,30,550,80);
   line(560,53,580,53);


   //I
   line(605,30,605,80);
   line(600,30,610,30);
   line(600,80,610,80);

   //N
   line(625,30,625,80);
   line(625,30,645,80);
   line(645,30,645,80);

   //HAMIM

   //H
   line(670+35,30,670+35,80);
   line(670+35,55,695+35,55);
   line(695+35,30,695+35,80);

   //A
   line(765,30,745,80);
   line(765,30,785,80);
   line(755,53,775,53);

   //M
   line(795,30,795,80);
   line(795,30,815,60);
   line(815,60,830,30);
   line(830,30,830,80);

     //I
   line(845,30,845,80);
   line(840,30,850,30);
   line(840,80,850,80);

   //M
   line(795+65,30,795+65,80);
   line(795+65,30,815+65,60);
   line(815+65,60,830+65,30);
   line(830+65,30,830+65,80);




   //C
   ellipse(100,140,70,-70,25,25);

   //S
   ellipse(142,130,70,-130,25,15);
   ellipse(130,155,-110,100,25,15);

   //E
   line(165,110,165,170);
   line(165,110,200,110);
   line(165,140,190,140);
   line(165,170,200,170);


   //2
   ellipse(230,140,-80,85,25,25);
   line(232,164,265,166);

   //00
   ellipse(300,140,0,360,25,29);
    ellipse(360,140,0,360,25,29);

    //1
    line(400,110,400,170);
    line(400,110,393,113);

    //0
     ellipse(440,140,0,360,25,29);

      //1
    line(480,110,480,170);
    line(480,110,473,113);

    //9

   ellipse(510,140,-90,70,25,30);
    ellipse(513,125,0,360,10,15);

     //0
     ellipse(580,140,0,360,25,29);


     //2
   ellipse(620,140,-80,85,25,25);
   line(622,164,655,166);


    //3
     ellipse(680,130,-120,120,15,15);
      ellipse(680,155,-120,120,15,15);






}

void mosque(){

    initwindow(1500,1000);
    name();

    //Baseline

   setcolor(LIGHTGRAY);
   line(100,800,800,800);
   line(100,810,800,810);
   line(100,800,100,810);
   line(800,800,800,810);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(102,805,LIGHTGRAY);

    settextstyle(10,0,7);
    setcolor(WHITE);
    outtextxy(150,820,"Ramadan Mubarak");

   //1st miner
   setcolor(DARKGRAY);
   line(120,800,120,500);
   line(180,800,180,500);
   ellipse(150,500,0,180,30,50);
   setfillstyle(INTERLEAVE_FILL,DARKGRAY);

   line(120,500,180,500);
   line(120,520,180,520);

   line(110,525,190,525);
   line(110,530,190,530);

   line(110,525,110,530);
   line(190,525,190,530);

   rectangle(130,550,170,580);
   floodfill(135,560,DARKGRAY);

   rectangle(245,690,285,800);
   floodfill(246,700,DARKGRAY);



   //2nd miner
   line(780,800,780,500);
   line(720,800,720,500);
   ellipse(750,500,0,180,30,50);

   line(780,500,720,500);
   line(780,520,720,520);

   line(790,525,710,525);
   line(790,530,710,530);

   line(790,525,790,530);
   line(710,525,710,530);

   rectangle(730,550,770,580);
   floodfill(732,560,DARKGRAY);

   rectangle(615,690,655,800);
   floodfill(617,700,DARKGRAY);


   //midpoint
   line(350,800,350,600);
   line(550,800,550,600);

   rectangle(330,578,570,600);
   setcolor(LIGHTGRAY);
   ellipse(450,485,0,180,5,20);
   line(445,485,455,485);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(450,483,LIGHTGRAY);


   setcolor(LIGHTGRAY);

   ellipse(450,560,-15,195,110,80);
   line(330,578,570,578);
   setfillstyle(SOLID_FILL,LIGHTGRAY);
   floodfill(450,550,LIGHTGRAY);





   line(180,650,350,650);
   line(550,650,720,650);

   setcolor(CYAN);
   rectangle(415,710,485,800);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(417,720,CYAN);




   //Moon

   setcolor(WHITE);
   arc(180,300,163,23,45);
   arc(180,290,180,0,43);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(180,334,WHITE);

   //star

     settextstyle(10,0,4);
    setcolor(WHITE);
    outtextxy(175,297,"*");


}

void apartment(){
    initwindow(1500,1000);
    name();

    //baseline
    setcolor(LIGHTRED);
   rectangle( 150,730,760,750);
   setfillstyle(SOLID_FILL,RED);
   floodfill(152,740,LIGHTRED);


   setcolor(3);
   //main box
   rectangle(160,300,750,730);
   setfillstyle(SOLID_FILL,7);
   floodfill(162,305,CYAN);


   //top line
   setcolor(DARKGRAY);
   line(170,250,740,250);
   line(170,250,160,300);
   line(750,300,740,250);
   line(160,300,750,300);
   setfillstyle(HATCH_FILL,DARKGRAY);
   floodfill(170,255,DARKGRAY);

   int i =0;
   int j = 20;

   //room serial 1
  /* rectangle(195,315,295,410);
   rectangle(195+130,315,295+130,410);
   rectangle(195+130+130,315,295+130+130,410);
   rectangle(195+130+130+130,315,295+130+130+130,410);*/

   // Serial 1

   for (i=0;i<=450;i+=110)
   {
       setcolor(YELLOW);
       rectangle(195+i,315,295+i,400);
       i+=30;
       setfillstyle(INTERLEAVE_FILL,LIGHTCYAN);
       floodfill(197+i,320,YELLOW);
   }
    // serial 2

   for (i=0;i<=450;i+=110)
   {
       rectangle(195+i,415,295+i,500);
       i+=30;
       setfillstyle(INTERLEAVE_FILL,LIGHTCYAN);
       floodfill(197+i,420,YELLOW);
   }

   //Serial 3

   for (i=0;i<=340;i+=110)
   {
       rectangle(195+i,515,295+i,600);
       i+=30;
       setfillstyle(INTERLEAVE_FILL,LIGHTCYAN);
       floodfill(197+i,520,YELLOW);
   }

   //Door
   setcolor(LIGHTRED);
   rectangle(600,515,730,725);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(620,530,LIGHTRED);

   //Tree






   setcolor(LIGHTGREEN);
   ellipse(950,730,0,360,50,30);;
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(953,730,LIGHTGREEN);



   setcolor(BROWN);
   rectangle(940,500,960,730);
   setfillstyle(INTERLEAVE_FILL,BROWN);
   floodfill(942,520,BROWN);

    setcolor(LIGHTGREEN);
   ellipse(950,500,0,360,110,140);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(953,500,LIGHTGREEN);


   //sun

   setcolor(YELLOW);
   circle(800,180,40);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(800,180,YELLOW);





}

void media(){


    initwindow(1500,1000);
    name();

       //facebook
   settextstyle(10,0,4);
    setcolor(WHITE);

   outtextxy(100,500,"Facebook Logo");


   setcolor(BLUE);
   rectangle(150,250,320,450);
   setfillstyle(SOLID_FILL,LIGHTBLUE);
   floodfill(151,251,BLUE);






   setcolor(WHITE);
   rectangle(220,320,240,400);

   setfillstyle(SOLID_FILL,WHITE);
   floodfill(222,398,WHITE);




   setcolor(WHITE);
   rectangle(200,320,220,340);

   setfillstyle(SOLID_FILL,WHITE);
   floodfill(201,322,WHITE);

   setcolor(WHITE);
   rectangle(240,320,260,340);

   setfillstyle(SOLID_FILL,WHITE);
   floodfill(241,322,WHITE);



   setcolor(WHITE);

   arc(259,320,85,180,40);
   arc(259,320,80,180,20);

   line(260,280,260,300);
   line(220,320,240,320);

   setfillstyle(SOLID_FILL,WHITE);
   floodfill(259,281,WHITE);


   //whatsapp
   settextstyle(10,0,4);
    setcolor(WHITE);

   outtextxy(450,500,"Whatsapp Logo");



    setcolor(WHITE);

   rectangle(450,250,650,450);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(455,255,WHITE);


   setcolor(LIGHTGREEN);

   arc(550,350,260,230,60);
    line(510,390,495,420);
     line(554,408,495,420);

     circle(550,350,45);
     setfillstyle(SOLID_FILL,LIGHTGREEN);
   floodfill(510,395,LIGHTGREEN);


   setcolor(LIGHTGREEN);

   line(530,330,550,370);
   line(545,330,565,370);
   line(530,330,545,330);
   line(550,370,565,370);

   setfillstyle(SOLID_FILL,LIGHTGREEN);
   floodfill(533,333,LIGHTGREEN);


   rectangle(530,320,553,330);
   rectangle(552,370,573,380);
   floodfill(553,373,LIGHTGREEN);
   floodfill(533,323,LIGHTGREEN);


}

void bike()
{
    initwindow(1500,1000);
    name();






    ///back wheel
    circle(300, 500, 10);
    setfillstyle(1, 1);
    floodfill(300, 500, WHITE);
    ellipse(300, 500, 30, 340, 50, 50);
    ellipse(300, 500, 20, 345, 70, 70);

    line(340,475, 365, 475 );
    line(342,518, 370, 518 );
    /// rectangle
    rectangle(325, 490,385 ,510);
    setfillstyle(1, 2);
    floodfill(245, 500, WHITE);
    setfillstyle(1, 2);
    floodfill(330, 500, WHITE);



    ///
    ///front wheel
    circle(600, 500, 10);
    setfillstyle(1, 1);
    floodfill(600, 500, WHITE);
    ellipse(600, 500, 145, 100, 50, 50);
    ellipse(600, 500, 145, 100, 70, 70);

    line(590,460, 590, 430 );
    line(560,480, 540, 460 );
    setfillstyle(1, 2);
    floodfill(655, 500, WHITE);

    ///bike front iron
    line(590, 480, 560, 380);
    line(580, 480, 550, 380);
    line(550, 380, 560, 380);
    line(590, 480, 580, 480);
    setfillstyle(1, 5);
    floodfill(555, 382, WHITE);

    ///body back

    ellipse(300, 500, 0, 90, 140, 150);
    ellipse(300, 500, 0, 90, 140, 130);
    line(300,350, 300, 370);
    setfillstyle(1, 5);
    floodfill(305, 355, WHITE);

    ///front body
    setcolor(GREEN);
    ellipse(600, 500, 120, 180, 100, 100);
    line( 440 ,500, 500, 500);

    //line( );
    ellipse(300, 500, 0, 90, 140, 150);
    ellipse(400, 500, 55, 105, 250, 150);

    line(540, 370, 550, 430);
    setfillstyle(1, 7);
    floodfill(500, 380, GREEN);
    ///flag

    setcolor(BLUE);
    rectangle(430, 380, 500, 420);
    setfillstyle(1, 2);
    floodfill(432,382, BLUE);
    circle(460, 400, 15);
    setfillstyle(1, RED);
    floodfill(460,400, BLUE);
    ///end flag
    ///normal cicle

    setcolor(YELLOW);
    circle(460, 470, 15);
    setfillstyle(1, BLUE);
    floodfill(460,480, YELLOW);



    setcolor(GREEN);


    /// Handle

    rectangle(520, 330, 600, 360);
    ellipse(500, 330, 0, 70, 100, 30);
    ellipse(500, 330, 0, 70, 100, 50);
    line(535,310, 535, 280);
    setfillstyle(1, 13);
    floodfill(530, 340, GREEN);
    floodfill(537, 301, GREEN);







}

void watch()
{
    initwindow(1300,700);

    setcolor(DARKGRAY);

    ellipse(500, 320,60, 120, 180, 180 );
    line(410,160,590,160);
     setfillstyle(INTERLEAVE_FILL,CYAN);
     floodfill(500,142,DARKGRAY);

     rectangle(410,160, 590, 270 );
     floodfill(415,170,DARKGRAY);




      setcolor(LIGHTGRAY);

    rectangle(410,470, 590, 580 );
    line(410,470,590,470);
    setfillstyle(INTERLEAVE_FILL,CYAN);
     floodfill(412,475,LIGHTGRAY);

    ellipse(500, 420,240, 300, 180, 180 );
    floodfill(500,598,LIGHTGRAY);

   setcolor(MAGENTA);
   circle(500,370,150);
   setfillstyle(SOLID_FILL,BROWN);
     floodfill(352,370,MAGENTA);

    setcolor(LIGHTBLUE);
    circle(500,370,130);
    setfillstyle(SOLID_FILL,WHITE);
     floodfill(372,370,LIGHTBLUE);
     setcolor(LIGHTGREEN);
     rectangle(430,360,500,380);
     setfillstyle(SOLID_FILL,RED);
     floodfill(431,362,LIGHTGREEN);

     setcolor(BLACK);
     rectangle(490,280,510,360);
     setfillstyle(SOLID_FILL,LIGHTRED);
     floodfill(492,282,BLACK);

}

int main() {
    int gd = DETECT, gm;
   initgraph(&gd,&gm, "");


   setactivepage(0);
   int z;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++ "<< endl;
    cout << "MD ZUBAIR HOSSAIN HAMIM\n "<< endl;
    cout << "CSE2001019023(19A)\n\n "<< endl;

   cout << "1. Mosque\n "<< endl;
   cout << "2. Apartment\n "<< endl;
   cout << "3. Social Media Icon\n "<< endl;
   cout << "4. Bike\n "<< endl;
   cout << "5. WATCH \n "<< endl;
   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++ "<< endl;

   cout << "Enter the design serial:  ";
   cin >> z;

   switch(z)
   {

   case 1:
    mosque();
    break;

    case 2:
    apartment();
    break;

    case 3:
    media();
    break;

    case 4:
        bike();
        break;
    case 5:
        watch();
        break;
   }






   getch();
   closegraph();
   return 0;
}

