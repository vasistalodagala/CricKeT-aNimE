	                                                     //          FILE 2 OF THE GAME CRICKET          \\

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<graphics.h>

//////////////////////////////// GLOBAL VARIABLES \\\\\\\\\\\\\\\\\\\\\\\\\\\\

  extern int  del , lengt , runs , runs2 , balls , wickets , overs , countr , sounds ;

  int option , number ;

  char name[25];

  /*

    option ;    to determine the result of the toss

    number ;    represents number of overs selected

    sounds ;    represents sound selection

    del ;       to set the speed of the ball

    length ;    to set the length of the ball

    runs=0 ;    represents the runs scored by the user

    wickets=0 ; represents the wickets taken

    overs=0 ;   represents the overs bowled

    runs2=0 ;   represents the runs scored by the computer

    balls=0 ;   represents the balls bowled

    name[25] ;  to take the name of the user
					       */

///////////////////////// END OF GLOBAL VARIABLES \\\\\\\\\\\\\\\\\\\\\\\\\\\

//////////////////////////// FUNCTION PROTOTYPES \\\\\\\\\\\\\\\\\\\\\\\\\\\\

  extern void autoplay();  //function of file 1 to give a chance to user to directly bat and chase

  extern void landscape(); //function of file 1 to go to main page

  extern void innings1();  //function of file 1 to begin 1st innings

  extern void innings2();  //function of file 1 to begin 2nd innings

  extern hidemouse();      //function to get hidemouse

  extern void warning();   //function of file 1 to give a warning

  extern void sound();     //function of file 1 to enable or disable sounds

  void countdown();        //function to start countdown

//////////////////////// END OF FUNCTION PROTOTYPES \\\\\\\\\\\\\\\\\\\\\\\\\

///////////////////////////////  FUNCTIONS  \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


 void youlost()
  {
    hidemouse();

    clrscr();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);     //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(WHITE);
    settextstyle(10,0,6);
    outtextxy(10,5,"BETTER");

    setcolor(GREEN);
    settextstyle(7,0,8);
    outtextxy(50,120,"LUCK");

    setcolor(GREEN);
    rectangle(46,200,255,208);
    setfillstyle(1,YELLOW);
    floodfill(47,201,GREEN);

    setcolor(LIGHTRED);
    settextstyle(4,0,8);
    outtextxy(50,212,"NEXT");

    setcolor(BLUE);
    rectangle(46,298,252,306);
    setfillstyle(1,LIGHTBLUE);
    floodfill(47,299,BLUE);

    setcolor(WHITE);
    circle(140,390,85);
    setfillstyle(1,WHITE);
    floodfill(140,390,WHITE);

    setcolor(BLACK);
    circle(140,390,75);
    setfillstyle(1,BLACK);
    floodfill(140,390,BLACK);

    setcolor(LIGHTGREEN);
    line(140,390,172,355);
    line(140,390,171,356);

    setcolor(LIGHTMAGENTA);
    line(140,390,163,422);
    line(140,390,164,422);

    setcolor(CYAN);
    line(140,390,98,404);
    line(140,390,97,404);

    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(129,313,"12");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(174,321,"1");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(191,345,"2");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(201,376,"3");
    setcolor(YELLOW);                      //numbers in a clock
    settextstyle(7,0,3);
    outtextxy(193,406,"4");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(171,431,"5");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(141,440,"6");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(110,435,"7");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(80,412,"8");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(70,377,"9");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(74,346,"10");
    setcolor(YELLOW);
    settextstyle(7,0,3);
    outtextxy(93,320,"11");

///////////////////////////////text and clock///////////////////////////////

/////////////////////////smiling face//////////////////////////////////////

    setcolor(YELLOW);
    circle(400,260,120);
    setfillstyle(1,YELLOW);
    floodfill(400,260,YELLOW);

    setcolor(BLACK);
    circle(357,202,5);
    setfillstyle(1,BLACK);
    floodfill(358,203,BLACK);

    setcolor(BLACK);
    circle(441,202,5);                   //smiling face
    setfillstyle(1,BLACK);
    floodfill(442,203,BLACK);

    setcolor(RED);
    arc(400,260,190,350,70);
    arc(401,260,190,350,70);
    arc(399,260,190,350,70);

////////////////////////smiling face//////////////////////////////////////

//////////////////////candle/////////////////////////////////////////////

    setcolor(GREEN);
    line(575,127,630,127);
    line(575,128,568,134);
    line(568,135,575,141);
    line(630,128,637,134);
    line(637,135,630,141);
    line(576,141,629,141);
    line(568,136,568,430);                 //candle
    line(637,136,637,430);
    line(637,431,639,431);
    line(568,431,566,431);
    line(566,431,566,440);
    line(639,431,639,440);
    line(567,440,638,440);

    setfillstyle(1,LIGHTCYAN);
    floodfill(599,292,GREEN);
    setfillstyle(1,BROWN);
    floodfill(592,134,GREEN);

    setcolor(LIGHTMAGENTA);
    line(602,125,580,105);
    line(580,104,602,47);
    line(603,125,625,105);
    line(625,104,603,47);
    setfillstyle(1,YELLOW);
    floodfill(603,70,LIGHTMAGENTA);

    setcolor(BLACK);
    line(577,206,577,320);
    line(578,206,578,320);
    line(583,230,583,290);
    line(584,230,584,290);
    line(602,134,602,111);
    line(603,134,603,111);

    setcolor(BROWN);
    line(595,119,595,109);
    line(596,119,596,109);
    line(598,121,598,109);
    line(599,121,599,109);
    line(605,122,605,109);
    line(606,122,606,109);
    line(608,121,608,109);
    line(609,121,609,109);

    setcolor(LIGHTRED);
    line(602,40,602,27);
    line(603,40,603,27);
    line(612,61,620,50);
    line(613,61,620,49);
    line(621,78,631,65);
    line(620,78,632,65);
    line(627,94,638,82);
    line(627,94,639,82);
    line(591,60,580,50);
    line(591,61,580,51);
    line(584,80,570,69);
    line(584,81,570,68);
    line(577,97,563,88);
    line(577,96,563,89);

//////////////////////candle/////////////////////////////////////////////

    setfillstyle(1,LIGHTGREEN);
    floodfill(43,92,WHITE);
    setfillstyle(1,LIGHTRED);
    floodfill(68,101,WHITE);
    setfillstyle(1,LIGHTBLUE);
    floodfill(134,95,WHITE);
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(190,92,WHITE);
    setfillstyle(1,LIGHTRED);
    floodfill(229,100,WHITE);
    setfillstyle(1,LIGHTGREEN);
    floodfill(280,70,WHITE);

///////////////////////////////sounds/////////////////////////////////////

   if(sounds==1)
    {

      sound(600);
      delay(400);
      sound(700);
      delay(400);
      sound(900);
      delay(500);
      sound(600);
      delay(800);
      sound(800);
      delay(800);
      sound(700);
      delay(300);
      sound(600);                     //giving a sound
      delay(800);

      sound(700);
      delay(500);
      sound(600);
      delay(400);
      sound(500);
      delay(800);

      nosound();

    }

///////////////////////////////sounds//////////////////////////////////////

   setcolor(WHITE);
   settextstyle(2,0,6);
   outtextxy(250,455,"Press any key");

   getch();

   warning();  //calling the function warning

  }

/////////////////////////////////////////////////////////////////////////////

 void youwon()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   setcolor(YELLOW);
   settextstyle(7,0,7);
   outtextxy(0,20,"CONGRAT");

   setcolor(LIGHTRED);
   settextstyle(7,0,7);
   outtextxy(295,20,"ULATIONS");

   setcolor(GREEN);
   settextstyle(7,0,7);
   outtextxy(624,20,"!");

   setcolor(MAGENTA);
   rectangle(0,87,276,95);
   setfillstyle(1,LIGHTMAGENTA);
   floodfill(1,88,MAGENTA);

   setcolor(LIGHTRED);
   rectangle(290,87,614,95);
   setfillstyle(1,YELLOW);
   floodfill(291,88,LIGHTRED);

   setcolor(BLUE);
   rectangle(620,87,637,95);
   setfillstyle(1,LIGHTBLUE);
   floodfill(621,88,BLUE);

//////////////////////////////lamp////////////////////////////////////////////

   setcolor(BLACK);
   rectangle(9,188,141,394);
   setfillstyle(1,BLACK);
   floodfill(10,189,BLACK);


   setcolor(GREEN);
   line(30,281,120,281);
   line(30,282,45,320);
   line(120,282,105,320);
   line(46,320,104,320);
   setfillstyle(1,LIGHTGREEN);
   floodfill(60,285,GREEN);

   setcolor(BLUE);
   line(45,321,105,321);
   line(45,322,55,350);
   line(105,322,95,350);
   line(56,350,94,350);
   setfillstyle(1,LIGHTBLUE);
   floodfill(60,340,BLUE);

   setcolor(LIGHTGRAY);
   line(67,351,83,351);
   line(67,352,67,380);
   line(83,352,83,380);
   line(66,380,50,380);
   line(84,380,100,380);
   line(50,381,50,390);
   line(100,381,100,390);
   line(51,390,99,390);
   setfillstyle(1,LIGHTGRAY);
   floodfill(73,380,LIGHTGRAY);


   setcolor(BROWN);
   line(30,280,120,280);
   line(30,279,14,243);
   line(14,244,33,258);
   line(34,258,23,222);
   line(24,222,45,245);
   line(45,245,43,209);
   line(44,209,60,242);
   line(61,242,74,193);
   line(74,194,85,242);
   line(86,242,102,211);
   line(102,211,103,248);
   line(104,248,121,220);
   line(121,221,119,259);
   line(120,279,136,243);
   line(136,244,119,260);
   setfillstyle(1,YELLOW);
   floodfill(71,261,BROWN);

   setcolor(LIGHTRED);
   line(21,254,29,267);
   line(22,254,30,267);
   line(30,234,37,251);
   line(31,234,38,251);
   line(46,222,50,240);
   line(47,222,51,240);
   line(72,216,66,240);
   line(73,216,67,240);
   line(98,229,92,241);
   line(99,229,93,241);
   line(116,234,107,251);
   line(117,234,107,251);
   line(126,258,119,272);
   line(127,258,120,272);
   line(64,275,60,267);
   line(70,274,66,266);
   line(74,274,74,266);
   line(78,274,82,266);
   line(84,274,88,266);

   int lam;
   void*lamp;
   lam=imagesize(9,188,141,394);
   lamp=malloc(lam);
   getimage(9,188,141,394,lamp);
   putimage(490,188,lamp,XOR_PUT);

   setcolor(GREEN);
   settextstyle(7,0,8);
   outtextxy(145,100,"YOU");

   setcolor(LIGHTBLUE);
   settextstyle(7,0,8);
   outtextxy(332,100,"WON");

   setcolor(LIGHTMAGENTA);
   settextstyle(7,0,8);
   outtextxy(525,100,"!");

   setcolor(BLUE);
   rectangle(136,182,286,190);
   setfillstyle(1,LIGHTBLUE);
   floodfill(137,183,BLUE);

   setcolor(GREEN);
   rectangle(325,182,485,190);
   setfillstyle(1,LIGHTGREEN);
   floodfill(326,183,GREEN);

   setcolor(LIGHTRED);
   rectangle(512,182,538,190);
   setfillstyle(1,YELLOW);
   floodfill(513,183,LIGHTRED);

//////////////////////////////cup//////////////////////////////////////////

   setcolor(BROWN);
   line(319,233,278,286);
   line(320,233,361,286);
   line(268,287,371,287);
   line(278,288,300,368);
   line(361,288,339,368);
   line(301,369,338,369);
   line(371,288,357,307);
   line(268,288,282,307);

   setcolor(LIGHTGRAY);
   line(314,370,325,370);
   line(314,371,314,390);
   line(325,371,325,390);
   line(314,391,297,391);
   line(325,391,342,391);
   line(297,392,297,399);
   line(342,392,342,399);
   line(298,399,341,399);
   setfillstyle(1,YELLOW);
   floodfill(316,313,BROWN);

   setfillstyle(1,YELLOW);
   floodfill(322,268,BROWN);

   setfillstyle(1,YELLOW);
   floodfill(363,292,BROWN);

   setfillstyle(1,YELLOW);
   floodfill(276,292,BROWN);

   setfillstyle(1,LIGHTGRAY);
   floodfill(320,394,LIGHTGRAY);

   setcolor(BLACK);
   line(292,300,301,338);
   line(293,300,302,338);
   line(301,308,305,328);
   line(302,308,306,328);
   line(315,248,296,273);
   line(316,248,297,273);
   line(316,256,304,271);
   line(317,256,305,271);
   line(317,375,317,386);
   line(318,375,318,386);

   setcolor(RED);
   circle(319,225,8);
   setfillstyle(1,LIGHTRED);
   floodfill(319,225,RED);

/////////////////////////////////cup/////////////////////////////////////

   setcolor(BROWN);
   line(40,427,165,427);
   line(40,455,165,455);
   line(40,428,30,441);
   line(40,455,30,442);
   line(165,428,173,436);
   line(165,454,173,446);
   line(173,437,173,445);
   setfillstyle(1,YELLOW);
   floodfill(150,440,BROWN);

   setcolor(GREEN);
   rectangle(174,436,230,446);
   setfillstyle(1,LIGHTGREEN);
   floodfill(175,437,GREEN);

   setcolor(LIGHTRED);
   settextstyle(7,0,4);
   outtextxy(113,420,"Rbk");

   setcolor(LIGHTMAGENTA);
   circle(565,446,15);
   setfillstyle(1,RED);
   floodfill(565,446,LIGHTMAGENTA);

   setcolor(WHITE);
   circle(565,446,13);
   circle(565,446,11);

 if(sounds==1)
  {
   for(int i=0;i<7000;i+=100)
   {
    sound(i);

    delay(100);
   }

   for(i=7000;i>0;i-=100)
   {
    sound(i);

    delay(100);
   }

   nosound();
  }

   setcolor(WHITE);
   settextstyle(2,0,6);
   outtextxy(250,455,"Press any key");

   getch();

   warning();    //calling function warning after youwon screen change

  }



////////////////////////////////////////////////////////////////////////////

void tosslose()
  {
    option=3;

    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);           //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(40,40,"U");
    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(110,40,"LOST");
    setcolor(YELLOW);
    settextstyle(7,0,7);
    outtextxy(300,40,"THE");
    setcolor(BLUE);
    settextstyle(7,0,7);
    outtextxy(480,40,"TOSS");

    setcolor(BLUE);
    rectangle(30,107,73,113);         //underline
    setfillstyle(1,LIGHTBLUE);
    floodfill(31,108,BLUE);

    setcolor(YELLOW);
    rectangle(104,107,252,113);       //underline
    setfillstyle(1,YELLOW);
    floodfill(105,108,YELLOW);

    setcolor(RED);
    rectangle(291,107,433,113);      //underline
    setfillstyle(1,LIGHTRED);
    floodfill(292,108,RED);

    setcolor(GREEN);
    rectangle(473,107,633,113);      //underline
    setfillstyle(1,LIGHTGREEN);
    floodfill(474,108,GREEN);

    setcolor(BLUE);
    settextstyle(7,0,9);
    outtextxy(80,130,"U");
    setcolor(LIGHTRED);
    settextstyle(7,0,9);
    outtextxy(180,130,"HAVE");
    setcolor(GREEN);
    settextstyle(7,0,9);
    outtextxy(500,130,"TO");

    setcolor(GREEN);
    rectangle(70,232,130,238);          //underline
    setfillstyle(1,LIGHTGREEN);
    floodfill(71,233,GREEN);

    setcolor(BLUE);
    rectangle(174,232,440,238);          //underline
    setfillstyle(1,LIGHTBLUE);
    floodfill(175,233,BLUE);

    setcolor(RED);
    rectangle(490,232,603,238);           //underline
    setfillstyle(1,LIGHTRED);
    floodfill(491,233,RED);


    setcolor(GREEN);
    rectangle(345,360,420,372);           //underline
    setfillstyle(1,LIGHTGREEN);
    floodfill(346,361,GREEN);

    setcolor(BROWN);
    line(421,360,421,372);
    line(421,359,433,340);
    line(421,373,433,392);
    line(434,340,580,340);              //image
    line(434,392,580,392);
    line(580,341,600,366);
    line(580,391,600,365);
    setfillstyle(1,YELLOW);
    floodfill(508,365,BROWN);

    setcolor(RED);
    settextstyle(7,0,6);
    outtextxy(455,332,"BAT");

    int i;
  for(i=1;i<=10;i++)
   {

   if((i%2)!=0)
    {
    setcolor(MAGENTA);
    circle(140,350,100);               //ball
    setfillstyle(1,RED);
    floodfill(140,350,MAGENTA);

    setcolor(WHITE);                   //grips of the ball
    circle(140,350,95);
    circle(140,350,90);

    setcolor(YELLOW);
    settextstyle(7,0,7);
    outtextxy(55,310,"BOWL");
    }
   if((i%2)==0)
    {
    setcolor(MAGENTA);
    circle(140,350,100);                //ball
    setfillstyle(1,GREEN);
    floodfill(140,350,MAGENTA);

    setcolor(WHITE);
    circle(140,350,95);                 //grips of the ball
    circle(140,350,90);

    setcolor(RED);
    settextstyle(7,0,7);
    outtextxy(55,310,"BOWL");
   }
  delay(200);
 }
    setcolor(WHITE);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");

  getch();

  clrscr();

  countdown();    //proceed to next screen change

  }

////////////////////////////////////////////////////////////////////////////

 void controls()
   {
     clrscr();

     hidemouse();

     cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(YELLOW);
    rectangle(0,0,640,480);
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(75,0,"INSTRU");

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(334,0,"CTIONS");

    setcolor(GREEN);
    rectangle(68,65,319,72);
    setfillstyle(1,LIGHTGREEN);
    floodfill(69,66,GREEN);

    setcolor(RED);
    rectangle(329,65,568,72);
    setfillstyle(1,LIGHTRED);
    floodfill(330,66,RED);

    setcolor(DARKGRAY);
    circle(18,110,5);
    setfillstyle(1,LIGHTGRAY);
    floodfill(18,110,DARKGRAY);

    setcolor(LIGHTBLUE);
    settextstyle(1,0,3);
    outtextxy(61,87,"It is a user defined over match with ");
    outtextxy(61,127,"the opposite team being the computer .");

    setcolor(DARKGRAY);
    circle(18,190,5);
    setfillstyle(1,LIGHTGRAY);
    floodfill(18,190,DARKGRAY);

    setcolor(GREEN);
    settextstyle(1,0,4);
    outtextxy(61,167,"You can play 6 shots . When you ");
    outtextxy(61,207,"are bowling you can fix your length");
    outtextxy(61,247,"and speed .");

    setcolor(DARKGRAY);
    circle(18,305,5);
    setfillstyle(1,LIGHTGRAY);
    floodfill(18,305,DARKGRAY);

    setcolor(LIGHTRED);
    settextstyle(1,0,4);
    outtextxy(61,282,"The white circles are the fielders .");
    outtextxy(61,322,"It is advisable for the batsman to");
    outtextxy(61,362,"run only after the ball crosses the");
    outtextxy(61,402,"30-yard circle .");

    setcolor(BLACK);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");

    getch();

    setcolor(BLACK);
    rectangle(0,0,640,480);
    setfillstyle(1,BLACK);
    floodfill(100,100,BLACK);

    setcolor(YELLOW);
    rectangle(0,0,640,480);
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(150,0,"CONT");
    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(308,0,"ROLS");

    setcolor(GREEN);
    rectangle(148,66,300,73);
    setfillstyle(1,LIGHTGREEN);
    floodfill(149,67,GREEN);

    setcolor(RED);
    rectangle(304,66,460,73);
    setfillstyle(1,LIGHTRED);
    floodfill(305,67,RED);

    setcolor(LIGHTRED);
    settextstyle(7,0,5);
    outtextxy(95,75,"WHILE");
    setcolor(GREEN);
    settextstyle(7,0,5);
    outtextxy(284,75,"BATTING");

    setcolor(GREEN);
    rectangle(90,119,235,127);
    setfillstyle(1,LIGHTGREEN);
    floodfill(91,120,GREEN);

    setcolor(RED);
    rectangle(282,119,476,126);
    setfillstyle(1,LIGHTRED);
    floodfill(283,120,RED);

    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(20,143,"CLICK");

    setcolor(MAGENTA);
    settextstyle(1,0,5);
    outtextxy(210,143,"STRAIGHT DRIVE");

    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(20,195,"CLICK");

    setcolor(GREEN);
    settextstyle(1,0,5);
    outtextxy(210,195,"DEFENCE");


    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(20,250,"CLICK");

    setcolor(CYAN);
    settextstyle(1,0,5);
    outtextxy(210,250,"PULLSHOT");


    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(20,300,"CLICK");

    setcolor(MAGENTA);
    settextstyle(1,0,5);
    outtextxy(210,300,"SQUARE CUT");


    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(20,350,"CLICK");

    setcolor(GREEN);
    settextstyle(1,0,5);
    outtextxy(210,350,"LONG OFF SHOT");


    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(20,400,"CLICK");

    setcolor(CYAN);
    settextstyle(1,0,5);
    outtextxy(210,400,"LONG ON SHOT");

    setcolor(BLACK);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");

    getch();

    clrscr();

    landscape(); //to go back to main page

  }


////////////////////////////////////////////////////////////////////////////

void aboutus()
 {

  clrscr();

  hidemouse();

  cleardevice();

  setcolor(BLACK);
  rectangle(0,0,640,480);            //to set blank screen
  setfillstyle(1,BLACK);
  floodfill(1,1,BLACK);

  setcolor(YELLOW);
  rectangle(0,0,640,480);
  setfillstyle(1,YELLOW);           //background colour
  floodfill(1,1,YELLOW);

  setcolor(LIGHTRED);
  settextstyle(7,0,7);
  outtextxy(140,0,"ABOUT");

  setcolor(LIGHTBLUE);
  settextstyle(7,0,7);
  outtextxy(360,0," US");

  setcolor(GREEN);
  rectangle(140,70,335,75);             //underline
  setfillstyle(1,LIGHTGREEN);
  floodfill(141,71,GREEN);

  setcolor(RED);
  rectangle(390,70,475,75);             //underline
  setfillstyle(1,LIGHTRED);
  floodfill(391,71,RED);

  setcolor(GREEN);
  settextstyle(7,0,5);
  outtextxy(30,120,"VASISTA  GAMES");

  setcolor(LIGHTBLUE);
  settextstyle(7,0,5);
  outtextxy(420,120,"  is a");

  setcolor(LIGHTBLUE);
  settextstyle(7,0,5);
  outtextxy(30,195,"renowned gaming studio .");

  setcolor(LIGHTMAGENTA);
  settextstyle(7,0,5);
  outtextxy(30,270,"This game is developed");

  setcolor(LIGHTRED);
  settextstyle(7,0,5);
  outtextxy(30,345,"by VASISTA GAMES . ");

  setcolor(BLUE);
  settextstyle(7,0,5);
  outtextxy(170,405,"enjoy gaming . . . ");

  setcolor(BLACK);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");

    getch();

    landscape();

}

//////////////////////////////////////////////////////////////////////////////

 void credits()
  {
    cleardevice();

  setcolor(BLACK);
  rectangle(0,0,640,480);     //to set a blank screen
  setfillstyle(1,BLACK);
  floodfill(1,1,BLACK);


  setlinestyle(DOTTED_LINE,5,3);

  setcolor(BLACK);
  rectangle(0,0,640,480);     //box
  setfillstyle(1,BLACK);
  floodfill(1,1,BLACK);

  setcolor(LIGHTRED);
  rectangle(40,70,615,210);
  rectangle(39,69,616,211);       //first color for the box
  rectangle(38,68,617,212);
  rectangle(37,67,618,213);

  setcolor(GREEN);

  rectangle(41,71,614,209);
  rectangle(42,72,613,208);
  rectangle(43,73,612,207);      //second colour for the box
  rectangle(44,74,611,206);
  setfillstyle(1,YELLOW);
  floodfill(45,75,GREEN);

  setlinestyle(SOLID_LINE,1,3);


  setcolor(LIGHTBLUE);
  settextstyle(7,0,6);
  outtextxy(44,74,"ACKNOWLEDGEMENT");

  setcolor(MAGENTA);
  settextstyle(7,0,6);
  outtextxy(430,135,"TEAM");

   setcolor(LIGHTRED);
   rectangle(50,130,595,135);

   setlinestyle(SOLID_LINE,5,3);

  setcolor(YELLOW);
  settextstyle(1,0,5);
  outtextxy(240,305,"loading");
  setcolor(LIGHTGREEN);
  rectangle(208,360,410,380);

  for(int i=211;i<407;i++)
   {
    setcolor(LIGHTGREEN);
    rectangle(i,363,i,377);        //showing the loading process
    setfillstyle(1,LIGHTGREEN);
    floodfill(i+1,364,LIGHTGREEN);

    delay(20);
   }

     cleardevice();

//////////////////////////////////////////////////////////////////////

   int j;

    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(110,70,"MY");

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(250,70,"SINCERE");

    setcolor(BROWN);
    settextstyle(7,0,7);
    outtextxy(110,270,"THANKS");

    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(450,270,"TO");

    setlinestyle(CENTER_LINE,1,3);
    setcolor(LIGHTGREEN);                 //underline
    rectangle(105,140,195,140);

    setlinestyle(DOTTED_LINE,1,3);
    setcolor(LIGHTBLUE);                  //underline
    rectangle(245,140,545,140);

    setlinestyle(DASHED_LINE,1,3);
    setcolor(LIGHTMAGENTA);               //underline
    rectangle(105,340,385,340);

    setlinestyle(SOLID_LINE,1,3);
    setcolor(YELLOW);                     //underline
    rectangle(445,340,520,340);

    delay(2000);

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);               //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);


    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(130,i,"MY");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(250,j,"PARENTS");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"PRUSTY");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,240,"SIR");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(200,j,"SWAMI");

      cleardevice();
     }


    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,5);
      outtextxy(60,i,"AADARSH");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,5);
      outtextxy(280,j,"SUBRAMANIAM");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"ANJAN");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"MITRA");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,5);
      outtextxy(60,i,"ARAVIND");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,5);
      outtextxy(280,j,"NIDADAVOLU");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"BALMUKUND");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"KUMAR");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,6);
      outtextxy(40,i,"BHARADWAJ");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,6);
      outtextxy(400,j,"AVS");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"GANESH");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"REDDY");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(100,i,"SAI");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(280,j,"PRAMOD");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"SATYAM");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"SANTOSH");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(200,j,"SAURAV");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"SRI");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"SANNIDHI");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(100,i,"SAI");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(280,j,"KUMAR");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"ADITYA");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"KRISHNA");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(40,i,"PAWAN");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(300,j,"KALYAN");

      cleardevice();
     }

    for(i=0,j=640;(i<640)&&(j>0);i++,j--)
     {
      setcolor(YELLOW);
      settextstyle(7,0,7);
      outtextxy(i,180,"KAMAL");

      setcolor(LIGHTMAGENTA);
      settextstyle(7,0,7);
      outtextxy(j,260,"ANTIL");

      cleardevice();
     }

    for(i=0,j=480;(i<480)&&(j>0);i++,j--)
     {
      setcolor(LIGHTGREEN);
      settextstyle(7,0,7);
      outtextxy(170,j,"YOURSELF");

      cleardevice();
     }

    setcolor(WHITE);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");

      getch();

      exit(0);

}

//////////////////////////////////////////////////////////////////////

 void needto()
   {
     clrscr();

     hidemouse();

     cleardevice();

     setcolor(BLACK);
     rectangle(0,0,640,480);             //to set blank screen
     setfillstyle(1,BLACK);
     floodfill(1,1,BLACK);

    setcolor(YELLOW);
    settextstyle(7,0,7);
    outtextxy(50,50,"NEED");

    setcolor(BROWN);
    settextstyle(7,0,7);
    outtextxy(400,135,"RUNS");

    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(50,250,"TO  WIN");

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(350,250,"FROM");

    setcolor(LIGHTBLUE);
    settextstyle(7,0,7);
    outtextxy(330,360,"BALLS");

    setcolor(BLUE);
    rectangle(48,120,230,125);     //underline
    setfillstyle(1,LIGHTBLUE);
    floodfill(49,121,BLUE);

    setcolor(YELLOW);
    rectangle(395,204,580,209);    //underline
    setfillstyle(1,YELLOW);
    floodfill(396,205,YELLOW);

    setcolor(GREEN);
    rectangle(45,320,115,325);     //underline
    setfillstyle(1,LIGHTGREEN);
    floodfill(46,321,GREEN);

    setcolor(GREEN);
    rectangle(185,320,305,325);     //underline
    setfillstyle(1,LIGHTGREEN);
    floodfill(186,321,GREEN);

    setcolor(RED);
    rectangle(348,315,525,320);    //underline
    setfillstyle(1,LIGHTRED);
    floodfill(349,316,RED);

    setcolor(BROWN);
    rectangle(330,430,525,435);     //underline
    setfillstyle(1,BROWN);
    floodfill(331,431,BROWN);


      int j=(runs2-runs)+1;

    char tm[30];
	     sprintf(tm,"%d",j);
	      setcolor(LIGHTMAGENTA);    //displaying runs to win
	      settextstyle(7,0,7);
	      outtextxy(260,135,tm);

	      int k=(number-overs)*6;

    char z[30];
	     sprintf(z,"%d",k);
		setcolor(LIGHTMAGENTA);    //displaying balls left
	      settextstyle(7,0,7);
		outtextxy(120,360,z);


    setcolor(WHITE);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");


     getch();

}

///////////////////////////////////////////////////////////////////////

void score()
 {
    clrscr();

    hidemouse();

    cleardevice();

   setcolor(BLACK);
   rectangle(0,0,640,480);       //to set blank screen
   setfillstyle(1,BLACK);
   floodfill(1,1,BLACK);

  setcolor(BLUE);
  rectangle(70,78,130,92);         //handle
  setfillstyle(1,LIGHTGREEN);
  floodfill(71,81,BLUE);

  setcolor(BROWN);
  line(131,80,131,90);
  line(132,80,153,57);
  line(132,90,153,113);          //bat
  line(154,57,265,57);
  line(154,113,265,113);
  line(265,58,287,83);
  line(265,112,287,84);
  setfillstyle(1,YELLOW);
  floodfill(135,80,BROWN);

  setcolor(BLUE);
  settextstyle(7,0,5);
  outtextxy(150,57,"RUNS");

  setcolor(RED);
  rectangle(153,102,265,109);
  setfillstyle(1,LIGHTRED);
  floodfill(166,103,RED);


  setcolor(LIGHTMAGENTA);
  circle(160,230,80);            //ball
  setfillstyle(1,RED);
  floodfill(160,230,LIGHTMAGENTA);

  setcolor(WHITE);
  circle(160,230,77);      //grips for the ball
  circle(160,230,74);

  setcolor(YELLOW);
  settextstyle(7,0,5);
  outtextxy(93,200,"OVERS");

  setcolor(BROWN);
  line(120,360,130,355);
  line(120,361,120,450);
  line(130,356,130,450);            //stump
  line(120,451,125,455);
  line(130,451,126,455);
  setfillstyle(1,BROWN);
  floodfill(125,360,BROWN);

  setcolor(LIGHTGREEN);
  rectangle(123,367,127,425);
  setfillstyle(1,GREEN);
  floodfill(124,368,LIGHTGREEN);

  setcolor(YELLOW);
  line(111,328,125,341);
  line(111,329,108,335);
  line(125,342,122,346);
  line(109,335,121,346);
  setfillstyle(1,BROWN);
  floodfill(119,339,YELLOW);

  setcolor(GREEN);
  settextstyle(7,0,8);
  outtextxy(55,360,"W");
  setcolor(LIGHTRED);
  settextstyle(7,0,8);
  outtextxy(140,360,"CKETS");

	  char tm[30];
	     sprintf(tm,"%d",runs);
	      setcolor(RED);             //displaying runs
	      settextstyle(7,0,7);
	      outtextxy(380,50,tm);

	      char z[30];
	     sprintf(z,"%d",wickets);
		setcolor(RED);              //displaying wickets
	      settextstyle(7,0,7);
		outtextxy(500,370,z);

	       char y[30];
	     sprintf(y,"%d",overs);
		setcolor(RED);               //displaying overs bowled
	      settextstyle(7,0,7);
		outtextxy(380,190,y);

		setcolor(RED);
		settextstyle(7,0,3);
		outtextxy(410,220," ..");

	      char o[30];
	     sprintf(o,"%d",balls);
		setcolor(RED);            //displaying balls
	      settextstyle(7,0,7);
		outtextxy(440,190,o);


		setcolor(WHITE);
		settextstyle(2,0,6);
		outtextxy(250,455,"Press any key");


   getch();
}

////////////////////////////////////////////////////////////////////////////

  void scorei()
      {

	 clrscr();

	 hidemouse();

	 cleardevice();

   setcolor(BLACK);
   rectangle(0,0,640,480);         //to set blank screen
   setfillstyle(1,BLACK);
   floodfill(1,1,BLACK);

  setcolor(BLUE);
  rectangle(70,78,130,92);            //handle
  setfillstyle(1,LIGHTGREEN);
  floodfill(71,81,BLUE);

  setcolor(BROWN);
  line(131,80,131,90);
  line(132,80,153,57);
  line(132,90,153,113);                 //bat
  line(154,57,265,57);
  line(154,113,265,113);
  line(265,58,287,83);
  line(265,112,287,84);
  setfillstyle(1,YELLOW);
  floodfill(135,80,BROWN);

  setcolor(BLUE);
  settextstyle(7,0,5);
  outtextxy(150,57,"RUNS");

  setcolor(RED);
  rectangle(153,102,265,109);
  setfillstyle(1,LIGHTRED);
  floodfill(166,103,RED);


  setcolor(LIGHTMAGENTA);
  circle(160,230,80);                   //ball
  setfillstyle(1,RED);
  floodfill(160,230,LIGHTMAGENTA);

  setcolor(WHITE);
  circle(160,230,77);              //grips for the ball
  circle(160,230,74);

  setcolor(YELLOW);
  settextstyle(7,0,5);
  outtextxy(93,200,"BALLS");

  setcolor(BROWN);
  line(120,360,130,355);
  line(120,361,120,450);
  line(130,356,130,450);                 //stumps
  line(120,451,125,455);
  line(130,451,126,455);
  setfillstyle(1,BROWN);
  floodfill(125,360,BROWN);
  setcolor(LIGHTGREEN);
  rectangle(123,367,127,425);

  setfillstyle(1,GREEN);
  floodfill(124,368,LIGHTGREEN);

  setcolor(YELLOW);
  line(111,328,125,341);
  line(111,329,108,335);               //lines in stumps
  line(125,342,122,346);
  line(109,335,121,346);
  setfillstyle(1,BROWN);
  floodfill(119,339,YELLOW);

  setcolor(GREEN);
  settextstyle(7,0,8);
  outtextxy(55,360,"W");
  setcolor(LIGHTRED);
  settextstyle(7,0,8);
  outtextxy(140,360,"CKETS");



	 char z[30];
	     sprintf(z,"%d",runs2);
		setcolor(RED);          //displaying runs
	      settextstyle(7,0,7);
		outtextxy(380,50,z);

		char p[30];
	     sprintf(p,"%d",wickets);
		setcolor(RED);          //displaying wickets taken
	      settextstyle(7,0,7);
		outtextxy(500,370,p);

		char y[30];
	     sprintf(y,"%d",overs);
		setcolor(RED);          //displaying overs bowled
	      settextstyle(7,0,7);
		outtextxy(380,190,y);

		setcolor(RED);
		settextstyle(7,0,3);
		outtextxy(410,220," ..");

	      char o[30];
	     sprintf(o,"%d",balls);
		setcolor(RED);           //displaying balls bowled in the over
	      settextstyle(7,0,7);
		outtextxy(440,190,o);

		setcolor(WHITE);
		settextstyle(2,0,6);
		outtextxy(250,455,"Press any key");


		getch();
	}

////////////////////////////////////////////////////////////////////////

   void defend()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

  setcolor(LIGHTRED);
  circle(300,200,150);              //ball
  setfillstyle(1,RED);
  floodfill(300,200,LIGHTRED);

  setcolor(WHITE);
  circle(300,200,147);            //grips for the ball
  circle(300,200,144);

  setcolor(YELLOW);
  settextstyle(7,0,6);
  outtextxy(160,160,"DEFEND :");

  setcolor(GREEN);
  rectangle(163,216,428,221);       //underline
  setfillstyle(1,YELLOW);
  floodfill(164,217,GREEN);


   char z[30];
	     sprintf(z,"%d",runs);
		setcolor(YELLOW);      //displaying runs to be defended
	      settextstyle(7,0,7);
		outtextxy(280,340,z);

		setcolor(WHITE);
		settextstyle(2,0,6);
		outtextxy(250,455,"Press any key");

			    getch();

			     innings2(); //begining 2nd innings
  }

//////////////////////////////////////////////////////////////////////////

 void target()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);          //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

  setcolor(BROWN);
  line(83,108,487,108);
  line(83,208,487,208);
  line(82,108,44,155);               //bat
  line(82,208,44,156);
  line(488,108,510,148);
  line(486,208,510,172);
  line(510,149,510,171);
  setfillstyle(1,YELLOW);
  floodfill(50,155,BROWN);

  setcolor(GREEN);
  rectangle(511,148,639,172);         //handle
  setfillstyle(1,LIGHTGREEN);
  floodfill(512,149,GREEN);


  setcolor(BLUE);
  settextstyle(7,0,8);
  outtextxy(100,100,"TAR");

  setcolor(LIGHTRED);
  settextstyle(7,0,8);
  outtextxy(264,100,"GET : ");

  setcolor(RED);
  rectangle(93,183,254,193);        //underline
  setfillstyle(1,LIGHTRED);
  floodfill(94,184,RED);

  setcolor(GREEN);
  rectangle(262,183,405,193);
  setfillstyle(1,LIGHTGREEN);
  floodfill(263,184,GREEN);

  setcolor(BLUE);
  rectangle(449,183,473,193);
  setfillstyle(1,LIGHTBLUE);
  floodfill(450,184,BLUE);

  int m;
  m=runs2+1;

  char z[30];
	     sprintf(z,"%d",m);
		setcolor(YELLOW);         //displaying the runs to be chased
	      settextstyle(7,0,9);
		outtextxy(260,300,z);

		setcolor(WHITE);
		settextstyle(2,0,6);
		outtextxy(250,455,"Press any key");

		     getch();

		     innings2();   //to begin 2nd innings

  }

////////////////////////////////////////////////////////////////////////

 void four()
  {

    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);      //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    int i,j,bll;

    setcolor(BLACK);
    rectangle(158,0,183,22);
    setfillstyle(1,BLACK);
    floodfill(158,0,BLACK);

    setcolor(RED);
    circle(171,11,10);          //ball
    setfillstyle(1,RED);
    floodfill(171,11,RED);

    void*bal;
    bll=imagesize(158,0,183,22);
    bal=malloc(bll);
    getimage(158,0,183,22,bal);

  for(i=172,j=12;i<600;i++,j++)  //to display ball reaching four boundary
   {

    setcolor(GREEN);
    rectangle(0,0,640,480);
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(YELLOW);
    line(640,200,300,480);
    line(640,199,299,480);
    line(640,198,298,480);
    line(640,201,301,480);
    line(640,202,302,480);
    line(640,203,303,480);

    putimage(i,j,bal,XOR_PUT);

    delay(3);

    putimage(i,j,bal,XOR_PUT);

   }

   clrscr();

    setcolor(GREEN);
    rectangle(0,0,640,480);      //field
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);


    setcolor(LIGHTGRAY);
    rectangle(0,0,640,480);
    setfillstyle(1,LIGHTGRAY);         //back ground
    floodfill(1,1,LIGHTGRAY);

    int incr;

    for(incr=0;incr<5000;incr++)    //to display the crowd
     {
      setcolor(random(15));
      circle(random(640),random(480),3);
     }


    setcolor(DARKGRAY);
    rectangle(75,1,570,475);              //background
    setfillstyle(1,DARKGRAY);
    floodfill(76,2,DARKGRAY);

    setcolor(GREEN);
    rectangle(75,1,570,475);
    setfillstyle(1,GREEN);                //background
    floodfill(76,2,GREEN);

    setcolor(GREEN);
    circle(320,240,241);              //PLAYGROUND CIRCLE
    setfillstyle(1,GREEN);
    floodfill(320,240,GREEN);

////////////////////////////////////

    setcolor(RED);
    circle(320,240,240);
    setcolor(BLUE);                //BOUNDARY
    circle(320,240,239);
    setcolor(BROWN);
    circle(320,240,238);
    setcolor(WHITE);
    circle(320,240,140);
    circle(320,240,141);

/////////////////////////////////////

    setcolor(YELLOW);
    rectangle(280,150,350,310);         //PITCH
    setfillstyle(1,YELLOW);
    floodfill(281,171,YELLOW);

//////////////////////////////////////

    setcolor(BLACK);
    line(309,158,320,158);
    line(309,159,320,159);               //BALES
    line(309,288,320,288);
    line(309,289,320,289);

/////////////////////////////////////

    setcolor(BROWN);
    line(309,170,309,160);
    line(310,170,310,160);
    line(314,170,314,160);
    line(315,170,315,160);
    line(319,170,319,160);
    line(320,170,320,160);
    line(309,300,309,290);              //STUMPS
    line(310,300,310,290);
    line(314,300,314,290);
    line(315,300,315,290);
    line(319,300,319,290);
    line(320,300,320,290);

////////////////////////////////////////

    setcolor(BLACK);
     line(289,170,289,180);
     line(290,170,290,180);
     line(339,170,339,180);
     line(340,170,340,180);
     line(280,179,350,179);
     line(280,180,350,180);
     line(290,300,290,290);                //CREASE
     line(289,300,289,290);
     line(339,300,339,290);
     line(340,300,340,290);
     line(280,288,307,288);
     line(280,289,307,289);
     line(322,289,350,289);
     line(322,288,350,288);

//////////////////////////////////////////////////////

    setcolor(WHITE);
    circle(443,377,3);                   //fielders
    setfillstyle(1,WHITE);
    floodfill(443,377,WHITE);

    setcolor(WHITE);
    circle(304,123,3);                  //fielders
    setfillstyle(1,WHITE);
    floodfill(304,123,WHITE);

    setcolor(WHITE);
    circle(204,386,3);                   //fielders
    setfillstyle(1,WHITE);
    floodfill(204,386,WHITE);

    setcolor(WHITE);
    circle(387,486,3);                    //fielders
    setfillstyle(1,WHITE);
    floodfill(387,486,WHITE);

    setcolor(WHITE);
    circle(132,168,3);                     //fielders
    setfillstyle(1,WHITE);
    floodfill(132,168,WHITE);

    setcolor(WHITE);
    circle(505,266,3);                     //fielders
    setfillstyle(1,WHITE);
    floodfill(505,266,WHITE);

    setcolor(WHITE);
    circle(422,196,3);                       //fielders
    setfillstyle(1,WHITE);
    floodfill(422,196,WHITE);

    setcolor(WHITE);
    circle(407,290,3);                     //fielders
    setfillstyle(1,WHITE);
    floodfill(407,290,WHITE);

    setcolor(WHITE);
    circle(213,207,3);
    setfillstyle(1,WHITE);                  //fielders
    floodfill(213,207,WHITE);

    setcolor(WHITE);
    circle(270,119,3);                     //fielders
    setfillstyle(1,WHITE);
    floodfill(270,119,WHITE);

    setcolor(WHITE);
    circle(388,38,3);                      //fielders
    setfillstyle(1,WHITE);
    floodfill(388,38,WHITE);

    setcolor(RED);
    rectangle(295,329,304,338);            //bowler
    setfillstyle(1,BROWN);
    floodfill(296,330,RED);

   ///////////////////////////////////////////////////////////////

   setcolor(BROWN);
   line(419,200,419,220);
   line(419,199,400,150);
   line(419,221,400,270);
   line(399,150,40,150);        //stumps
   line(399,270,40,270);
   line(40,151,10,210);
   line(40,269,10,211);

   setfillstyle(1,YELLOW);
   floodfill(44,154,BROWN);

   setfillstyle(1,YELLOW);
   floodfill(280,154,BROWN);

    setfillstyle(1,YELLOW);
   floodfill(398,154,BROWN);

    int col,b,n;

  for(col=1;col<20;col++)    //displaying that a four was scored
   {
   b=random(15);

   setcolor(b);
   rectangle(420,198,620,222);
   setfillstyle(1,random(15));
   floodfill(421,199,b);

   setcolor(random(15));
   settextstyle(7,0,9);
   outtextxy(50,140,"FOUR !");

   n=random(15);

   setcolor(n);
   rectangle(40,250,390,260);
   setfillstyle(1,random(15));
   floodfill(41,251,n);

   delay(100);

  }

   setcolor(BLACK);
   settextstyle(2,0,6);
   outtextxy(250,455,"Press any key");

   getch();
 }

///////////////////////////////////////////////////////////////////////////

 void caught()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    int i,j,bll;

    setcolor(BLACK);
    rectangle(158,0,183,22);
    setfillstyle(1,BLACK);
    floodfill(158,0,BLACK);

    setcolor(RED);
    circle(171,11,10);             //ball
    setfillstyle(1,RED);
    floodfill(171,11,RED);

    void*bal;
    bll=imagesize(158,0,183,22);
    bal=malloc(bll);
    getimage(158,0,183,22,bal);

  for(i=172,j=12;i<320;i++,j++)//displaying a fielder catching the ball
   {
    setcolor(WHITE);
    circle(330,180,10);           //fielder
    setfillstyle(1,WHITE);
    floodfill(330,180,WHITE);

    setcolor(GREEN);
    rectangle(0,0,640,480);
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(YELLOW);
    line(640,200,300,480);
    line(640,199,299,480);
    line(640,198,298,480);
    line(640,201,301,480);
    line(640,202,302,480);
    line(640,203,303,480);

    putimage(i,j,bal,XOR_PUT);

    delay(3);

    putimage(i,j,bal,XOR_PUT);

    delay(5);

   }

   clrscr();

    setcolor(GREEN);
    rectangle(0,0,640,480);      //field
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(LIGHTGRAY);
    rectangle(0,0,640,480);
    setfillstyle(1,LIGHTGRAY);         //back ground
    floodfill(1,1,LIGHTGRAY);

    int incr;

    for(incr=0;incr<5000;incr++)     //displaying the crowd
     {
      setcolor(random(15));
      circle(random(640),random(480),3);
     }

    setcolor(DARKGRAY);
    rectangle(75,1,570,475);              //background
    setfillstyle(1,DARKGRAY);
    floodfill(76,2,DARKGRAY);

    setcolor(GREEN);
    rectangle(75,1,570,475);
    setfillstyle(1,GREEN);                //background
    floodfill(76,2,GREEN);

    setcolor(GREEN);
    circle(320,240,241);              //PLAYGROUND CIRCLE
    setfillstyle(1,GREEN);
    floodfill(320,240,GREEN);

////////////////////////////////////

    setcolor(RED);
    circle(320,240,240);
    setcolor(BLUE);                //BOUNDARY
    circle(320,240,239);
    setcolor(BROWN);
    circle(320,240,238);
    setcolor(WHITE);
    circle(320,240,140);
    circle(320,240,141);

/////////////////////////////////////


    setcolor(YELLOW);
    rectangle(280,150,350,310);         //PITCH
    setfillstyle(1,YELLOW);
    floodfill(281,171,YELLOW);

//////////////////////////////////////

    setcolor(BLACK);
    line(309,158,320,158);
    line(309,159,320,159);               //BALES
    line(309,288,320,288);
    line(309,289,320,289);

/////////////////////////////////////

    setcolor(BROWN);
    line(309,170,309,160);
    line(310,170,310,160);
    line(314,170,314,160);
    line(315,170,315,160);
    line(319,170,319,160);
    line(320,170,320,160);
    line(309,300,309,290);              //STUMPS
    line(310,300,310,290);
    line(314,300,314,290);
    line(315,300,315,290);
    line(319,300,319,290);
    line(320,300,320,290);

////////////////////////////////////////

    setcolor(BLACK);
     line(289,170,289,180);
     line(290,170,290,180);
     line(339,170,339,180);
     line(340,170,340,180);
     line(280,179,350,179);
     line(280,180,350,180);
     line(290,300,290,290);                //CREASE
     line(289,300,289,290);
     line(339,300,339,290);
     line(340,300,340,290);
     line(280,288,307,288);
     line(280,289,307,289);
     line(322,289,350,289);
     line(322,288,350,288);

//////////////////////////////////////////////////////

   setcolor(WHITE);
    circle(443,377,3);
    setfillstyle(1,WHITE);
    floodfill(443,377,WHITE);
				       //fielders
    setcolor(WHITE);
    circle(304,123,3);
    setfillstyle(1,WHITE);
    floodfill(304,123,WHITE);

    setcolor(WHITE);                     //fielders
    circle(204,386,3);
    setfillstyle(1,WHITE);
    floodfill(204,386,WHITE);            //fielders

    setcolor(WHITE);
    circle(387,486,3);
    setfillstyle(1,WHITE);
    floodfill(387,486,WHITE);
					//fielders
    setcolor(WHITE);
    circle(132,168,3);
    setfillstyle(1,WHITE);
    floodfill(132,168,WHITE);
					//fielders
    setcolor(WHITE);
    circle(505,266,3);
    setfillstyle(1,WHITE);
    floodfill(505,266,WHITE);

    setcolor(WHITE);
    circle(422,196,3);                    //fielders
    setfillstyle(1,WHITE);
    floodfill(422,196,WHITE);

    setcolor(WHITE);
    circle(407,290,3);                     //fielders
    setfillstyle(1,WHITE);
    floodfill(407,290,WHITE);

    setcolor(WHITE);
    circle(213,207,3);
    setfillstyle(1,WHITE);                  //fielders
    floodfill(213,207,WHITE);

    setcolor(WHITE);
    circle(270,119,3);                 //fielders
    setfillstyle(1,WHITE);
    floodfill(270,119,WHITE);

    setcolor(WHITE);
    circle(388,38,3);                    //fielders
    setfillstyle(1,WHITE);
    floodfill(388,38,WHITE);

    setcolor(RED);
    rectangle(295,329,304,338);           //fielders
    setfillstyle(1,BROWN);
    floodfill(296,330,RED);

///////////////////////////////////////////////////////////////

   setcolor(BROWN);
   line(419,200,419,220);
   line(419,199,400,150);
   line(419,221,400,270);
   line(399,150,40,150);     //stumps
   line(399,270,40,270);
   line(40,151,10,210);
   line(40,269,10,211);

   setfillstyle(1,YELLOW);
   floodfill(44,154,BROWN);

   setfillstyle(1,YELLOW);
   floodfill(280,154,BROWN);

    setfillstyle(1,YELLOW);
   floodfill(398,154,BROWN);

   int col,b,n;

  for(col=1;col<20;col++)//displaying the fielder catching the ball and displaying caught
   {
   b=random(15);

   setcolor(b);
   rectangle(420,198,620,222);
   setfillstyle(1,random(15));
   floodfill(421,199,b);

   setcolor(random(15));
   settextstyle(7,0,8);
   outtextxy(30,160,"CAUGHT !");

   n=random(15);

   setcolor(n);
   rectangle(40,250,390,260);
   setfillstyle(1,random(15));
   floodfill(41,251,n);
   delay(100);

  }
 }

////////////////////////////////////////////////////////////////////////////

 void out()
  {
   clrscr();

   hidemouse();

   cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);        //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   setcolor(YELLOW);
   rectangle(0,0,640,480);
   setfillstyle(1,YELLOW);         //to set background
   floodfill(1,1,YELLOW);


/////////////////////////////////wicket 1//////////////////////////////

   setcolor(GREEN);
   line(160,160,190,160);
   line(160,161,170,350);
   line(190,161,200,350);
   line(170,351,185,370);
   line(200,350,185,369);

   setcolor(BLUE);
   line(161,162,189,162);
   line(162,162,172,350);
   line(189,162,198,350);
   line(172,351,184,370);
   line(198,351,184,369);

   setfillstyle(1,BROWN);
   floodfill(164,164,BLUE);

   setcolor(LIGHTMAGENTA);
   line(168,171,176,328);
   line(169,171,177,328);
   line(183,169,191,328);
   line(184,169,192,328);

   setcolor(LIGHTGREEN);
   line(176,171,181,280);
   line(175,171,180,280);

/////////////////////////////////////end of wicket 1///////////////////////

////////////////////////////////////start of wicket 2//////////////////////

   setcolor(GREEN);
   line(240,163,270,163);
   line(240,164,240,350);
   line(270,164,270,350);
   line(240,351,255,370);
   line(270,351,255,369);

   setcolor(BLUE);
   line(242,164,268,164);
   line(242,165,242,350);
   line(268,165,268,350);
   line(242,351,255,368);
   line(268,351,255,367);

   setfillstyle(1,BROWN);
   floodfill(252,166,BLUE);

   setcolor(LIGHTMAGENTA);
   line(246,171,246,330);
   line(247,171,247,330);
   line(262,171,262,330);
   line(263,171,263,330);
   setcolor(LIGHTGREEN);
   line(253,171,253,270);
   line(254,171,254,270);

//////////////////////////////end of wicket 2///////////////////////////

/////////////////////////////start of wicket 3//////////////////////////

   setcolor(GREEN);
   line(320,163,350,163);
   line(320,164,310,350);
   line(350,164,340,350);
   line(310,351,325,370);
   line(340,351,325,369);

   setcolor(BLUE);
   line(322,164,348,164);
   line(322,165,312,350);
   line(348,164,338,350);
   line(312,351,325,368);
   line(338,351,325,367);

   setfillstyle(1,BROWN);
   floodfill(330,168,BLUE);

   setcolor(LIGHTMAGENTA);
   line(327,172,318,331);
   line(328,172,319,331);
   line(340,172,333,331);
   line(341,172,334,331);

   setcolor(LIGHTGREEN);
   line(333,172,329,264);
   line(334,172,330,264);

///////////////////////////////end of wicket 3/////////////////////////////

//////////////////////////////start of bale 1//////////////////////////////

   setcolor(LIGHTMAGENTA);
   line(174,126,229,106);
   line(174,127,177,141);
   line(177,140,233,119);
   line(229,107,233,118);

   setfillstyle(1,BROWN);
   floodfill(214,121,LIGHTMAGENTA);

   setcolor(WHITE);
   line(192,118,197,133);
   line(196,118,202,132);
   line(200,116,205,130);
   line(204,115,209,128);

//////////////////////////////end of bale 1/////////////////////////////

/////////////////////////////start of bale 2////////////////////////////

   setcolor(LIGHTMAGENTA);
   line(321,91,370,125);
   line(321,92,314,103);
   line(370,126,364,138);
   line(314,102,364,137);

   setfillstyle(1,BROWN);
   floodfill(337,111,LIGHTMAGENTA);

   setcolor(WHITE);
   line(340,105,334,116);
   line(343,108,337,120);
   line(346,109,341,120);
   line(349,111,343,122);

///////////////////////////////end of bale 2/////////////////////////////////


////////////////////////////////////////////////////////////////////

   setcolor(MAGENTA);
   settextstyle(7,0,8);
   outtextxy(4,0,"$");

   setcolor(GREEN);
   settextstyle(7,0,8);
   outtextxy(50,0," H");

   setcolor(BLUE);
   settextstyle(7,0,8);
   outtextxy(150,0,"O");

   setcolor(RED);
   settextstyle(7,0,8);
   outtextxy(200,0,"W");

   setcolor(CYAN);
   settextstyle(7,0,8);
   outtextxy(250,0,"Z");

   setcolor(LIGHTRED);
   settextstyle(7,0,8);
   outtextxy(300,0,"Z");

   setcolor(BLUE);
   settextstyle(4,0,8);
   outtextxy(350,0,"T");

   setcolor(GREEN);
   settextstyle(4,0,8);
   outtextxy(400,0,"H");

   setcolor(CYAN);
   settextstyle(4,0,8);
   outtextxy(450,0,"A");

   setcolor(LIGHTRED);
   settextstyle(4,0,8);
   outtextxy(500,0,"T");

   setcolor(GREEN);
   settextstyle(4,0,8);
   outtextxy(550,0," !!");

/////////////////////////////////////////////////////////////////////////

   setcolor(LIGHTMAGENTA);
   circle(487,259,15);
   setfillstyle(1,RED);                    //ball
   floodfill(487,259,LIGHTMAGENTA);

   setcolor(WHITE);
   circle(487,259,13);         //grips for the ball
   circle(487,259,11);

   setcolor(BROWN);
   line(475,249,447,249);
   line(472,255,456,255);
   line(472,260,464,260);
   line(472,264,449,264);           //forced lines
   line(475,270,463,270);
   line(478,273,448,273);
   line(472,258,452,258);
   line(473,252,440,252);
   line(474,267,457,267);


   int i,col,rad;


 int k,j;
 for(col=1;col<15;col++)  //for colour display
  {
  for(i=5,k=5;(k<100);k++,i+=k)
   {
    setcolor(col);
    circle(i,440,k);
    setfillstyle(1,col);
    floodfill(i,440,col);

    delay(1);
   }
  }

 for(col=1;col<15;col++)//for vertical colour display
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(600,j,10);
      setfillstyle(1,col);
      floodfill(600,j,col);

      setcolor(col);
      circle(50,j,10);
      setfillstyle(1,col);
      floodfill(50,j,col);

      delay(0);
     }
   }

  }

////////////////////////////////////////////////////////////////////////////

 void longoff()
  {
   clrscr();

   hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int j,col;

   setcolor(YELLOW);
   rectangle(0,0,640,480);       //to set background
   setfillstyle(1,YELLOW);
   floodfill(1,1,YELLOW);

   setcolor(BLACK);
   circle(380,90,30);
   setfillstyle(1,BLACK);                //hairs
   floodfill(381,91,BLACK);
   line(390,60,400,55);
   line(390,60,387,55);


   setcolor(BROWN);
   circle(380,100,30);                   //face
   setfillstyle(1,YELLOW);
   floodfill(381,101,BROWN);


   setcolor(BLACK);
   line(363,88,373,88);          //eye brows
   line(387,88,397,88);
   line(381,92,379,106);          //nose
   line(380,106,384,106);
   rectangle(367,92,369,94);
   setfillstyle(1,BLACK);
   floodfill(368,93,BLACK);           //eyes
   rectangle(391,92,393,94);
   setfillstyle(1,BLACK);
   floodfill(392,93,BLACK);

   setcolor(RED);
   line(373,116,387,116);          //lips
   line(373,117,387,117);

   setcolor(BLACK);
   line(367,128,367,145);
   line(394,128,394,145);

   setcolor(LIGHTMAGENTA);
   line(367,146,394,146);
   line(367,147,335,152);
   line(335,151,326,206);
   line(351,256,351,175);
   line(351,174,347,208);
   line(327,206,346,208);
   line(394,147,415,152);                 //shirt
   line(415,151,390,200);
   line(416,152,420,180);
   line(420,181,402,215);
   line(390,201,402,214);
   line(352,256,416,256);
   line(416,255,416,190);

   setfillstyle(1,RED);
   floodfill(383,169,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(404,180,LIGHTMAGENTA);


   setcolor(BLACK);
   line(329,207,343,209);
   line(329,208,323,265);
   line(343,210,337,267);             //right hand
   line(324,265,336,267);

   setcolor(BLACK);
   line(390,204,400,214);
   line(390,205,335,261);
   line(400,215,340,273);
   line(335,262,340,272);
   setfillstyle(1,YELLOW);
   floodfill(374,228,BLACK);


   setcolor(GREEN);
   line(331,261,339,261);
   line(331,262,325,297);
   line(339,262,333,298);              //handle
   line(326,297,332,298);
   setfillstyle(1,LIGHTGREEN);
   floodfill(330,289,GREEN);
   setcolor(BROWN);
   line(325,298,332,299);
   line(325,299,313,301);
   line(332,300,342,303);
   line(313,302,301,380);             //willow
   line(342,304,330,382);
   line(301,381,315,391);
   line(330,383,315,390);
   setcolor(BLUE);
   line(319,309,315,337);
   setcolor(GREEN);
   line(327,310,325,328);
   setcolor(BLUE);
   line(336,309,330,340);


   setcolor(BLACK);
   line(325,266,330,276);            //fingers
   line(338,271,332,274);


   setcolor(LIGHTBLUE);
   line(351,257,416,257);
   line(351,258,351,367);
   line(416,258,416,367);
   line(352,367,375,367);                 //pant
   line(375,366,383,285);
   line(415,367,392,367);
   line(392,366,383,286);
   setfillstyle(1,LIGHTGRAY);
   floodfill(380,284,LIGHTBLUE);

   setcolor(BLACK);
   rectangle(340,368,374,378);
   setfillstyle(1,BLACK);
   floodfill(341,369,BLACK);         //shoes
   setcolor(BLACK);
   rectangle(393,368,414,378);
   setfillstyle(1,BLACK);
   floodfill(394,369,BLACK);


   setcolor(BLUE);
   settextstyle(7,1,5);
   outtextxy(25,20,"A LONG OFF SHOT");

  for(col=1;col<15;col++)  //displaying colours
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(550,j,10);
      setfillstyle(1,col);
      floodfill(550,j,col);

      setcolor(col);
      circle(120,j,10);
      setfillstyle(1,col);
      floodfill(120,j,col);

      delay(0);
     }
   }

  }

///////////////////////////////////////////////////////////////////////////

 void longon()
  {
    clrscr();

    hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set balnk screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int j,col;

   setcolor(YELLOW);
   rectangle(0,0,640,480);         //to set background
   setfillstyle(1,YELLOW);
   floodfill(1,1,YELLOW);

   setcolor(BLACK);
   circle(380,90,30);
   setfillstyle(1,BLACK);                //hairs
   floodfill(381,91,BLACK);
   line(390,60,400,55);
   line(390,60,387,55);


   setcolor(BROWN);
   circle(380,100,30);                   //face
   setfillstyle(1,YELLOW);
   floodfill(381,101,BROWN);


   setcolor(BLACK);
   line(363,88,373,88);          //eye brows
   line(387,88,397,88);
   line(381,92,379,106);          //nose
   line(380,106,384,106);
   rectangle(367,92,369,94);
   setfillstyle(1,BLACK);
   floodfill(368,93,BLACK);           //eyes
   rectangle(391,92,393,94);
   setfillstyle(1,BLACK);
   floodfill(392,93,BLACK);

   setcolor(RED);
   line(373,116,387,116);          //lips
   line(373,117,387,117);

   setcolor(BLACK);
   line(367,128,367,145);
   line(394,128,394,145);

   setcolor(LIGHTMAGENTA);
   line(368,145,393,145);
   line(367,145,335,152);
   line(335,153,360,190);
   line(335,153,330,180);
   line(330,181,350,210);
   line(360,191,350,209);
   line(346,204,346,255);                     //shirt
   line(347,256,420,256);
   line(394,145,420,150);
   line(420,151,410,205);
   line(420,151,432,176);
   line(432,177,428,205);
   line(410,206,428,206);
   line(421,255,421,206);

   setfillstyle(1,RED);
   floodfill(370,207,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(345,188,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(421,190,LIGHTMAGENTA);

   setcolor(BLACK);
   line(352,208,359,197);
   line(352,209,390,256);
   line(359,198,398,244);
   line(398,245,390,255);

   setfillstyle(1,YELLOW);
   floodfill(380,232,BLACK);	   //hands

   setcolor(BLACK);
   line(411,208,424,208);
   line(411,209,394,246);
   line(424,209,404,254);
   line(395,246,403,254);
   setfillstyle(1,YELLOW);
   floodfill(408,223,BLACK);

   setcolor(LIGHTBLUE);
   line(351,257,416,257);
   line(351,258,351,367);
   line(416,258,416,367);
   line(352,367,375,367);                 //pant
   line(375,366,383,285);
   line(415,367,392,367);
   line(392,366,383,286);
   setfillstyle(1,LIGHTGRAY);
   floodfill(380,284,LIGHTBLUE);

   setcolor(GREEN);
   line(392,245,398,243);
   line(392,244,406,275);
   line(398,244,413,272);              //handle
   line(407,275,412,272);
   setfillstyle(1,LIGHTGREEN);
   floodfill(405,265,GREEN);


   setcolor(BROWN);
   line(406,276,413,273);
   line(406,277,400,284);
   line(413,274,423,275);
   line(400,285,430,350);
   line(423,276,452,338);
   line(430,349,445,352);
   line(452,339,445,351);		//willow

   setfillstyle(1,YELLOW);
   floodfill(414,294,BROWN);

   setcolor(BLUE);
   line(409,289,418,308);

   setcolor(RED);
   line(415,287,418,294);

   setcolor(BLUE);
   line(420,283,430,302);

   setcolor(BLACK);
   line(392,252,399,257);
   line(391,254,399,253);

   setcolor(BLACK);
   rectangle(340,368,374,378);
   setfillstyle(1,BLACK);
   floodfill(341,369,BLACK);         //shoes
   setcolor(BLACK);
   rectangle(393,368,414,378);
   setfillstyle(1,BLACK);
   floodfill(394,369,BLACK);

   setcolor(BLUE);
   settextstyle(7,1,6);
   outtextxy(25,0,"A LONG ON SHOT");

  for(col=1;col<15;col++)    //displaying colours
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(550,j,10);
      setfillstyle(1,col);
      floodfill(550,j,col);

      setcolor(col);
      circle(120,j,10);
      setfillstyle(1,col);
      floodfill(120,j,col);

      delay(0);
     }
   }

  }

////////////////////////////////////////////////////////////////////////////

 void squarecut()
  {
   clrscr();

   hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);          //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int j,col;

   setcolor(YELLOW);
   rectangle(0,0,640,480);          //to set background
   setfillstyle(1,YELLOW);
   floodfill(1,1,YELLOW);

   setcolor(BLACK);
   circle(380,90,30);
   setfillstyle(1,BLACK);                //hairs
   floodfill(381,91,BLACK);
   line(390,60,400,55);
   line(390,60,387,55);


   setcolor(BROWN);
   circle(380,100,30);                   //face
   setfillstyle(1,YELLOW);
   floodfill(381,101,BROWN);


   setcolor(BLACK);
   line(363,88,373,88);          //eye brows
   line(387,88,397,88);
   line(381,92,379,106);          //nose
   line(380,106,384,106);
   rectangle(367,92,369,94);

   setfillstyle(1,BLACK);
   floodfill(368,93,BLACK);	  //eyes

   rectangle(391,92,393,94);
   setfillstyle(1,BLACK);
   floodfill(392,93,BLACK);

   setcolor(RED);
   line(373,116,387,116);          //lips
   line(373,117,387,117);

   setcolor(BLACK);
   line(367,128,367,145);
   line(394,128,394,145);

   setcolor(LIGHTMAGENTA);
   line(368,145,393,145);
   line(367,145,330,151);
   line(330,152,323,195);
   line(350,168,347,198);
   line(347,197,323,196);
   line(351,168,351,255);
   line(352,255,415,255);
   line(394,145,425,151);                 //shirt
   line(425,152,385,185);
   line(425,152,428,180);
   line(427,180,395,205);
   line(395,204,385,184);
   line(416,255,416,190);

   setfillstyle(1,RED);
   floodfill(373,241,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(405,185,LIGHTMAGENTA);

   setcolor(GREEN);
   line(351,257,416,257);
   line(351,258,351,367);
   line(416,258,416,367);
   line(352,367,375,367);                 //pant
   line(375,366,383,285);
   line(415,367,392,367);
   line(392,366,383,286);

   setfillstyle(1,LIGHTGRAY);
   floodfill(380,284,GREEN);

   setcolor(BLACK);
   rectangle(340,368,374,378);
   setfillstyle(1,BLACK);
   floodfill(341,369,BLACK);       //shoes

   setcolor(BLACK);
   rectangle(393,368,414,378);
   setfillstyle(1,BLACK);
   floodfill(394,369,BLACK);

   setcolor(BLACK);
   line(325,198,343,198);
   line(343,199,340,225);
   line(325,199,324,205);          //right hand
   line(324,206,285,200);
   line(340,224,283,215);
   line(285,201,283,214);


 ////////////////////////////////


   setcolor(BLACK);
   line(384,188,391,205);
   line(384,189,370,199);
   line(369,199,285,188);
   line(391,206,373,212);            //left hand
   line(384,189,370,199);
   line(372,212,283,202);
   line(285,189,283,201);

   setfillstyle(1,YELLOW);
   floodfill(378,204,BLACK);

/////////////////////////////////////

   setcolor(BROWN);
   rectangle(265,197,315,207);
   setfillstyle(1,LIGHTGREEN);
   floodfill(266,198,BROWN);

   line(265,196,257,186);
   line(265,208,257,218);             //bat
   line(257,185,150,185);
   line(257,218,150,218);
   line(150,218,140,201);
   line(150,185,140,202);

   setcolor(BLACK);
   line(283,190,275,204);
   line(282,195,278,201);              //fingers
   line(281,212,278,204);
   line(282,210,280,204);

   setcolor(GREEN);
   settextstyle(7,0,3);
   outtextxy(220,185,"Rbk");

   setcolor(BLUE);
   settextstyle(7,1,7);
   outtextxy(25,0,"A SQUARE CUT");

   for(col=1;col<15;col++)//displaying colours
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(550,j,10);
      setfillstyle(1,col);
      floodfill(550,j,col);

      setcolor(col);
      circle(120,j,10);
      setfillstyle(1,col);
      floodfill(120,j,col);

      delay(0);
     }
   }

 }

////////////////////////////////////////////////////////////////////////////

 void pullshot()
  {
   clrscr();

   hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);     //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int j,col;

   setcolor(YELLOW);
   rectangle(0,0,640,480);      //to set background
   setfillstyle(1,YELLOW);
   floodfill(1,1,YELLOW);

   setcolor(BLACK);
   circle(380,90,30);
   setfillstyle(1,BLACK);                //hairs
   floodfill(381,91,BLACK);
   line(390,60,400,55);
   line(390,60,387,55);


   setcolor(BROWN);
   circle(380,100,30);                   //face
   setfillstyle(1,YELLOW);
   floodfill(381,101,BROWN);


   setcolor(BLACK);
   line(363,88,373,88);          //eye brows
   line(387,88,397,88);
   line(381,92,379,106);          //nose
   line(380,106,384,106);
   rectangle(367,92,369,94);
   setfillstyle(1,BLACK);
   floodfill(368,93,BLACK);           //eyes
   rectangle(391,92,393,94);
   setfillstyle(1,BLACK);
   floodfill(392,93,BLACK);

   setcolor(RED);
   line(373,116,387,116);          //lips
   line(373,117,387,117);

   setcolor(BLACK);
   line(367,128,367,145);
   line(394,128,394,145);

   setcolor(LIGHTMAGENTA);
   line(368,145,393,145);
   line(367,145,330,151);
   line(330,152,310,190);
   line(350,168,337,193);
   line(337,192,310,191);
   line(351,168,351,255);
   line(352,255,415,255);
   line(394,145,425,151);
   line(425,152,385,185);
   line(425,152,428,180);
   line(427,180,395,205);
   line(395,204,385,184);
   line(416,255,416,190);

   setfillstyle(1,RED);
   floodfill(373,241,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(405,185,LIGHTMAGENTA);

   setcolor(GREEN);
   line(351,257,416,257);
   line(351,258,351,367);
   line(416,258,416,367);
   line(352,367,375,367);                 //pant
   line(375,366,383,285);
   line(415,367,392,367);
   line(392,366,383,286);

   setfillstyle(1,LIGHTGRAY);
   floodfill(380,284,GREEN);

   setcolor(BLACK);
   rectangle(340,368,374,378);
   setfillstyle(1,BLACK);
   floodfill(341,369,BLACK);         //shoes

   setcolor(BLACK);
   rectangle(393,368,414,378);
   setfillstyle(1,BLACK);
   floodfill(394,369,BLACK);

   line(385,188,392,202);
   line(385,189,364,197);
   line(392,203,358,218);
   line(363,197,344,130);              //left hand
   line(357,218,330,132);
   line(331,132,343,130);
   setfillstyle(1,YELLOW);
   floodfill(363,207,BLACK);            //hands

   line(312,193,333,194);
   line(312,194,304,203);
   line(333,195,302,222);
   line(301,222,290,222);              //right hand
   line(303,203,315,135);
   line(289,222,301,135);



   setcolor(BROWN);
   rectangle(292,127,346,135);
   setfillstyle(1,LIGHTGREEN);         //handle
   floodfill(293,128,BROWN);

   setcolor(BLACK);
   line(304,138,305,129);
   line(308,138,309,129);
   line(312,138,313,129);      //FINGERS
   line(335,138,334,129);
   line(339,138,338,129);
   line(343,138,342,129);

   setcolor(BROWN);
   line(291,128,291,134);
   line(291,127,285,115);
   line(291,134,284,145);              //willow
   line(284,115,210,115);
   line(283,145,210,145);
   line(210,116,200,130);
   line(210,144,200,129);

   setcolor(GREEN);
   settextstyle(7,0,2);
   outtextxy(250,115,"Rbk");

   setcolor(BLUE);
   settextstyle(7,1,7);
   outtextxy(25,10,"A PULL SHOT");

   for(col=1;col<15;col++)    //displaying colours
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(550,j,10);
      setfillstyle(1,col);
      floodfill(550,j,col);

      setcolor(col);
      circle(140,j,10);
      setfillstyle(1,col);
      floodfill(140,j,col);

      delay(0);
     }
   }

 }

////////////////////////////////////////////////////////////////////////////

 void defence()
  {
   clrscr();

   hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);    //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int j,col;

   setcolor(YELLOW);
   rectangle(0,0,640,480);       //to set background
   setfillstyle(1,YELLOW);
   floodfill(1,1,YELLOW);

   setcolor(BLACK);
   circle(380,90,30);
   setfillstyle(1,BLACK);                //hairs
   floodfill(381,91,BLACK);
   line(390,60,400,55);
   line(390,60,387,55);


   setcolor(BROWN);
   circle(380,100,30);                   //face
   setfillstyle(1,YELLOW);
   floodfill(381,101,BROWN);


   setcolor(BLACK);
   line(363,88,373,88);          //eye brows
   line(387,88,397,88);
   line(381,92,379,106);          //nose
   line(380,106,384,106);
   rectangle(367,92,369,94);
   setfillstyle(1,BLACK);
   floodfill(368,93,BLACK);           //eyes

   rectangle(391,92,393,94);
   setfillstyle(1,BLACK);
   floodfill(392,93,BLACK);

   setcolor(RED);
   line(373,116,387,116);          //lips
   line(373,117,387,117);

   setcolor(BLACK);
   line(367,128,367,145);
   line(394,128,394,145);

   setcolor(LIGHTMAGENTA);
   line(367,146,394,146);
   line(367,147,335,152);
   line(335,151,326,206);
   line(351,256,351,175);
   line(351,174,347,208);
   line(327,206,346,208);
   line(394,147,415,152);                 //shirt
   line(415,151,390,200);
   line(416,152,420,180);
   line(420,181,402,215);
   line(390,201,402,214);
   line(352,256,416,256);
   line(416,255,416,190);

   setfillstyle(1,RED);
   floodfill(383,169,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(404,180,LIGHTMAGENTA);


   setcolor(BLACK);
   line(329,207,343,209);
   line(329,208,323,265);
   line(343,210,337,267);             //right hand
   line(324,265,336,267);

   setcolor(BLACK);
   line(390,204,400,214);
   line(390,205,335,261);
   line(400,215,340,273);
   line(335,262,340,272);
   setfillstyle(1,YELLOW);
   floodfill(374,228,BLACK);


   setcolor(GREEN);
   line(331,261,339,261);
   line(331,262,325,297);
   line(339,262,333,298);              //handle
   line(326,297,332,298);
   setfillstyle(1,LIGHTGREEN);
   floodfill(330,289,GREEN);

   setcolor(BROWN);
   line(325,298,332,299);
   line(325,299,313,301);
   line(332,300,342,303);
   line(313,302,301,380);             //willow
   line(342,304,330,382);
   line(301,381,315,391);
   line(330,383,315,390);

   setcolor(BLUE);
   line(319,309,315,337);

   setcolor(GREEN);
   line(327,310,325,328);

   setcolor(BLUE);
   line(336,309,330,340);

   setcolor(BLACK);
   line(325,266,330,276);            //fingers
   line(338,271,332,274);

   setcolor(LIGHTBLUE);
   line(351,257,416,257);
   line(351,258,351,367);
   line(416,258,416,367);
   line(352,367,375,367);                 //pant
   line(375,366,383,285);
   line(415,367,392,367);
   line(392,366,383,286);

   setfillstyle(1,LIGHTGRAY);
   floodfill(380,284,LIGHTBLUE);

   setcolor(BLACK);
   rectangle(340,368,374,378);
   setfillstyle(1,BLACK);
   floodfill(341,369,BLACK);	//shoes

   setcolor(BLACK);
   rectangle(393,368,414,378);
   setfillstyle(1,BLACK);
   floodfill(394,369,BLACK);


   setcolor(BLUE);
   settextstyle(7,1,8);
   outtextxy(25,45,"DEFENCE");

  for(col=1;col<15;col++)  //displaying colours
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(550,j,10);
      setfillstyle(1,col);
      floodfill(550,j,col);

      setcolor(col);
      circle(160,j,10);
      setfillstyle(1,col);
      floodfill(160,j,col);

      delay(0);
     }
   }
 }

////////////////////////////////////////////////////////////////////////////

 void straightdrive()
  {
   clrscr();

   hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int j,col;

   setcolor(YELLOW);
   rectangle(0,0,640,480);        //to set background
   setfillstyle(1,YELLOW);
   floodfill(1,1,YELLOW);

   setcolor(BLACK);
   circle(380,90,30);
   setfillstyle(1,BLACK);                //hairs
   floodfill(381,91,BLACK);
   line(390,60,400,55);
   line(390,60,387,55);

   setcolor(BROWN);
   circle(380,100,30);                   //face
   setfillstyle(1,YELLOW);
   floodfill(381,101,BROWN);

   setcolor(BLACK);
   line(363,88,373,88);          //eye brows
   line(387,88,397,88);
   line(381,92,379,106);          //nose
   line(380,106,384,106);

   rectangle(367,92,369,94);
   setfillstyle(1,BLACK);
   floodfill(368,93,BLACK);           //eyes

   rectangle(391,92,393,94);
   setfillstyle(1,BLACK);
   floodfill(392,93,BLACK);

   setcolor(RED);
   line(373,116,387,116);          //lips
   line(373,117,387,117);

   setcolor(BLACK);
   line(367,128,367,145);
   line(394,128,394,145);

   setcolor(LIGHTMAGENTA);
   line(367,146,394,146);
   line(367,147,335,152);
   line(335,151,326,206);
   line(351,256,351,175);
   line(351,174,347,208);
   line(327,206,346,208);
   line(394,147,415,152);                 //shirt
   line(415,151,390,200);
   line(416,152,420,180);
   line(420,181,402,215);
   line(390,201,402,214);
   line(352,256,416,256);
   line(416,255,416,190);

   setfillstyle(1,RED);
   floodfill(383,169,LIGHTMAGENTA);

   setfillstyle(1,RED);
   floodfill(404,180,LIGHTMAGENTA);

   setcolor(BLACK);
   line(329,207,343,209);
   line(329,208,323,265);
   line(343,210,337,267);             //right hand
   line(324,265,336,267);

   setcolor(BLACK);
   line(390,204,400,214);
   line(390,205,335,261);
   line(400,215,340,273);
   line(335,262,340,272);
   setfillstyle(1,YELLOW);
   floodfill(374,228,BLACK);


   setcolor(GREEN);
   line(331,261,339,261);
   line(331,262,325,297);
   line(339,262,333,298);              //handle
   line(326,297,332,298);
   setfillstyle(1,LIGHTGREEN);
   floodfill(330,289,GREEN);

   setcolor(BROWN);
   line(325,298,332,299);
   line(325,299,313,301);
   line(332,300,342,303);
   line(313,302,301,380);             //willow
   line(342,304,330,382);
   line(301,381,315,391);
   line(330,383,315,390);

   setcolor(BLUE);
   line(319,309,315,337);

   setcolor(GREEN);
   line(327,310,325,328);

   setcolor(BLUE);
   line(336,309,330,340);

   setcolor(BLACK);
   line(325,266,330,276);            //fingers
   line(338,271,332,274);


   setcolor(LIGHTBLUE);
   line(351,257,416,257);
   line(351,258,351,367);
   line(416,258,416,367);
   line(352,367,375,367);                 //pant
   line(375,366,383,285);
   line(415,367,392,367);
   line(392,366,383,286);
   setfillstyle(1,LIGHTGRAY);
   floodfill(380,284,LIGHTBLUE);

   setcolor(BLACK);
   rectangle(340,368,374,378);
   setfillstyle(1,BLACK);
   floodfill(341,369,BLACK);         //shoes

   setcolor(BLACK);
   rectangle(393,368,414,378);
   setfillstyle(1,BLACK);
   floodfill(394,369,BLACK);

   setcolor(BLUE);
   settextstyle(7,1,5);
   outtextxy(25,20,"A STRAIGHT DRIVE");

  for(col=1;col<15;col++) //displaying colours
   {
    for(j=450;j>5;j--)
     {
      setcolor(col);
      circle(550,j,10);
      setfillstyle(1,col);
      floodfill(550,j,col);

      setcolor(col);
      circle(120,j,10);
      setfillstyle(1,col);
      floodfill(120,j,col);

      delay(0);
     }
   }
 }

////////////////////////////////////////////////////////////////////////////

 void totalgr()
  {

    clrscr();

    hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);     //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   int incr;

    setcolor(LIGHTGRAY);
    rectangle(0,0,640,480);
    setfillstyle(1,LIGHTGRAY);         //back ground
    floodfill(1,1,LIGHTGRAY);

    for(incr=0;incr<5000;incr++)   //displaying the crowd
     {
      setcolor(random(15));
      circle(random(640),random(480),3);
     }

    setcolor(DARKGRAY);
    rectangle(75,1,570,475);              //background
    setfillstyle(1,DARKGRAY);
    floodfill(76,2,DARKGRAY);

    setcolor(GREEN);
    rectangle(75,1,570,475);
    setfillstyle(1,GREEN);                //background
    floodfill(76,2,GREEN);



    setcolor(GREEN);
    circle(320,240,241);              //PLAYGROUND CIRCLE
    setfillstyle(1,GREEN);
    floodfill(320,240,GREEN);

////////////////////////////////////

    setcolor(YELLOW);
    circle(320,240,240);
    setcolor(YELLOW);                //BOUNDARY
    circle(320,240,239);
    setcolor(YELLOW);
    circle(320,240,238);

    setcolor(WHITE);
    circle(320,240,140);
    circle(320,240,141);

/////////////////////////////////////

    setcolor(YELLOW);
    rectangle(280,150,350,310);         //PITCH
    setfillstyle(1,YELLOW);
    floodfill(281,171,YELLOW);

//////////////////////////////////////

    setcolor(BLACK);
    line(309,158,320,158);
    line(309,159,320,159);               //BALES
    line(309,288,320,288);
    line(309,289,320,289);

/////////////////////////////////////

    setcolor(BROWN);
    line(309,170,309,160);
    line(310,170,310,160);
    line(314,170,314,160);
    line(315,170,315,160);
    line(319,170,319,160);
    line(320,170,320,160);
    line(309,300,309,290);              //STUMPS
    line(310,300,310,290);
    line(314,300,314,290);
    line(315,300,315,290);
    line(319,300,319,290);
    line(320,300,320,290);

////////////////////////////////////////

     setcolor(BLACK);
     line(289,170,289,180);
     line(290,170,290,180);
     line(339,170,339,180);
     line(340,170,340,180);
     line(280,179,350,179);
     line(280,180,350,180);
     line(290,300,290,290);                //CREASE
     line(289,300,289,290);
     line(339,300,339,290);
     line(340,300,340,290);
     line(280,288,307,288);
     line(280,289,307,289);
     line(322,289,350,289);
     line(322,288,350,288);

//////////////////////////////////////////////////////

    setcolor(WHITE);
    circle(443,377,3);
    setfillstyle(1,WHITE);
    floodfill(443,377,WHITE);
					//fielders
    setcolor(WHITE);
    circle(304,123,3);
    setfillstyle(1,WHITE);
    floodfill(304,123,WHITE);
					//fielders
    setcolor(WHITE);
    circle(204,386,3);
    setfillstyle(1,WHITE);
    floodfill(204,386,WHITE);
					//fielders
    setcolor(WHITE);
    circle(387,486,3);
    setfillstyle(1,WHITE);
    floodfill(387,486,WHITE);
					   //fielders
    setcolor(WHITE);
    circle(132,168,3);
    setfillstyle(1,WHITE);
    floodfill(132,168,WHITE);
					//fielders
    setcolor(WHITE);
    circle(505,266,3);
    setfillstyle(1,WHITE);
    floodfill(505,266,WHITE);
					 //fielders
    setcolor(WHITE);
    circle(422,196,3);
    setfillstyle(1,WHITE);
    floodfill(422,196,WHITE);
					  //fielders
    setcolor(WHITE);
    circle(407,290,3);
    setfillstyle(1,WHITE);
    floodfill(407,290,WHITE);

    setcolor(WHITE);
    circle(213,207,3);
    setfillstyle(1,WHITE);                  //fielders
    floodfill(213,207,WHITE);

    setcolor(WHITE);
    circle(270,119,3);
    setfillstyle(1,WHITE);
    floodfill(270,119,WHITE);
					    //fielders
    setcolor(WHITE);
    circle(388,38,3);
    setfillstyle(1,WHITE);
    floodfill(388,38,WHITE);

    setcolor(RED);
    rectangle(295,329,304,338);
    setfillstyle(1,BROWN);
    floodfill(296,330,RED);

    setcolor(BLACK);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");


    getch();

  if(option==3)
   {
    autoplay();       //to choose to autoplay if 2nd batting of user
   }

  if(option!=3)
   {
    innings1();       //if user wins the toss he can bat or bowl
   }

  }

////////////////////////////////////////////////////////////////////////////////

//     displaying the introduction to the innings

 void gameon()
  {
    clrscr();

    hidemouse();

    cleardevice();

    int i,j,k,col;

    setcolor(BLACK);
    rectangle(0,0,640,480);           //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

////////////////////////////////////  start of g ///////////////////////////

  for(i=90,j=70;(i>80);i--,j--)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

  for(i=80,j=60;(i>30);i--)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

  for(i=30,j=60;(i>20);i--,j++)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

  for(i=20,j=70;(j<150);j++)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

  for(i=21,j=150;(i<90);i++)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

  for(i=90,j=149;(j>120);j--)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

  for(i=90,j=120;(i>70);i--)
   {
    setcolor(RED);
    circle(i,j,10);
    setfillstyle(1,RED);
    floodfill(i+1,j+1,RED);

    delay(2);
   }

/////////////////////////////g end/////////////////////////////////////

///////////////////////////// start of a //////////////////////////////

  for(i=150,j=149;(i<195);i++,j-=2)
   {
    setcolor(GREEN);
    circle(i,j,10);
    setfillstyle(1,GREEN);
    floodfill(i+1,j+1,GREEN);
    delay(2);
     k=j;
   }

  for(i=195,j=61;(j<150);i++,j++)
   {
    setcolor(GREEN);
    circle(i,j,10);
    setfillstyle(1,GREEN);
    floodfill(i,j,GREEN);
    delay(2);
   }

  for(i=172,j=110;(i<200);i++)
   {
    setcolor(GREEN);
    circle(i,j,10);
    setfillstyle(1,GREEN);
    floodfill(i+1,j+1,GREEN);
    delay(2);
   }

////////////////////////////////// a end /////////////////////////////////

//////////////////////////////// start of m //////////////////////////////

  for(i=330,j=150;(j>60);j--)
   {
    setcolor(YELLOW);
    circle(i,j,10);
    setfillstyle(1,YELLOW);
    floodfill(i+1,j+1,YELLOW);
    delay(2);
   }

  for(i=331,j=60;(i<375);i++,j+=2)
   {
    setcolor(YELLOW);
    circle(i,j,10);
    setfillstyle(1,YELLOW);
    floodfill(i,j,YELLOW);
    delay(2);
   }

  for(i=375,j=149;(i<420);i++,j-=2)
   {
    setcolor(YELLOW);
    circle(i,j,10);
    setfillstyle(1,YELLOW);
    floodfill(i+1,j+1,YELLOW);
    delay(2);
   }

  for(i=420,j=60;(j<152);j++)
   {
    setcolor(YELLOW);
    circle(i,j,10);
    setfillstyle(1,YELLOW);
    floodfill(i+1,j+1,YELLOW);
    delay(2);
   }

////////////////////////////////////m end////////////////////////////////

///////////////////////////////// start of e /////////////////////////////

  for(i=480,j=152;(i<560);i++)
   {
    setcolor(MAGENTA);
    circle(i,j,10);
    setfillstyle(1,MAGENTA);
    floodfill(i+1,j+1,MAGENTA);
    delay(2);
   }

  for(i=480,j=152;(j>60);j--)
   {
    setcolor(MAGENTA);
    circle(i,j,10);
    setfillstyle(1,MAGENTA);
    floodfill(i+1,j+1,MAGENTA);
    delay(2);
   }

  for(i=490,j=105;(i<520);i++)
   {
    setcolor(MAGENTA);
    circle(i,j,10);
    setfillstyle(1,MAGENTA);
    floodfill(i+1,j+1,MAGENTA);
    delay(2);
   }

  for(i=485,j=60;(i<555);i++)
   {
    setcolor(MAGENTA);
    circle(i,j,10);
    setfillstyle(1,MAGENTA);
    floodfill(i+1,j+1,MAGENTA);
    delay(2);
   }

//////////////////////////////////end e////////////////////////////////

/////////////////////////////// start of on ///////////////////////////////

  setcolor(LIGHTBLUE);
  settextstyle(4,0,30);
  outtextxy(220,200,"O");

  setcolor(LIGHTGREEN);
  settextstyle(4,0,30);
  outtextxy(310,200,"N");

////////////////////////////////////end on//////////////////////////////

 for(col=1;col<16;col++)     //displaying colours in increasing circles
  {
  for(i=15,j=400,k=5;(k<100);k++,i+=k)
   {
    setcolor(col);
    circle(i,j,k);
    setfillstyle(1,col);
    floodfill(i,j,col);

    delay(3);
   }
  }

  setcolor(WHITE);
  settextstyle(2,0,6);
  outtextxy(250,455,"Press any key");

 getch();

 totalgr();   //to display the entire ground

 }

/////////////////////////////////////////////////////////////////////////////

//       to begin the count down for the game

 void countdown()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set a blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    circle(300,240,150);
    circle(300,240,155);

    setcolor(RED);
    settextstyle(4,0,9);
    outtextxy(240,170,"10");

    delay(500);

    cleardevice();

    setcolor(MAGENTA);
    circle(300,240,150);
    circle(300,240,155);

    setcolor(GREEN);
    settextstyle(4,0,9);
    outtextxy(270,170,"9");

    delay(500);

    cleardevice();

    setcolor(YELLOW);
    circle(300,240,150);
    circle(300,240,155);

    setcolor(BLUE);
    settextstyle(4,0,9);
    outtextxy(270,170,"8");

    delay(500);

    cleardevice();

    setcolor(BLUE);
    circle(300,240,150);
    circle(300,240,155);


    setcolor(YELLOW);
    settextstyle(4,0,9);
    outtextxy(270,170,"7");

    delay(500);

    cleardevice();

    setcolor(GREEN);
    circle(300,240,150);
    circle(300,240,155);

    setcolor(BROWN);
    settextstyle(4,0,9);
    outtextxy(270,170,"6");

    delay(500);

    cleardevice();

    setcolor(BROWN);
    circle(300,240,150);
    circle(300,240,155);


    setcolor(LIGHTBLUE);
    settextstyle(4,0,9);
    outtextxy(270,170,"5");

    delay(500);

    cleardevice();

    setcolor(MAGENTA);
    circle(300,240,150);
    circle(300,240,155);

    setcolor(BLUE);
    settextstyle(4,0,9);
    outtextxy(270,170,"4");

    delay(500);

    cleardevice();

    setcolor(GREEN);
    circle(300,240,150);
    circle(300,240,155);

    setcolor(BROWN);
    settextstyle(4,0,9);
    outtextxy(225,170,"OH!");

    delay(1000);

    cleardevice();

    setcolor(LIGHTBLUE);
    circle(300,240,150);
    circle(300,240,155);


    setcolor(GREEN);
    settextstyle(4,0,9);
    outtextxy(210,170,"YES!");

    delay(1000);

    cleardevice();

    setcolor(LIGHTGREEN);

    circle(300,240,150);
    setfillstyle(1,LIGHTGREEN);
    floodfill(301,241,LIGHTGREEN);
    setcolor(MAGENTA);

    circle(300,240,155);

    setcolor(BLUE);
    settextstyle(4,0,9);
    outtextxy(170,170,"AB");

    setcolor(RED);
    settextstyle(4,0,9);
    outtextxy(320,170,"HI");

    setcolor(WHITE);
    settextstyle(2,0,6);
    outtextxy(250,455,"Press any key");

    getch();

    clrscr();

    gameon(); //to show intro of the innings
  }

/////////////////////////////////////////////////////////////////////////////

//       to display the intoduction for the game if desired by the user

 void intro()
  {
    hidemouse();

    cleardevice();

  int i,col;
  for(i=0;i<20;i++)  //to generate colours
   {
    col=random(15);


   setcolor(col);
   settextstyle(7,0,7);
   outtextxy(150,150,"COMPUTER");

   setcolor(col);
   settextstyle(7,0,7);
   outtextxy(320,260,"SCIENCE");

   setcolor(col);
   settextstyle(7,0,7);
   outtextxy(50,370,"PROJECT");

   setcolor(BLUE);
   rectangle(147,220,506,228);      //underline
   setfillstyle(1,LIGHTBLUE);
   floodfill(148,221,BLUE);

   setcolor(GREEN);
   rectangle(316,328,605,336);      //underline
   setfillstyle(1,LIGHTGREEN);
   floodfill(317,329,GREEN);

   setcolor(RED);
   rectangle(45,437,335,445);       //underline
   setfillstyle(1,LIGHTRED);
   floodfill(46,438,RED);

   setcolor(DARKGRAY);
   rectangle(60,243,295,370);          //monitor shade
   setfillstyle(1,LIGHTGRAY);
   floodfill(61,244,DARKGRAY);

   setcolor(BLACK);
   rectangle(70,253,285,355);         //monitor
   setfillstyle(1,BLACK);
   floodfill(71,254,BLACK);

   setcolor(BLACK);
   settextstyle(1,0,1);
   outtextxy(160,351,"SONY");

   setcolor(LIGHTMAGENTA);
   settextstyle(7,0,4);
   outtextxy(125,255,"Using");

   setcolor(YELLOW);
   settextstyle(7,0,4);
   outtextxy(145,310,"C++");

   setcolor(MAGENTA);
   line(120,0,240,0);
   line(120,1,120,70);
   line(240,1,240,70);
   line(120,71,93,85);               //torch 1
   line(240,71,267,85);
   line(93,86,93,102);
   line(267,86,267,102);
   line(94,102,266,102);
   setfillstyle(1,LIGHTMAGENTA);
   floodfill(167,15,MAGENTA);

   setcolor(MAGENTA);
   line(440,0,560,0);
   line(440,1,440,70);
   line(560,1,560,70);
   line(440,71,417,85);                //torch 2
   line(560,71,583,85);
   line(417,86,417,102);
   line(583,86,583,102);
   line(418,102,582,102);
   setfillstyle(1,LIGHTMAGENTA);
   floodfill(515,55,MAGENTA);

   setcolor(col);
   rectangle(96,102,264,142);           //light from torch 1
   setfillstyle(1,col);
   floodfill(97,103,col);

   rectangle(420,102,580,142);
   setfillstyle(1,col);                 //light from torch 2
   floodfill(421,103,col);

   setcolor(YELLOW);
   circle(342,72,70);                   //face
   setfillstyle(1,YELLOW);
   floodfill(342,72,YELLOW);

   setcolor(BLACK);
   circle(310,42,4);               //eye
   setfillstyle(1,BLACK);
   floodfill(310,42,BLACK);

   circle(370,42,4);                 //eye
   setfillstyle(1,BLACK);
   floodfill(370,42,BLACK);

   setcolor(RED);
   arc(340,84,190,350,35);           //smile

   setcolor(GREEN);
   rectangle(154,15,160,62);         //decoration for the torch 1
   setfillstyle(1,LIGHTGREEN);
   floodfill(155,16,GREEN);

   setcolor(BLUE);
   rectangle(175,15,181,62);
   setfillstyle(1,LIGHTBLUE);         //decoration for the torch 1
   floodfill(176,16,BLUE);

   setcolor(GREEN);
   rectangle(196,15,202,62);           //decoration for the torch 1
   setfillstyle(1,LIGHTGREEN);
   floodfill(197,16,GREEN);

   setcolor(GREEN);
   rectangle(470,15,476,62);
   setfillstyle(1,LIGHTGREEN);        //decoration for the torch 2
   floodfill(471,16,GREEN);

   setcolor(BLUE);
   rectangle(491,15,497,62);
   setfillstyle(1,LIGHTBLUE);         //decoration for the torch 2
   floodfill(492,16,BLUE);

   setcolor(GREEN);
   rectangle(513,15,519,62);           //decoration for the torch 2
   setfillstyle(1,LIGHTGREEN);
   floodfill(514,16,GREEN);

   setcolor(RED);
   circle(150,85,5);                  //decoration for the torch 1
   setfillstyle(1,LIGHTRED);
   floodfill(150,85,RED);

   setcolor(YELLOW);
   circle(178,85,5);                  //decoration for the torch 1
   setfillstyle(1,YELLOW);
   floodfill(178,85,YELLOW);

   setcolor(RED);
   circle(206,85,5);                   //decoration for the torch 1
   setfillstyle(1,LIGHTRED);
   floodfill(206,85,RED);

   setcolor(RED);
   circle(470,85,5);                   //decoration for the torch 2
   setfillstyle(1,LIGHTRED);
   floodfill(470,85,RED);

   setcolor(YELLOW);
   circle(498,85,5);                   //decoration for the torch 2
   setfillstyle(1,YELLOW);
   floodfill(498,85,YELLOW);

   setcolor(RED);
   circle(526,85,5);                       //decoration for the torch 2
   setfillstyle(1,LIGHTRED);
   floodfill(526,85,RED);

   setcolor(LIGHTGREEN);
   settextstyle(7,0,6);
   outtextxy(360,385,"2013");

   setcolor(BROWN);
   settextstyle(7,0,6);
   outtextxy(490,385,"-");

   setcolor(LIGHTRED);
   settextstyle(7,0,6);
   outtextxy(520,385,"2014");

   delay(400);

  }

/////////////////////////////////////////////////////////////////////////

   setcolor(GREEN);
   settextstyle(7,0,7);
   outtextxy(150,150,"COMPUTER");

   setcolor(LIGHTRED);
   settextstyle(7,0,7);
   outtextxy(320,260,"SCIENCE");

   setcolor(LIGHTBLUE);
   settextstyle(7,0,7);
   outtextxy(50,370,"PROJECT");

   setcolor(BLUE);
   rectangle(147,220,506,228);
   setfillstyle(1,LIGHTBLUE);         //underline
   floodfill(148,221,BLUE);

   setcolor(GREEN);
   rectangle(316,328,605,336);
   setfillstyle(1,LIGHTGREEN);       //underline
   floodfill(317,329,GREEN);

   setcolor(RED);
   rectangle(45,437,335,445);        //underline
   setfillstyle(1,LIGHTRED);
   floodfill(46,438,RED);

   setcolor(DARKGRAY);
   rectangle(60,243,295,370);          //monitor shade
   setfillstyle(1,LIGHTGRAY);
   floodfill(61,244,DARKGRAY);

   setcolor(BLACK);
   rectangle(70,253,285,355);           //monitor
   setfillstyle(1,BLACK);
   floodfill(71,254,BLACK);

   setcolor(BLACK);
   settextstyle(1,0,1);
   outtextxy(160,351,"SONY");

   setcolor(LIGHTMAGENTA);
   settextstyle(7,0,4);
   outtextxy(125,255,"Using");

   setcolor(YELLOW);
   settextstyle(7,0,4);
   outtextxy(145,310,"C++");

   setcolor(MAGENTA);
   line(120,0,240,0);
   line(120,1,120,70);
   line(240,1,240,70);               //torch 1
   line(120,71,93,85);
   line(240,71,267,85);
   line(93,86,93,102);
   line(267,86,267,102);
   line(94,102,266,102);
   setfillstyle(1,LIGHTMAGENTA);
   floodfill(167,15,MAGENTA);


   setcolor(MAGENTA);
   line(440,0,560,0);
   line(440,1,440,70);
   line(560,1,560,70);
   line(440,71,417,85);              //torch 2
   line(560,71,583,85);
   line(417,86,417,102);
   line(583,86,583,102);
   line(418,102,582,102);
   setfillstyle(1,LIGHTMAGENTA);
   floodfill(515,55,MAGENTA);

   setcolor(WHITE);
   rectangle(96,102,264,142);      //light from torch 1
   setfillstyle(1,WHITE);
   floodfill(97,103,WHITE);

   rectangle(420,102,580,142);       //light from torch 2
   setfillstyle(1,WHITE);
   floodfill(421,103,WHITE);

   setcolor(YELLOW);
   circle(342,72,70);                //face
   setfillstyle(1,YELLOW);
   floodfill(342,72,YELLOW);

   setcolor(BLACK);
   circle(310,42,4);                  //eye
   setfillstyle(1,BLACK);
   floodfill(310,42,BLACK);

   circle(370,42,4);
   setfillstyle(1,BLACK);             //eye
   floodfill(370,42,BLACK);

   setcolor(RED);                   //smile
   arc(340,84,190,350,35);

   setcolor(GREEN);
   rectangle(154,15,160,62);            //decoration for torch 1
   setfillstyle(1,LIGHTGREEN);
   floodfill(155,16,GREEN);

   setcolor(BLUE);
   rectangle(175,15,181,62);            //decoration for torch 1
   setfillstyle(1,LIGHTBLUE);
   floodfill(176,16,BLUE);

   setcolor(GREEN);
   rectangle(196,15,202,62);             //decoration for torch 1
   setfillstyle(1,LIGHTGREEN);
   floodfill(197,16,GREEN);

   setcolor(GREEN);
   rectangle(470,15,476,62);           //decoration for torch 2
   setfillstyle(1,LIGHTGREEN);
   floodfill(471,16,GREEN);

   setcolor(BLUE);
   rectangle(491,15,497,62);            //decoration for torch 2
   setfillstyle(1,LIGHTBLUE);
   floodfill(492,16,BLUE);

   setcolor(GREEN);
   rectangle(513,15,519,62);            //decoration for torch 2
   setfillstyle(1,LIGHTGREEN);
   floodfill(514,16,GREEN);

   setcolor(RED);
   circle(150,85,5);                    //decoration for torch 1
   setfillstyle(1,LIGHTRED);
   floodfill(150,85,RED);

   setcolor(YELLOW);                     //decoration for torch 1
   circle(178,85,5);
   setfillstyle(1,YELLOW);
   floodfill(178,85,YELLOW);

   setcolor(RED);
   circle(206,85,5);                    //decoration for torch 1
   setfillstyle(1,LIGHTRED);
   floodfill(206,85,RED);

   setcolor(RED);
   circle(470,85,5);                //decoration for torch 2
   setfillstyle(1,LIGHTRED);
   floodfill(470,85,RED);

   setcolor(YELLOW);
   circle(498,85,5);
   setfillstyle(1,YELLOW);            //decoration for torch 2
   floodfill(498,85,YELLOW);

   setcolor(RED);
   circle(526,85,5);                  //decoration for torch 2
   setfillstyle(1,LIGHTRED);
   floodfill(526,85,RED);

   setcolor(LIGHTGREEN);
   settextstyle(7,0,6);
   outtextxy(360,385,"2013");

   setcolor(BROWN);
   settextstyle(7,0,6);
   outtextxy(490,385,"-");

   setcolor(LIGHTRED);
   settextstyle(7,0,6);
   outtextxy(520,385,"2014");

   setcolor(WHITE);
   settextstyle(2,0,6);
   outtextxy(250,455,"Press any key");

getch();

    clrscr();

for(i=0;i<25;i++)      // changing size and colour
   {
    col=random(15);
    setcolor(col);
    settextstyle(0,0,i);
    outtextxy(0,200,"DEDICATED");

    delay(50);

    cleardevice();
   }

  for(i=0;i<25;i++)    // changing size and colour
  {
    col=random(15);

  setcolor(col);
  settextstyle(0,0,i);
  outtextxy(109,200,"AT");

  delay(50);

  cleardevice();
  }

 for(i=0;i<25;i++) // changing size and colour
  {
   col=random(15);

    setcolor(col);
    settextstyle(0,0,i);
    outtextxy(0,200,"SWAMI`S");

    delay(50);

    cleardevice();
  }

 for(i=0;i<25;i++)  // changing size and colour
  {
   col=random(15);

    setcolor(col);
    settextstyle(0,0,i);
    outtextxy(0,200,"LOTUS");

    delay(50);

    cleardevice();
  }

 for(i=0;i<25;i++)  // changing size and colour
  {
   col=random(15);
   setcolor(col);
   settextstyle(0,0,i);
   outtextxy(0,200,"FEET");

   delay(50);

   cleardevice();
 }

  setcolor(GREEN);
  settextstyle(7,0,7);
  outtextxy(100,80,"DEDI");

  setcolor(LIGHTRED);
  settextstyle(7,0,7);
  outtextxy(268,80,"CATED");

  setcolor(RED);
  rectangle(91,148,257,156);
  setfillstyle(1,LIGHTRED);     //underline
  floodfill(92,149,RED);

  setcolor(GREEN);
  rectangle(266,148,467,156);      //underline
  setfillstyle(1,LIGHTGREEN);
  floodfill(267,149,GREEN);

  setcolor(YELLOW);
  settextstyle(7,0,5);
  outtextxy(109,200,"AT");

  setcolor(CYAN);
  rectangle(103,246,153,252);
  setfillstyle(1,LIGHTCYAN);       //underline
  floodfill(104,247,CYAN);

  setcolor(LIGHTGREEN);
  settextstyle(1,0,7);
  outtextxy(300,180,"SWAMI`S");

  setcolor(YELLOW);
  rectangle(295,248,530,256);
  setfillstyle(1,YELLOW);                //underline
  floodfill(296,249,YELLOW);

  setcolor(MAGENTA);
  settextstyle(4,0,7);
  outtextxy(100,270,"LOTUS");

  setcolor(GREEN);
  rectangle(99,342,305,350);
  setfillstyle(1,LIGHTGREEN);            //underline
  floodfill(100,343,GREEN);

  setcolor(CYAN);
  settextstyle(7,0,7);
  outtextxy(400,270,"FEET");

  setcolor(MAGENTA);
  rectangle(395,339,565,347);
  setfillstyle(1,LIGHTMAGENTA);         //underline
  floodfill(396,340,MAGENTA);

  setcolor(WHITE);
  settextstyle(2,0,6);
  outtextxy(250,455,"Press any key");

  getch();

    clrscr();
    setcolor(BLACK);
    rectangle(0,0,640,480);        //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

   setcolor(BROWN);
   line(73,116,445,116);
   line(73,184,445,184);
   line(73,117,44,150);          //bat
   line(73,183,44,151);
   line(445,117,470,140);
   line(445,183,470,160);
   line(470,141,470,159);
   setfillstyle(1,YELLOW);
   floodfill(410,140,BROWN);

   setcolor(GREEN);
   rectangle(471,140,630,160);         //underline
   setfillstyle(1,LIGHTGREEN);
   floodfill(472,141,GREEN);

   setcolor(RED);
   settextstyle(7,0,8);
   outtextxy(80,100,"CRICKET");

   setcolor(LIGHTBLUE);
   settextstyle(7,0,8);
   outtextxy(85,100,"CRICKET");

   setcolor(LIGHTGREEN);
   settextstyle(7,0,8);
   outtextxy(90,100,"CRICKET");

   setcolor(LIGHTMAGENTA);
   circle(320,320,120);             //ball
   setfillstyle(1,RED);
   floodfill(320,320,LIGHTMAGENTA);

   setcolor(WHITE);
   circle(320,320,115);      //grips for the ball
   circle(320,320,110);

   setcolor(YELLOW);
   settextstyle(7,0,8);
   outtextxy(240,265,"CUP");

   setcolor(LIGHTGREEN);
   settextstyle(7,0,8);
   outtextxy(245,265,"CUP");

   setcolor(LIGHTBLUE);
   settextstyle(7,0,8);
   outtextxy(250,265,"CUP");

   setcolor(LIGHTRED);
   settextstyle(4,0,8);
   outtextxy(42,0,"GET");

   setcolor(LIGHTGREEN);
   settextstyle(4,0,8);
   outtextxy(216,0,"READY");

   setcolor(WHITE);
   settextstyle(1,0,5);
   outtextxy(530,50,"FOR");

   setcolor(GREEN);
   rectangle(40,86,200,94);       //underline
   setfillstyle(1,LIGHTGREEN);
   floodfill(41,87,GREEN);

   setcolor(RED);
   rectangle(209,86,440,94);
   setfillstyle(1,LIGHTRED);     //underline
   floodfill(210,87,RED);

   setcolor(LIGHTGREEN);
   settextstyle(7,1,6);
   outtextxy(57,290,"ENJOY");

   setcolor(LIGHTRED);
   settextstyle(7,1,6);
   outtextxy(57,285,"ENJOY");

   setcolor(YELLOW);
   settextstyle(7,1,6);
   outtextxy(57,207,"IT");

   setcolor(LIGHTBLUE);
   settextstyle(7,1,6);
   outtextxy(57,202,"IT");

   setcolor(LIGHTGREEN);
   settextstyle(7,0,5);
   outtextxy(390,418,"SEASON");

   setcolor(YELLOW);
   settextstyle(7,0,5);
   outtextxy(395,418,"SEASON");

   setcolor(LIGHTBLUE);
   settextstyle(7,0,4);
   outtextxy(570,425,"-");

   setcolor(LIGHTRED);
   settextstyle(1,0,5);
   outtextxy(590,418,"I");

   setcolor(YELLOW);
   settextstyle(1,0,5);
   outtextxy(595,418,"I");

    if(sounds==1)
     {
      sound(800);
      delay(300);
      sound(10000000);
      delay(300);

      sound(800);                 //sound effects for the game title
      delay(300);
      sound(10000000);
      delay(300);

      sound(800);
      delay(300);
      nosound();
     }
   setcolor(WHITE);
   settextstyle(2,0,6);
   outtextxy(250,455,"Press any key");

getch();

    landscape();   //to display the main page
}

///////////////////////////////////////////////////////////////////////////////

main()
{
 clrscr();

   gotoxy(18,10);
    {
      cout<<"WHATS YOUR NAME"<<"\n";

	gets(name);

	clrscr();
    }

   gotoxy(18,10);
    {
     cout<<"DO YOU WANT TO SKIP INTRO ? (y/n)"<<"\n";
    }
     if(getch()==121)
      {
       clrscr();

       gotoxy(18,10);
       cout<<"HOW MANY OVERS MATCH U WANT TO PLAY"<<"\n";

       cin>>number;

       clrscr();

       int gd=DETECT,gm;
       initgraph(&gd,&gm,"C:\\TC\\BGI");  //initializing graphics

       sound();   //to enable or disable sounds

       cleardevice();

       landscape();  //to begin with main page if chosen by the user
      }

     else
      {
	clrscr();
	gotoxy(18,10);
	cout<<"HOW MANY OVERS MATCH U WANT TO PLAY"<<"\n";

       cin>>number;

       clrscr();

       int gd=DETECT,gm;
       initgraph(&gd,&gm,"C:\\TC\\BGI"); //initializing graphics

       cleardevice();

       sound();         //to enable or disable sounds

       setcolor(BLACK);
       rectangle(0,0,640,480);      //to set blank screen
       setfillstyle(1,BLACK);
       floodfill(1,1,BLACK);

       intro();  //to begin with th intro if chosen by the  user
      }

}

///////////////////////////   END   OF  FILE  2   ///////////////////////////

//////////////////////////    END   OF  THE  PROGRAM   //////////////////////

/////////////////////////     THANK     YOU      ////////////////////////////

		   //          SAI  RAM              \\