
/*                                                                                  -------  SAI RAM  --------

                                                              $$$$$$$$  COMPUTER SCIENCE PROJECT  $$$$$$$

                                                                         @@@@@  2013 - 2014  @@@@@

                                                                            !!!!!!!!!!!  CRICKET CUP  !!!!!!!!!!!

                                                                      %%%%  L.V.S.V.DURGA PRASAD  %%%%

                                                                                   (((((((((  XII M.P.C  ))))))))*/

  /*                                   THIS PROGRAM CONTAINS TWO .cpp FILES LINKED THROUGH A

	                          PROJECT NAMED AS CRICKET.prj . AN .exe FILE IS ALSO

				          PRESENT .                         */



		     //    FILE ONE OF THE PROGRAM    \\

	//                    HEADER FILES                         \\

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<dos.h>
#include<graphics.h>
#include<mouse.h>

/////////////////////////////////GLOBAL VARIABLES////////////////////////////

    int  del , lengt , runs=0 , wickets=0 , overs=0 , runs2=0 , balls=0 , sounds ;

    /*

    del;       to set the speed of the ball

    length;    to set the length of the ball

    runs=0;    represents the runs scored by the user

    wickets=0; represents the wickets taken

    overs=0;   represents the overs bowled

    runs2=0;   represents the runs scored by the computer

    balls=0;   represents the balls bowled
					     */

///////////////////// END OF GLOBAL VARIABLES ////////////////////////////

////////////////////// VARIABLES FROM THE 2nd FILE /////////////////////

    extern int  option;  //represents the result of toss 1-bat , 2&3-bowl

    extern int  number;  //represents the overs defined by the user

    extern char  name[25]; //represents the name of the user

/////////////////////// END OF VARABLES FROM 2nd FILE ///////////////////

///////////////////////// FUNCTION PROTOTYPES ///////////////////////////////

  extern void tosslose();    //function of 2nd file , to indicate loss of toss to the user

  extern void youwon();      //function of 2nd file , congratulates

  extern void youlost();     //function of 2nd file , encourages

  extern void controls();    //function of 2nd file , displays the controls

  extern void aboutus();     //function of 2nd file , displays the studio

  extern void credits();     //function of 2nd file , shows the acknowledgement team

  extern void needto();      //function of 2nd file , represents the runs needed to win

  extern void four();        //function of 2nd file , depicts the movement of ball to boundary as four

  extern void totalgr();     //function of 2nd file , depicts the whole ground

  extern void countdown();   //function of 2nd file , shows the count down

  extern void straightdrive();//function of 2nd file , depicts the straight drive shot

  extern void pullshot();    //function of 2nd file , depicts the pullshot

  extern void squarecut();   //function of 2nd file , depicts the squarecut

  extern void defence();     //function of 2nd file , depicts the defence

  extern void longon();      //function of 2nd file , depicts the long on shot

  extern void longoff();     //function of 2nd file , depicts the long off shot

  extern void caught();      //function of 2nd file , depicts the catching of ball

  extern void out();         //function of 2nd file , depicts the batsman getting out

  extern void score();       //function of 2nd file , shows the scorecard of user

  extern void scorei();      //function of 2nd file , shows the scorecard of computer

  extern void target();      //function of 2nd file , displays the target

  extern void defend();      //function of 2nd file , displays no. of runs to be defended

  void landscape();          //function of 1st file , depicts the home page

  void country();            //function of 1st file , to choose country

  void tosstime();           //function of 1st file , to toss the coin

  void innings2();           //function of 1st file , to begin 2nd innings

  void innings1();           //function of 1st file , to begin 1st innings

/////////////////////////////// END OF FUNCTION PROTOTYPES //////////////////

///////////////////////////////////FUNCTIONS\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

void autoplay()
 {
  clrscr();

  cleardevice();

  setcolor(LIGHTRED);
  settextstyle(7,0,6);
  outtextxy(30,50,"YOUR");

  setcolor(YELLOW);
  settextstyle(7,0,6);
  outtextxy(191,50,"OPTION");

  setcolor(GREEN);
  settextstyle(7,0,6);
  outtextxy(406,50,"PLEASE");

  setcolor(YELLOW);
  rectangle(28,104,166,109);
  setfillstyle(1,YELLOW);                  //underline
  floodfill(29,105,YELLOW);

  setcolor(GREEN);
  rectangle(190,104,378,109);
  setfillstyle(1,LIGHTGREEN);             //underline
  floodfill(191,105,GREEN);

  setcolor(RED);
  rectangle(404,104,610,109);
  setfillstyle(1,LIGHTRED);               //underline
  floodfill(405,105,RED);

  setcolor(DARKGRAY);
  rectangle(26,267,269,349);               //box for autoplay
  setfillstyle(1,YELLOW);
  floodfill(27,268,DARKGRAY);

  setcolor(BLUE);
  settextstyle(7,0,5);
  outtextxy(40,257,"INNINGS");

  setcolor(RED);
  settextstyle(7,0,5);
  outtextxy(30,305,"AUTO PLAY");

  setcolor(GREEN);
  rectangle(417,268,557,311);
  setfillstyle(1,YELLOW);
  floodfill(418,269,GREEN);

  setcolor(RED);
  settextstyle(7,0,6);
  outtextxy(420,257,"BOWL");

  while(1)
  {
   setmouselimit();
   showmouse();
   getstatus();
   gotoxy(1,1);
    {
     cout<<cx<<dx;
    }

    if((bx==1)&&(cx>=26)&&(cx<=269)&&(dx>=267)&&(dx<=349))
     {
      hidemouse();
      runs2 = (number*6)+1;
      target();
     }

    if((bx==1)&&(cx>=417)&&(cx<=557)&&(dx>=268)&&(dx<=311))
     {
      hidemouse();
      innings1();
     }

   }

}

/////////////////////////////////////////////////////////////////////////////

void sound()
 {
   clrscr();

   cleardevice();

  setcolor(LIGHTRED);
  settextstyle(7,0,6);
  outtextxy(50,100,"ENABLE  ");

  setcolor(GREEN);
  settextstyle(7,0,6);
  outtextxy(300,100,"SOUNDS");

  setcolor(WHITE);
  settextstyle(7,0,6);
  outtextxy(530,100,"???");

  setcolor(GREEN);
  rectangle(50,155,262,160);            //underline
  setfillstyle(1,LIGHTGREEN);
  floodfill(51,156,GREEN);

  setcolor(RED);
  rectangle(297,155,509,160);            //underline
  setfillstyle(1,LIGHTRED);
  floodfill(298,156,RED);

  setcolor(BLACK);
  rectangle(70,278,190,355);             //box for tick
  rectangle(423,258,497,353);            //box for cross

  setcolor(GREEN);

  line(75,320,99,352);
  line(100,351,180,285);
  line(76,317,100,350);
  line(101,349,176,285);
  line(77,314,101,348);                   //tick
  line(102,347,172,285);
  line(78,311,102,346);
  line(103,345,188,285);

  setcolor(RED);

  line(428,278,496,341);
  line(427,279,496,343);                 //cross
  line(426,281,495,345);
  line(488,260,435,351);
  line(490,260,437,351);
  line(492,260,439,351);


 while(1)
  {
   setmouselimit();
   showmouse();
   changemouse(9);
   getstatus();
   gotoxy(1,1);
    {
     cout<<cx<<dx;
    }

    if((bx==1)&&(cx>=70)&&(cx<=190)&&(dx>=278)&&(dx<=355))
     {
      hidemouse();
      sounds = 1 ;
      break;
     }

    if((bx==1)&&(cx>=423)&&(cx<=497)&&(dx>=258)&&(dx<=353))
     {
      hidemouse();
      sounds = 0 ;
      break;
     }

  }

}

/////////////////////////////////////////////////////////////////////////////

void exitme()
 {
   clrscr();

   cleardevice();

  setcolor(LIGHTRED);
  settextstyle(7,0,6);
  outtextxy(30,50,"YOUR");

  setcolor(YELLOW);
  settextstyle(7,0,6);
  outtextxy(191,50,"OPTION");

  setcolor(GREEN);
  settextstyle(7,0,6);
  outtextxy(406,50,"PLEASE");

  setcolor(YELLOW);
  rectangle(28,104,166,109);
  setfillstyle(1,YELLOW);                  //underline
  floodfill(29,105,YELLOW);

  setcolor(GREEN);
  rectangle(190,104,378,109);
  setfillstyle(1,LIGHTGREEN);             //underline
  floodfill(191,105,GREEN);

  setcolor(RED);
  rectangle(404,104,610,109);
  setfillstyle(1,LIGHTRED);               //underline
  floodfill(405,105,RED);

  setcolor(DARKGRAY);
  rectangle(68,265,305,317);           //box for credits
  setfillstyle(1,BLACK);
  floodfill(69,271,DARKGRAY);

  setcolor(DARKGRAY);
  rectangle(396,265,539,317);          //box to exit
  setfillstyle(1,BLACK);
  floodfill(397,271,DARKGRAY);

  setcolor(LIGHTRED);
  settextstyle(7,0,6);
  outtextxy(70,257,"CREDITS");

  setcolor(GREEN);
  settextstyle(7,0,6);
  outtextxy(400,257,"EXIT");

  while(1)
  {
   setmouselimit();
   showmouse();
   getstatus();
   gotoxy(1,1);
    {
     cout<<cx<<dx;
    }

   if((bx==1)&&(cx>=68)&&(cx<=305)&&(dx>=265)&&(dx<=317))
    {
     credits();
    }

   if((bx==1)&&(cx>=396)&&(cx<=539)&&(dx>=265)&&(dx<=317))
    {
     exit(0);
    }

  }

}


/////////////////////////////////////////////////////////////////////////////

void country()
   {
       clrscr();

       cleardevice();

       setcolor(BLACK);
       rectangle(0,0,640,480);
       setfillstyle(1,BLACK);
       floodfill(1,1,BLACK);

       setcolor(YELLOW);
       settextstyle(7,0,5);
       outtextxy(20,20,"CHOOSE");

       setcolor(MAGENTA);
       rectangle(20,65,180,70);           //underline
       setfillstyle(1,LIGHTMAGENTA);
       floodfill(21,66,MAGENTA);

       setcolor(LIGHTMAGENTA);
       settextstyle(7,0,5);
       outtextxy(240,20,"YOUR");

       setcolor(BLUE);
       rectangle(238,65,352,70);           //underline
       setfillstyle(1,LIGHTBLUE);
       floodfill(239,66,BLUE);

       setcolor(LIGHTBLUE);
       settextstyle(7,0,5);
       outtextxy(400,20,"COUNTRY");

       setcolor(YELLOW);
       rectangle(400,65,588,70);          //underline
       setfillstyle(1,YELLOW);
       floodfill(401,66,YELLOW);

       setcolor(LIGHTGREEN);
       rectangle(50,100,250,250);          //bangladesh flag
       setfillstyle(1,GREEN);
       floodfill(51,101,LIGHTGREEN);

       setcolor(RED);
       circle(145,172,35);
       setfillstyle(1,LIGHTRED);           //bangladesh flag
       floodfill(145,172,RED);

       setcolor(YELLOW);
       settextstyle(7,0,5);
       outtextxy(18,260,"BANGLADESH");

       setcolor(LIGHTGREEN);
       rectangle(360,100,560,250);          //pakistan flag
       setfillstyle(1,GREEN);
       floodfill(361,101,LIGHTGREEN);

	 setcolor(WHITE);
	 line(418,216,490,200);
	 line(418,217,491,200);           //pakistan flag
	 line(418,218,492,200);
	 line(492,200,506,130);
	 line(493,200,507,130);

	 circle(450,155,5);
	 setfillstyle(1,WHITE);           //pakistan flag
	 floodfill(450,155,WHITE);

	 setcolor(YELLOW);
	 settextstyle(7,0,5);
	 outtextxy(360,260,"PAKISTAN");

	 setcolor(BROWN);
	 rectangle(230,325,430,375);          //indian flag
	 setfillstyle(1,LIGHTRED);
	 floodfill(231,326,BROWN);

	 setcolor(WHITE);
	 rectangle(230,375,430,425);          //indian flag
	 setfillstyle(1,WHITE);
	 floodfill(231,376,WHITE);

	 setcolor(BLUE);
	 circle(330,400,25);              //indian flag
	 setfillstyle(1,LIGHTBLUE);
	 floodfill(330,400,BLUE);

	 setcolor(GREEN);
	 rectangle(230,425,430,475);          //indian flag
	 setfillstyle(1,LIGHTGREEN);
	 floodfill(231,426,GREEN);

	 setcolor(WHITE);
	 line(330,400,330,375);
	 line(330,400,330,425);
	 line(330,400,355,400);
	 line(330,400,305,400);                //spokes
	 line(330,400,345,380);
	 line(330,400,315,380);
	 line(330,400,345,420);
	 line(330,400,315,420);

	 setcolor(YELLOW);
	 settextstyle(7,0,5);
	 outtextxy(75,375,"INDIA");

	 while(1)
	  {
	   setmouselimit();
	   showmouse();
	   getstatus();
	   gotoxy(1,1);
	    {
	     cout<<cx<<dx;
	    }

	    if((bx==1)&&(cx>=50)&&(cx<=250)&&(dx>=100)&&(dx<=250))
	     {
	      hidemouse();


	    if(sounds==1)
	     {
	      for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	     }

	      tosstime();
	      break;
	     }
	    if((bx==1)&&(cx>=360)&&(cx<=560)&&(dx>=100)&&(dx<=350))
	     {
	      hidemouse();


	    if(sounds==1)
	     {
	      for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();

	     }
	      tosstime();
	      break;
	     }
	    if((bx==1)&&(cx>=230)&&(cx<=430)&&(dx>=325)&&(dx<=475))
	     {
	      hidemouse();

	   if(sounds==1)
	    {
	      for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	     }
	      tosstime();
	      break;
	     }
	   }
 }

//////////////////////////////////////////////////////////////////////////

 void tosswin()
  {
    clrscr();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(40,40,"U");

    setcolor(LIGHTRED);
    settextstyle(7,0,7);
    outtextxy(120,40,"WON");

    setcolor(YELLOW);
    settextstyle(7,0,7);
    outtextxy(300,40,"THE");

    setcolor(BLUE);
    settextstyle(7,0,7);
    outtextxy(480,40,"TOSS");

    setcolor(LIGHTBLUE);
    rectangle(28,109,75,115);           //underline
    setfillstyle(1,LIGHTBLUE);
    floodfill(29,110,LIGHTBLUE);

    setcolor(LIGHTBLUE);
    rectangle(28,109,75,115);           //underline
    setfillstyle(1,LIGHTBLUE);
    floodfill(29,110,LIGHTBLUE);

    setcolor(LIGHTBLUE);
    rectangle(28,109,75,115);           //underline
    setfillstyle(1,LIGHTBLUE);
    floodfill(29,110,LIGHTBLUE);

    setcolor(YELLOW);
    rectangle(117,109,240,115);
    setfillstyle(1,YELLOW);          //underline
    floodfill(118,110,YELLOW);

    setcolor(LIGHTMAGENTA);
    rectangle(294,109,429,115);
    setfillstyle(1,LIGHTMAGENTA);        //underline
    floodfill(295,110,LIGHTMAGENTA);

    setcolor(LIGHTGREEN);
    rectangle(472,109,629,115);
    setfillstyle(1,LIGHTGREEN);          //underline
    floodfill(473,110,LIGHTGREEN);

    setcolor(BLUE);
    settextstyle(7,0,7);
    outtextxy(70,155,"U");

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(200,155,"CHOOSE");

    setcolor(RED);
    settextstyle(7,0,7);
    outtextxy(540,155,"TO");

    setcolor(GREEN);
    rectangle(62,223,102,229);
    setfillstyle(1,LIGHTGREEN);
    floodfill(63,224,GREEN);

    setcolor(RED);
    rectangle(197,223,445,229);
    setfillstyle(1,LIGHTRED);
    floodfill(198,224,RED);

    setcolor(BLUE);
    rectangle(531,223,604,229);
    setfillstyle(1,LIGHTBLUE);
    floodfill(533,224,BLUE);

    setcolor(BLUE);
    rectangle(75,260,86,320);
    setfillstyle(1,LIGHTGREEN);         //handle
    floodfill(76,261,BLUE);

    setcolor(BROWN);
    line(75,321,86,321);
    line(74,321,58,325);
    line(87,321,103,325);
    line(58,326,58,440);
    line(103,326,103,440);              //willow
    line(58,441,80,450);
    line(103,441,81,450);
    setfillstyle(1,YELLOW);
    floodfill(76,375,BROWN);

    setcolor(LIGHTRED);
    line(67,330,67,420);
    line(66,330,66,420);
    line(94,330,94,420);
    line(95,330,95,420);

    setcolor(BLUE);
    line(79,330,79,378);
    line(80,330,80,378);

    setcolor(MAGENTA);
    circle(582,388,15);
    setfillstyle(1,RED);
    floodfill(582,388,MAGENTA);
    setcolor(WHITE);
    circle(582,388,13);
    circle(582,388,11);

    setcolor(YELLOW);
    line(250,294,270,294);
    line(250,295,250,430);
    line(270,295,270,430);
    line(250,431,260,440);
    line(270,431,260,439);
    setfillstyle(1,BROWN);
    floodfill(261,296,YELLOW);

    line(295,294,315,294);
    line(295,295,295,430);
    line(315,295,315,430);
    line(295,431,305,440);
    line(315,431,305,439);
    setfillstyle(1,BROWN);
    floodfill(305,296,YELLOW);

    line(340,294,360,294);
    line(340,295,340,430);
    line(360,295,360,430);
    line(340,431,350,440);
    line(360,431,350,439);
    setfillstyle(1,BROWN);
    floodfill(350,296,YELLOW);

    setcolor(GREEN);
    rectangle(253,283,301,293);
    setfillstyle(1,LIGHTGREEN);
    floodfill(254,284,GREEN);

    setcolor(BLUE);
    rectangle(307,283,358,293);
    setfillstyle(1,LIGHTBLUE);
    floodfill(308,284,BLUE);

    setcolor(BLUE);
    line(257,303,257,397);
    line(258,303,258,397);
    line(259,303,259,397);
    setcolor(RED);
    line(304,303,304,397);
    line(303,303,303,397);
    line(305,303,305,397);
    setcolor(GREEN);
    line(349,303,349,303);
    line(350,303,350,397);
    line(351,303,351,397);

    setcolor(GREEN);
    rectangle(100,275,216,323);
    setfillstyle(1,YELLOW);
    floodfill(101,276,GREEN);


    setcolor(RED);
    settextstyle(7,0,6);
    outtextxy(110,265,"BAT");

    setcolor(BLUE);
    rectangle(480,300,630,360);
    setfillstyle(1,YELLOW);
    floodfill(481,328,BLUE);


    setcolor(RED);
    settextstyle(7,0,6);
    outtextxy(490,295,"BOWL");

   while(1)
    {
     setmouselimit();
     showmouse();              //initializing mouse
     getstatus();
     gotoxy(1,1);
      {
       cout<<cx<<dx;
      }

     if((bx==1)&&(cx>=100)&&(cx<=216)&&(dx>=275)&&(dx<=323))
      {
       hidemouse();
       option=1;

	   if(sounds==1)
	    {

	     for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	     }

       countdown(); //to start count down for the game
       totalgr();   //to display the image of the entire ground
       break;
      }
     if((bx==1)&&(cx>=480)&&(cx<=630)&&(dx>=300)&&(dx<=360))
      {
       hidemouse();
       option=2;

	  if(sounds==1)
	   {
	     for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	     }

       countdown(); //to start count down for the game
       totalgr();   //to display the image of the entire ground
       break;
      }
     }
  }

/////////////////////////////////////////////////////////////////////////////

 void tosstime()
  {
    clrscr();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);
    setfillstyle(1,BLACK);           //to set a blank screen
    floodfill(1,1,BLACK);

    setcolor(LIGHTRED);
    circle(320,240,100);
    setfillstyle(1,LIGHTRED);
    floodfill(320,240,LIGHTRED);

    setcolor(YELLOW);
    circle(320,240,95);
    circle(320,240,96);
    circle(320,240,94);

    setcolor(RED);
    settextstyle(7,0,7);
    outtextxy(40,40,"IT'S");
    setcolor(GREEN);
    settextstyle(4,0,7);
    outtextxy(230,40,"TOSS");
    setcolor(BLUE);
    settextstyle(7,0,7);
    outtextxy(450,40,"TIME");

    setcolor(LIGHTGREEN);
    rectangle(34,114,156,125);
    setfillstyle(1,LIGHTGREEN);
    floodfill(35,115,LIGHTGREEN);

    setcolor(LIGHTBLUE);
    rectangle(230,114,390,125);
    setfillstyle(1,LIGHTBLUE);
    floodfill(231,115,LIGHTBLUE);

    setcolor(YELLOW);
    rectangle(446,114,616,125);
    setfillstyle(1,YELLOW);
    floodfill(447,115,YELLOW);

    setcolor(LIGHTGREEN);
    settextstyle(7,1,5);
    outtextxy(62,130,"CALL");

    setcolor(WHITE);
    settextstyle(7,1,5);
    outtextxy(62,260,"A'S");

    setcolor(BROWN);
    settextstyle(7,1,5);
    outtextxy(62,340,"TEAM");

    setcolor(LIGHTGREEN);
    settextstyle(7,1,5);
    outtextxy(525,130,"CALL");

    setcolor(WHITE);
    settextstyle(7,1,5);
    outtextxy(525,260,"A'S");

    setcolor(BROWN);
    settextstyle(7,1,5);
    outtextxy(525,340,"TEAM");

    setcolor(YELLOW);
    rectangle(310,220,330,280);
    setfillstyle(1,LIGHTBLUE);
    floodfill(311,221,YELLOW);

    setcolor(YELLOW);
    line(310,281,304,296);
    line(330,281,336,296);

    setcolor(YELLOW);
    line(310,219,330,219);
    line(310,218,302,207);
    line(330,218,338,207);
    line(302,206,320,200);
    line(338,206,320,199);
    setfillstyle(1,YELLOW);
    floodfill(318,209,YELLOW);

    setcolor(RED);
    circle(311,209,2);
    setfillstyle(1,RED);
    floodfill(311,209,RED);

    circle(320,209,2);
    setfillstyle(1,RED);
    floodfill(320,209,RED);

    circle(329,209,2);
    setfillstyle(1,RED);
    floodfill(329,209,RED);

    setcolor(GREEN);
    line(376,200,376,275);
    line(375,200,375,275);
    line(255,200,255,275);
    line(256,200,256,275);
    line(280,173,363,173);
    line(280,174,363,174);

    setcolor(BLUE);
    rectangle(140,390,310,450);
    setfillstyle(1,LIGHTRED);
    floodfill(141,391,BLUE);
    setcolor(WHITE);
    rectangle(145,395,305,445);
    rectangle(146,396,304,444);
    rectangle(144,394,306,446);

    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(150,394,"HEADS");

    setcolor(GREEN);
    rectangle(350,390,520,450);
    setfillstyle(1,LIGHTGREEN);
    floodfill(351,391,GREEN);

    setcolor(WHITE);
    rectangle(355,395,515,445);
    rectangle(356,396,514,444);
    rectangle(354,394,516,446);

    setcolor(BLUE);
    settextstyle(7,0,5);
    outtextxy(375,394,"TAILS");

  while(1)
   {
    setmouselimit();
    showmouse();              //initializing mouse
    getstatus();
    gotoxy(1,1);
     {
      cout<<cx<<" "<<dx;
     }

    int rndmnum;         //to generate a random number after calling the coin
    rndmnum=random(2);

    if((bx==1)&&(cx>=140)&&(cx<=310)&&(dx>=390)&&(dx<=450)&&(rndmnum==1))
     {
       hidemouse();

	 if(sounds==1)
	  {

	    for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();

	      }

       tosswin();  //calls tosswin if random number is 1 if chosen call is heads
       break;
     }

    if((bx==1)&&(cx>=350)&&(cx<=520)&&(dx>=390)&&(dx<=450)&&(rndmnum==1))
     {
       hidemouse();

	 if(sounds==1)
	  {

	    for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();

	     }

       tosswin();  //calls tosswin if random number is 1 if chosen call is tails
       break;
     }

    if((bx==1)&&(cx>=140)&&(cx<=310)&&(dx>=390)&&(dx<=450)&&(rndmnum!=1))
     {
       hidemouse();
       option=3;

	 if(sounds==1)
	  {

	    for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	    }

       tosslose();   //calls tosslose if random number is 2 if chosen call is heads
       break;
     }
    if((bx==1)&&(cx>=350)&&(cx<=520)&&(dx>=390)&&(dx<=450)&&(rndmnum!=1))
     {
       hidemouse();
       option=3;

	 if(sounds==1)
	  {

	    for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();

	    }
			       tosslose();   //calls tosslose if random number is 2 if chosen call is tails
       break;
     }

   }
  }

///////////////////////////////////////////////////////////////////////////

 void landscape()
   {
     clrscr();

     cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);      //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(YELLOW);
    rectangle(0,0,640,480);      //to give a yellow background colour
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

    setcolor(GREEN);
    line(0,300,640,300);

    setcolor(BLUE);
    rectangle(0,301,640,480);
    setfillstyle(1,LIGHTBLUE);         //river
    floodfill(1,302,BLUE);


    setcolor(GREEN);
    line(0,299,180,45);
    line(180,46,338,299);
    setfillstyle(1,LIGHTGREEN);
    floodfill(10,290,GREEN);               //mountains

    line(326,277,515,46);
    line(515,47,640,206);
    line(640,155,640,299);
    setfillstyle(1,LIGHTGREEN);
    floodfill(515,60,GREEN);


    setcolor(BROWN);
    circle(320,60,40);
    setfillstyle(1,BROWN);
    floodfill(320,60,BROWN);               //sun
    setcolor(YELLOW);
    circle(320,60,35);
    setfillstyle(1,YELLOW);
    floodfill(320,60,YELLOW);

    setcolor(BLUE);
    rectangle(55,25,135,50);               //box1
    setfillstyle(1,LIGHTBLUE);
    floodfill(56,26,BLUE);

    setcolor(BLUE);
    rectangle(530,20,610,45);             //box2
    setfillstyle(1,LIGHTBLUE);
    floodfill(531,21,BLUE);


    setcolor(BLACK);
    line(431,48,454,76);
    line(196,36,222,66);
    line(448,69,463,48);
    line(217,59,230,35);

    setcolor(RED);
    rectangle(85,193,260,260);          //box3
    setfillstyle(1,MAGENTA);
    floodfill(86,194,RED);

    setcolor(YELLOW);
    settextstyle(7,0,6);
    outtextxy(90,190,"START");

    setcolor(DARKGRAY);
    rectangle(430,193,605,260);
    setfillstyle(1,LIGHTGRAY);
    floodfill(431,194,DARKGRAY);

    setcolor(LIGHTRED);
    settextstyle(7,0,6);
    outtextxy(445,190,"EXIT");

    setcolor(GREEN);
    rectangle(28,321,290,361);
    setfillstyle(1,LIGHTGREEN);
    floodfill(29,322,GREEN);

    setcolor(RED);
    settextstyle(7,0,4);
    outtextxy(34,320,"INSTRUCTIONS");

    setcolor(RED);
    rectangle(263,411,572,455);
    setfillstyle(1,LIGHTRED);
    floodfill(264,412,RED);


    setcolor(YELLOW);
    settextstyle(7,0,5);
    outtextxy(263,406," ABOUT   US ");

    setcolor(BLUE);
    line(431,337,573,337);
    line(431,338,573,338);
    line(47,414,190,414);
    line(47,415,190,415);            //waves in river
    line(162,466,238,466);
    line(162,467,238,467);
    line(322,386,389,386);
    line(322,387,389,387);


   while(1)
   {
    setmouselimit();
    showmouse();              //initializing mouse
    getstatus();
    gotoxy(1,1);
     {
      cout<<cx<<dx;
     }

   if((bx==1)&&(cx>=430)&&(cx<=605)&&(dx>=193)&&(dx<=260))
     {

	if(sounds==1)
	 {
	   for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	    }

      exit(0);      //exit from program when exit tile is clicked on
     }

    if((bx==1)&&(cx>=28)&&(cx<=290)&&(dx>=321)&&(dx<=361))
     {
       hidemouse();

	  if(sounds==1)
	   {

	     for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	     }

       controls();  //to call controls function if instructions tile is clicked on
     }

    if((bx==1)&&(cx>=263)&&(cx<=572)&&(dx>=411)&&(dx<=455))
     {
      hidemouse();

	  if(sounds==1)
	   {

	    for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	     }

	aboutus();  //to call aboutus function if start tile is clicked on
     }

    if((bx==1)&&(cx>=85)&&(cx<=260)&&(dx>=193)&&(dx<=260))
     {
      hidemouse();

	 if(sounds==1)
	  {

	    for(int i=0;i<7000;i+=100)
	      {
		sound(i);

		delay(5);
	      }

	      for(i=7000;i>0;i-=100)
	      {
		sound(i);

		delay(5);
	      }

		nosound();
	   }

      country();  //to call country function if start tile is clicked on
     }

    }

   }

///////////////////////////////////////////////////////////////////////////

 void warning()
  {
     clrscr();

     hidemouse();

     cleardevice();

     setcolor(BLACK);
     rectangle(0,0,640,480);         //to set blank screen
     setfillstyle(1,BLACK);
     floodfill(1,1,BLACK);

     setcolor(RED);
     settextstyle(7,0,7);
     outtextxy(50,60,"DISCLAIMER !!!");

     setcolor(WHITE);
     settextstyle(7,0,3);
     outtextxy(50,150,"DONOT COPY . A PRODUCT OF VASISTA GAMES.");

      setcolor(WHITE);
     settextstyle(7,0,2);
     outtextxy(100,250,"ALL RIGHTS RESERVED.");


     getch();

     exitme();    //calling function exitme

  }

////////////////////////////////////////////////////////////////////////////

 void compare()
  {
   if(runs>=runs2)
    {
     youwon();   // calling you won function if runs scored by user are more than those scored by computer
    }
   if(runs<runs2)
    {
     youlost(); // calling you lost function if runs scored by user are less than those scored by computer
    }
  }

////////////////////////////////////////////////////////////////////////////

 void runi()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);
    setfillstyle(1,BLACK);          //to set a blank screen
    floodfill(1,1,BLACK);

    setcolor(YELLOW);
    rectangle(0,0,320,480);            //pitch
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

    setcolor(GREEN);
    rectangle(321,0,640,480);          //field
    setfillstyle(1,GREEN);
    floodfill(322,1,GREEN);

    setcolor(BLACK);
    rectangle(0,17,320,20);
    setfillstyle(1,BLACK);
    floodfill(1,18,BLACK);

    rectangle(0,457,320,460);
    setfillstyle(1,BLACK);
    floodfill(1,458,BLACK);


    int i,j,k,low=0,l;

    for(i=340;i<380;i++)          //loop for ballto move
     {
      setcolor(RED);
      circle(i,200,10);
      setfillstyle(1,RED);
      floodfill(i,200,RED);

      setcolor(RED);
      circle(i,200,10);
      setfillstyle(1,RED);
      floodfill(i-1,200,RED);
     }

	  for(j=460,k=10,l=470;k<470;j--,k++,l--)
	   {
	    setcolor(WHITE);
	    circle(i,j,10);              //movement of fielder
	    setfillstyle(1,WHITE);
	    floodfill(i,j,WHITE);


	    setcolor(GREEN);
	    rectangle(i-12,j+12,i+12,j+22);
	    setfillstyle(1,GREEN);
	    floodfill(i-11,j+13,GREEN);

	    setcolor(BROWN);
	    circle(110,k,3);
	    circle(220,l,3);

	    setcolor(YELLOW);
	    rectangle(105,k-3,115,k);
	    rectangle(215,l+3,225,l);

	    delay(5);
	   }

     setcolor(GREEN);
     rectangle(i-22,188,i-12,212);
     setfillstyle(1,GREEN);
     floodfill(i-21,189,GREEN);

     delay(5);

  }

////////////////////////////////////////////////////////////////////////////

 void run()
  {

    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);        //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(YELLOW);
    rectangle(0,0,320,480);        //pitch
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

    setcolor(GREEN);
    rectangle(321,0,640,480);       //field
    setfillstyle(1,GREEN);
    floodfill(322,1,GREEN);

    setcolor(BLACK);
    rectangle(0,17,320,20);
    setfillstyle(1,BLACK);
    floodfill(1,18,BLACK);

    rectangle(0,457,320,460);
    setfillstyle(1,BLACK);
    floodfill(1,458,BLACK);

    setcolor(BLUE);
    settextstyle(2,0,8);
    outtextxy(180,450,"Press space bar to run");

    int i,j,k,low=0,l;

    for(i=340;i<640;i++)
     {
      setcolor(RED);
      circle(i,200,10);              //movement of ball
      setfillstyle(1,RED);
      floodfill(i,200,RED);

      if(kbhit())
       {
	if(getch()==32)
	 {
	   low=1;
	   runs+=1;
	  for(j=460,k=10,l=470;k<470;j--,k++,l--)
	   {
	    setcolor(WHITE);
	    circle(i,j,10);
	    setfillstyle(1,WHITE);     //movement of fielder
	    floodfill(i,j,WHITE);


	    setcolor(GREEN);
	    rectangle(i-12,j+12,i+12,j+22);
	    setfillstyle(1,GREEN);
	    floodfill(i-11,j+13,GREEN);

	    setcolor(BROWN);
	    circle(110,k,3);
	    circle(220,l,3);

	    setcolor(YELLOW);
	    rectangle(105,k-3,115,k);
	    rectangle(215,l+3,225,l);

	    delay(5);
	   }
	 }
       }

     setcolor(GREEN);
     rectangle(i-22,188,i-12,212);
     setfillstyle(1,GREEN);
     floodfill(i-21,189,GREEN);
     delay(5);

     if(low==1)
      {
       break;
      }

    }

  }

///////////////////////////////////////////////////////////////////////////

 void six()
  {
    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);          //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    int i,j,bll;

    setcolor(BLACK);
    rectangle(158,0,183,22);
    setfillstyle(1,BLACK);
    floodfill(158,0,BLACK);

    setcolor(RED);
    circle(171,11,10);
    setfillstyle(1,RED);
    floodfill(171,11,RED);

    void*bal;
    bll=imagesize(158,0,183,22);
    bal=malloc(bll);
    getimage(158,0,183,22,bal);

  for(i=172,j=12;i<600;i++,j++)
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

    setcolor(LIGHTGRAY);
    rectangle(0,0,640,480);
    setfillstyle(1,LIGHTGRAY);         //back ground
    floodfill(1,1,LIGHTGRAY);

    int incr;

    for(incr=0;incr<5000;incr++)
     {
      setcolor(random(15));                  //crowd
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

    setcolor(WHITE);
    circle(304,123,3);
    setfillstyle(1,WHITE);
    floodfill(304,123,WHITE);

    setcolor(WHITE);
    circle(204,386,3);
    setfillstyle(1,WHITE);
    floodfill(204,386,WHITE);

    setcolor(WHITE);                     //fielders
    circle(387,486,3);
    setfillstyle(1,WHITE);
    floodfill(387,486,WHITE);

    setcolor(WHITE);
    circle(132,168,3);
    setfillstyle(1,WHITE);
    floodfill(132,168,WHITE);

    setcolor(WHITE);
    circle(505,266,3);
    setfillstyle(1,WHITE);
    floodfill(505,266,WHITE);

    setcolor(WHITE);                      //fielders
    circle(422,196,3);
    setfillstyle(1,WHITE);
    floodfill(422,196,WHITE);

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

    setcolor(WHITE);
    circle(388,38,3);
    setfillstyle(1,WHITE);
    floodfill(388,38,WHITE);                //fielders

    setcolor(RED);
    rectangle(295,329,304,338);
    setfillstyle(1,BROWN);
    floodfill(296,330,RED);

///////////////////////////////////////////////////////////////

  setcolor(BROWN);
   line(419,200,419,220);
   line(419,199,400,150);
   line(419,221,400,270);
   line(399,150,40,150);
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


  for(col=1;col<180;col++)
   {

   b=random(15);
   setcolor(b);
   rectangle(420,198,620,222);
   setfillstyle(1,random(15));
   floodfill(421,199,b);


   setcolor(random(15));
   settextstyle(7,0,9);
   outtextxy(75,140,"SIX !!!");

   n=random(15);
   setcolor(n);
   rectangle(40,250,390,260);
   setfillstyle(1,random(15));
   floodfill(41,251,n);
   delay(15);

  }

   setcolor(BLACK);
   settextstyle(2,0,6);
   outtextxy(250,455,"Press any key");

   getch();

 }

//////////////////////////////////////////////////////////////////////////////

 void length()
  {
    clrscr();

    cleardevice();

    setcolor(YELLOW);
    rectangle(0,0,640,480);            //background
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

   /////////////////////////////////////////////////

    setcolor(YELLOW);
    rectangle(50,5,310,260);       //box for the ball

    setcolor(MAGENTA);
    circle(180,130,120);              //ball
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(180,130,MAGENTA);

    setcolor(WHITE);
    circle(180,130,110);              //grips of the ball
    circle(180,130,115);

    setcolor(GREEN);
    settextstyle(7,0,6);
    outtextxy(90,90,"SHORT");

    setcolor(BLACK);
    line(220,250,50,250);
    line(210,255,60,255);             //forced lines
    line(170,261,100,261);

    setcolor(RED);
    rectangle(94,154,257,162);         //underline
    setfillstyle(1,RED);
    floodfill(95,155,RED);


    ////////////////////////////////////////////////

    setcolor(YELLOW);
    rectangle(330,5,590,260);          //box for the ball

    setcolor(MAGENTA);
    circle(460,130,120);               //ball
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(460,130,MAGENTA);

    setcolor(WHITE);
    circle(460,130,110);         //grips of the ball
    circle(460,130,115);

    setcolor(GREEN);
    settextstyle(7,0,7);
    outtextxy(385,80,"GOOD");

    setcolor(BLACK);
    line(500,250,320,250);
    line(490,255,330,255);       //force lines
    line(450,261,370,261);

    setcolor(RED);
    rectangle(386,154,534,162);     //underline
    setfillstyle(1,RED);
    floodfill(387,155,RED);

    /////////////////////////////////////////////////

    setcolor(YELLOW);
    rectangle(210,262,430,477);    //box for the ball

    setcolor(MAGENTA);
    circle(320,370,105);             //ball
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(320,370,MAGENTA);

    setcolor(WHITE);
    circle(320,370,100);           //grips of the ball
    circle(320,370,95);

    setcolor(GREEN);
    settextstyle(7,0,6);
    outtextxy(250,330,"FULL");


    setcolor(BLACK);
    line(250,450,80,450);
    line(240,455,90,455);             //force lines
    line(190,460,120,460);

    setcolor(RED);
    rectangle(247,393,384,401);      //underline
    setfillstyle(1,RED);
    floodfill(248,394,RED);

    //////////////////////////////////////////////////

    setcolor(BLUE);
    rectangle(523,285,533,340);
    setfillstyle(1,LIGHTBLUE);
    floodfill(524,286,BLUE);

    setcolor(BROWN);
    line(522,341,508,345);
    line(508,346,508,440);
    line(534,341,548,345);
    line(548,346,548,440);
    line(508,441,528,450);
    line(548,441,528,450);

    setcolor(BLUE);
    line(516,352,516,386);
    line(517,352,517,386);
    line(540,352,540,386);
    line(541,352,541,386);

    setcolor(GREEN);
    line(529,352,529,376);
    line(530,352,530,376);
    line(528,352,528,376);

    setcolor(RED);
    circle(95,362,20);
    setfillstyle(1,RED);
    floodfill(85,362,RED);

    setcolor(WHITE);
    circle(95,362,18);
    circle(95,362,16);

    setcolor(BROWN);
    line(76,351,54,351);
    line(73,358,59,358);
    line(77,372,60,372);
    line(74,363,63,363);
    line(87,381,62,381);
    line(79,375,53,375);
    line(82,378,73,378);
    line(74,367,58,367);
    line(76,354,66,354);

    while(1)
     {
      setmouselimit();
      showmouse();               //initializing mouse
      getstatus();
      gotoxy(1,1);
       {
	cout<<cx<<dx;
       }


     if((bx==1)&&(cx>=50)&&(cx<=310)&&(dx>=5)&&(dx<=260))
      {

       lengt=3;      //setting a short length ball
       hidemouse();
       break;
      }
     if((bx==1)&&(cx>=330)&&(cx<=590)&&(dx>=5)&&(dx<=260))
      {

       lengt=2;    //setting a good length ball
       hidemouse();
       break;
      }
     if((bx==1)&&(cx>=210)&&(cx<=430)&&(dx>=262)&&(dx<=477))
      {

       lengt=1;    //setting a full length ball
       hidemouse();
       break;
      }
    }

  }

////////////////////////////////////////////////////////////////////////////

 void speed()
  {
    clrscr();

    cleardevice();

    setcolor(YELLOW);
    rectangle(0,0,640,480);        // to set a blank screen
    setfillstyle(1,YELLOW);
    floodfill(1,1,YELLOW);

    /////////////////////////////////////////////////

    setcolor(YELLOW);
    rectangle(50,5,310,260);
    setfillstyle(1,YELLOW);
    floodfill(51,6,YELLOW);

    setcolor(MAGENTA);
    circle(180,130,120);
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(180,130,MAGENTA);

    setcolor(WHITE);
    circle(180,130,110);
    circle(180,130,115);

    setcolor(GREEN);
    settextstyle(1,0,7);
    outtextxy(100,85,"SLOW");

    setcolor(BLACK);
    line(220,250,50,250);
    line(210,255,60,255);
    line(170,261,100,261);

    setcolor(RED);
    rectangle(94,154,257,162);
    setfillstyle(1,RED);
    floodfill(95,155,RED);


////////////////////////////////////////////////

    setcolor(YELLOW);
    rectangle(330,5,590,260);
    setfillstyle(1,YELLOW);
    floodfill(331,6,YELLOW);


    setcolor(MAGENTA);
    circle(460,130,120);
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(460,130,MAGENTA);

    setcolor(WHITE);
    circle(460,130,110);
    circle(460,130,115);

    setcolor(GREEN);
    settextstyle(1,0,5);
    outtextxy(365,100,"MEDIUM");

    setcolor(BLACK);
    line(500,250,320,250);
    line(490,255,330,255);
    line(450,261,370,261);

    setcolor(RED);
    rectangle(366,154,555,162);
    setfillstyle(1,RED);
    floodfill(367,155,RED);

    /////////////////////////////////////////////////

    setcolor(YELLOW);
    rectangle(210,262,430,477);
    setfillstyle(1,YELLOW);
    floodfill(211,263,YELLOW);

    setcolor(MAGENTA);
    circle(320,370,105);
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(320,370,MAGENTA);

    setcolor(WHITE);
    circle(320,370,100);
    circle(320,370,95);

    setcolor(GREEN);
    settextstyle(1,0,6);
    outtextxy(250,330,"FAST");

    setcolor(BLACK);
    line(250,450,80,450);
    line(240,455,90,455);
    line(190,460,120,460);

    setcolor(RED);
    rectangle(247,393,384,401);
    setfillstyle(1,RED);
    floodfill(248,394,RED);

    //////////////////////////////////////////////////

    setcolor(BLUE);
    rectangle(523,285,533,340);
    setfillstyle(1,LIGHTBLUE);
    floodfill(524,286,BLUE);

    setcolor(BROWN);
    line(522,341,508,345);
    line(508,346,508,440);
    line(534,341,548,345);
    line(548,346,548,440);
    line(508,441,528,450);
    line(548,441,528,450);
    setcolor(BLUE);
    line(516,352,516,386);
    line(517,352,517,386);
    line(540,352,540,386);
    line(541,352,541,386);
    setcolor(GREEN);
    line(529,352,529,376);
    line(530,352,530,376);
    line(528,352,528,376);
    setcolor(RED);
    circle(95,362,20);
    setfillstyle(1,RED);
    floodfill(85,362,RED);
    setcolor(WHITE);
    circle(95,362,18);
    circle(95,362,16);
    setcolor(BROWN);
    line(76,351,54,351);
    line(73,358,59,358);
    line(77,372,60,372);
    line(74,363,63,363);
    line(87,381,62,381);
    line(79,375,53,375);
    line(82,378,73,378);
    line(74,367,58,367);
    line(76,354,66,354);

    while(1)
     {
      setmouselimit();
      showmouse();              //initializing mouse
      getstatus();
      gotoxy(1,1);
       {
	cout<<cx<<dx;
       }


     if((bx==1)&&(cx>=50)&&(cx<=310)&&(dx>=5)&&(dx<=260))
      {

       del=6;         //setting  a slow ball
       hidemouse();
       break;
      }
     if((bx==1)&&(cx>=330)&&(cx<=590)&&(dx>=5)&&(dx<=260))
      {

       del=5;        //setting a medium pace ball
       hidemouse();
       break;
      }
     if((bx==1)&&(cx>=210)&&(cx<=430)&&(dx>=262)&&(dx<=477))
      {

       del=4;       //setting a fast ball
       hidemouse();
       break;
      }
    }
  }

////////////////////////////////////////////////////////////////////////////

 void tillbat()
  {
    cleardevice();

    clrscr();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);           //setting a blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    rectangle(0,0,640,480);          //applying background colour
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(WHITE);
    circle(46,390,5);                       //fielder
    setfillstyle(1,WHITE);
    floodfill(47,391,WHITE);


    setcolor(YELLOW);
    rectangle(150,0,490,480);          //pitch
    setfillstyle(1,YELLOW);
    floodfill(151,51,YELLOW);


    setcolor(LIGHTRED);
    rectangle(200,95,215,98);
    setfillstyle(1,RED);
    floodfill(201,96,LIGHTRED);

    rectangle(200,127,215,130);
    setfillstyle(1,RED);
    floodfill(201,128,LIGHTRED);


    setcolor(BROWN);
    rectangle(310,20,313,60);              //stump
    setfillstyle(1,BROWN);
    floodfill(311,21,BROWN);

    setcolor(BROWN);
    rectangle(317,20,320,60);             //stump
    setfillstyle(1,BROWN);
    floodfill(318,21,BROWN);

    setcolor(BROWN);
    rectangle(324,20,327,60);               //stump
    setfillstyle(1,BROWN);
    floodfill(325,21,BROWN);

    setcolor(BLACK);
    line(312,20,325,20);                   //bales

    setcolor(BLACK);
    rectangle(200,60,203,100);             //crease
    setfillstyle(1,BLACK);
    floodfill(201,61,BLACK);

    setcolor(BLACK);
    rectangle(427,60,430,100);             //crease
    setfillstyle(1,BLACK);
    floodfill(428,61,BLACK);

    setcolor(BLACK);
    rectangle(150,101,490,104);             //crease
    setfillstyle(1,BLACK);
    floodfill(151,102,BLACK);

//////////////////////////// end of background ////////////////////////////

///////////////////////////////// batsman /////////////////////////////////

    setcolor(LIGHTMAGENTA);
    rectangle(345,10,355,15);                 //cap
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(346,11,LIGHTMAGENTA);

    setcolor(LIGHTMAGENTA);
    rectangle(356,5,368,15);                 //cap
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(357,6,LIGHTMAGENTA);

    setcolor(BLACK);
    line(366,16,372,10);              //hairs
    line(366,16,372,18);

    setcolor(BLACK);
    circle(360,25,10);
    line(354,21,357,21);
    line(355,23,356,23);                  //head
    line(361,21,364,21);
    line(362,23,363,23);
    line(359,23,359,27);
    line(360,27,361,27);

    setcolor(MAGENTA);
    line(358,31,362,31);
    line(358,32,362,32);

    setcolor(BLACK);
    rectangle(356,35,364,40);

    setcolor(LIGHTMAGENTA);
    line(356,40,364,40);
    line(355,40,343,43);
    line(343,44,338,58);
    line(339,58,348,60);
    line(348,59,352,50);
    line(352,51,352,68);
    line(353,68,370,68);                  //shirt
    line(370,67,370,55);
    line(364,40,368,42);
    line(368,43,360,55);
    line(369,43,372,53);
    line(371,53,366,60);
    line(366,59,360,54);
    setfillstyle(1,RED);
    floodfill(359,55,LIGHTMAGENTA);
    setfillstyle(1,RED);
    floodfill(366,50,LIGHTMAGENTA);

    setcolor(RED);
    line(352,69,370,69);
    line(352,70,352,95);
    line(353,95,360,95);
    line(360,94,362,78);                //pant
    line(370,70,370,95);
    line(369,95,362,95);
    line(362,94,361,78);
    setfillstyle(1,DARKGRAY);
    floodfill(360,74,RED);

    setcolor(BLACK);
    rectangle(359,96,350,99);
    setfillstyle(1,BLACK);
    floodfill(351,97,BLACK);
					   //shoes
    rectangle(363,96,369,99);
    setfillstyle(1,BLACK);
    floodfill(364,97,BLACK);

    setcolor(BLACK);
    line(340,59,346,61);
    line(340,60,336,70);                 //right hand
    line(346,62,341,72);
    line(337,70,340,72);

    setcolor(BLACK);
    line(360,57,365,60);
    line(360,58,347,72);
    line(365,61,350,75);              //left hand
    line(347,73,350,74);
    setfillstyle(1,YELLOW);
    floodfill(357,64,BLACK);

    setcolor(BLACK);
    line(347,74,345,76);
    line(348,75,345,74);                   //fingers
    line(338,72,340,76);
    line(337,71,341,75);

    setcolor(BLACK);
    line(343,71,346,72);
    line(343,72,339,80);
    line(340,80,342,81);               //handle
    line(342,80,346,71);
    setfillstyle(1,BLACK);
    floodfill(341,79,BLACK);

    setcolor(BROWN);
    line(337,81,343,82);
    line(337,82,334,83);
    line(343,83,346,84);
    line(334,84,328,98);                //willow
    line(346,85,340,99);
    line(329,98,339,99);
    setfillstyle(1,BROWN);
    floodfill(336,91,BROWN);

///////////////////////////// end of batsman ///////////////////////////////

 if(option==1)

  {

//////////////////////////////// straight drive ////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(29,59,181,111);
   rectangle(30,60,180,110);           //box for straight drive tile
   setfillstyle(1,LIGHTGREEN);
   floodfill(31,61,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(33,60,"STRAIGHT");

   settextstyle(1,0,3);
   outtextxy(90,80,"DRIVE");

//////////////////////////// end of straight drive //////////////////////////

/////////////////////////// defence /////////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(29,199,161,241);
   rectangle(30,200,160,240);         //box for defence tile
   setfillstyle(1,LIGHTGREEN);
   floodfill(31,201,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(33,200,"DEFENCE");

////////////////////////// end of defence //////////////////////////

/////////////////////////// pull shot /////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(29,309,181,351);          //box for pullshot tile
   rectangle(30,310,180,350);
   setfillstyle(1,LIGHTGREEN);
   floodfill(31,311,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(33,310,"PULL SHOT");

////////////////////////// end of pull shot /////////////////////

///////////////////////// square cut ///////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(479,59,601,111);
   rectangle(480,60,600,110);            //box for square cut tile
   setfillstyle(1,LIGHTGREEN);
   floodfill(481,61,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(483,60,"SQUARE");

   settextstyle(1,0,3);
   outtextxy(530,85,"CUT");

//////////////////////////////// end of square cut ////////////////////////

/////////////////////////// long on /////////////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(489,199,601,241);
   rectangle(490,200,600,240);          //box for long on tile
   setfillstyle(1,LIGHTGREEN);
   floodfill(491,201,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(493,200,"LONG ON");

////////////////////////////////// end long on /////////////////////////

////////////////////////////// long off ///////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(489,309,616,351);          //box for long off tile
   rectangle(490,310,615,350);
   setfillstyle(1,LIGHTGREEN);
   floodfill(491,311,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(493,310,"LONG OFF");

/////////////////////////////// end long off ////////////////////////////

   }

    int i,j;
    for(j=472,i=465;j>130;j--,i--)
     {

      if(lengt == 3)
       {
	setcolor(BLACK);
	circle(325,400,5);
	setfillstyle(1,BLACK);
	floodfill(325,400,BLACK);
       }

   if(lengt == 2)
    {
     setcolor(BLACK);
     circle(325,285,5);
     setfillstyle(1,BLACK);
     floodfill(325,285,BLACK);
    }

   if(lengt == 1)
    {
     setcolor(BLACK);
     circle(325,150,5);
     setfillstyle(1,BLACK);
     floodfill(325,150,BLACK);
    }


      setcolor(RED);
      circle(325,j,5);
      setfillstyle(1,RED);
      floodfill(325,j,RED);   //moving the ball without checking mouse click

      delay(::del);

     if(option==1)
      {
       showmouse();
      }

      setcolor(YELLOW);
      rectangle(317,i,332,i+14);
      setfillstyle(1,YELLOW);
      floodfill(318,i+1,YELLOW);
     }


    for(j=130,i=123;j>75;j--,i--)
     {

      if(lengt == 3)
       {
	setcolor(BLACK);
	circle(325,400,5);
	setfillstyle(1,BLACK);
	floodfill(325,400,BLACK);
       }

   if(lengt == 2)
    {
     setcolor(BLACK);
     circle(325,285,5);
     setfillstyle(1,BLACK);
     floodfill(325,285,BLACK);
    }

   if(lengt == 1)
    {
     setcolor(BLACK);
     circle(325,150,5);
     setfillstyle(1,BLACK);
     floodfill(325,150,BLACK);
    }


      setcolor(RED);
      circle(325,j,5);
      setfillstyle(1,RED);
      floodfill(325,j,RED);

      delay(::del);

      setcolor(YELLOW);
      rectangle(317,i,332,i+14);
      setfillstyle(1,YELLOW);
      floodfill(318,i+1,YELLOW);     //moving the ball checking for mouse click

    if(option==1)           //if user choses to bat first
     {
       setmouselimit();
       showmouse();              //initializing mouse
       getstatus();
       gotoxy(1,1);
	{
	 cout<<cx<<dx;
	}
	  int t=0;

    /* when mouse is clicked at appropriate moment corresponding
       shot will be displayed before which a sound is given
       and the action of increasing runs or wickets is performed
       by calling those functions */


      if(bx==1)
       {
	 t=1;
       if((cx>=29)&&(cx<=181)&&(dx>=59)&&(dx<=111)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  t=1;

	 }

     else if((cx>=29)&&(cx<=181)&&(dx>=59)&&(dx<=111)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  caught();
	  wickets+=1;
	  t=1;

	 }
     else if((cx>=29)&&(cx<=181)&&(dx>=59)&&(dx<=111)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  four();
	  runs+=4;
	  t=1;

	 }

       //////////////////end strt drive///////////
       /////////////////defence///////////////////

       else if((cx>=29)&&(cx<=161)&&(dx>=199)&&(dx<=241)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	  t=1;

	 }
       else if((cx>=29)&&(cx<=161)&&(dx>=199)&&(dx<=241)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	  t=1;

	 }
       else if((cx>=29)&&(cx<=161)&&(dx>=199)&&(dx<=241)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	  t=1;

	 }

       //////////////////////end defence//////////////
       /////////////////////pullshot//////////////////

       else if((cx>=29)&&(cx<=181)&&(dx>=309)&&(dx<=351)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  six();
	  runs+=6;
	  t=1;

	 }

       else if((cx>=29)&&(cx<=181)&&(dx>=309)&&(dx<=351)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  four();
	  runs+=4;
	  t=1;

	 }
       else if((cx>=29)&&(cx<=181)&&(dx>=309)&&(dx<=351)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();

	  out();
	  wickets+=1;
	  t=1;
	   }

       /////////////////////end pullshot////////////////
       ////////////////////squarecut/////////////////////

   else	if((cx>=479)&&(cx<=601)&&(dx>=59)&&(dx<=111)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  caught();
	  wickets+=1;
	  t=1;

	 }

   else	if((cx>=479)&&(cx<=601)&&(dx>=59)&&(dx<=111)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  four();
	  runs+=4;
	  t=1;

	 }
  else	if((cx>=479)&&(cx<=601)&&(dx>=59)&&(dx<=111)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  out();
	  wickets+=1;
	  t=1;

	 }

       ///////////////////////end squarecut/////////////////////
      ///////////////////////longoff///////////////////////////

   else	if((cx>=489)&&(cx<=616)&&(dx>=309)&&(dx<=351)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  t=1;

	 }

   else	if((cx>=489)&&(cx<=616)&&(dx>=309)&&(dx<=351)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  run();
	  t=1;

	 }
   else	if((cx>=489)&&(cx<=616)&&(dx>=309)&&(dx<=351)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  six();
	  runs+=6;
	  t=1;

	 }

	////////////////////////end longoff//////////////////
	////////////////////////longon///////////////////////

   else	if((cx>=489)&&(cx<=601)&&(dx>=199)&&(dx<=241)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  t=1;

	 }

   else	if((cx>=489)&&(cx<=601)&&(dx>=199)&&(dx<=241)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  run();
	  t=1;
	   }

  else	if((cx>=489)&&(cx<=601)&&(dx>=199)&&(dx<=241)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  six();
	  runs+=6;
	  t=1;

	 }
	 break;
	 }

       /////////////////////////end longon////////////////////////

	if((t==0)&&(j==76))
	 {
	  out();
	  wickets+=1;
	  break;
	 }
      }

      if((option==2)||(option==3))    //if user needs to bat second
       {
	 int shot;

	shot=random(6);


	/* computer chooses random shot and then  corresponding
       shot will be displayed before which a sound is given
       and the action of increasing runs or wickets is performed
       by calling those functions */


	///////////////strt drive//////////////////
	if((shot==1)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	 }

   else	if((shot==1)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  caught();
	  wickets+=1;
	 }
    else if((shot==1)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  four();
	  runs2+=4;
	 }

       //////////////////end strt drive///////////
       /////////////////defence///////////////////

   else	if((shot==2)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	 }
   else	if((shot==2)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	 }
   else	if((shot==2)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	 }

       //////////////////////end defence//////////////
       /////////////////////pullshot//////////////////

   else	if((shot==3)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  six();
	  runs2+=6;
	 }

   else	if((shot==3)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  four();
	  runs2+=4;
	 }
   else	if((shot==3)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  out();
	  wickets+=1;
	 }

       /////////////////////end pullshot////////////////
       ////////////////////squarecut/////////////////////

   else	if((shot==4)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  caught();
	  wickets+=1;
	 }

   else	if((shot==4)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  four();
	  runs2+=4;
	 }
   else	if((shot==4)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  out();
	  wickets+=1;
	 }

       ///////////////////////end squarecut/////////////////////
      ///////////////////////longoff///////////////////////////

   else	if((shot==5)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	 }

    else if((shot==5)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  runi();
	  runs2+=1;
	 }
  else	if((shot==5)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  six();
	  runs2+=6;
	 }

	////////////////////////end longoff//////////////////
	////////////////////////longon///////////////////////

  else	if((shot==6)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	 }

  else	if((shot==6)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  runi();
	  runs2+=1;
	 }
  else	if((shot==6)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  six();
	  runs2+=6;
	 }

       /////////////////////////end longon////////////////////////
       break;
       }
     }

   }

///////////////////////////////////////////////////////////////////////////

 void ballmove()
  {

    clrscr();

    hidemouse();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);       //to set a blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(BLACK);                     //box for bowler
    rectangle(211,338,292,464);
    setfillstyle(1,BLACK);
    floodfill(212,339,BLACK);

    setcolor(YELLOW);
    circle(240,350,10);               //head
    setfillstyle(1,YELLOW);
    floodfill(241,351,YELLOW);

    setcolor(YELLOW);
    line(230,355,230,360);
    line(231,355,231,361);
    line(232,355,232,362);
    line(233,355,233,363);
    line(234,355,234,364);             //hair left side
    line(235,355,235,365);
    line(236,355,236,365);
    line(237,355,237,365);
    line(238,355,238,365);
    line(239,355,239,365);

    line(240,355,230,365);
    line(241,355,241,365);
    line(242,355,242,365);
    line(243,355,243,365);
    line(244,355,244,365);
    line(245,355,245,365);                  //hair right side
    line(246,355,246,365);
    line(247,355,247,364);
    line(248,355,248,363);
    line(249,355,249,361);
    line(250,355,250,360);

    setcolor(LIGHTGRAY);
    line(236,365,244,365);
    line(235,365,215,370);        //left shoulder
    line(245,365,263,370);        //right shoulder
    line(214,370,214,390);
    line(215,390,225,390);                                   //shirt
    line(226,390,226,415);
    line(227,415,257,415);
    line(257,415,257,383);
    line(258,383,265,393);
    line(264,370,278,388);
    line(266,393,277,388);

    setfillstyle(1,LIGHTGRAY);
    floodfill(238,370,LIGHTGRAY);

    setcolor(YELLOW);
    line(216,391,223,391);
    line(216,392,216,405);
    line(223,392,223,405);
    line(216,406,213,409);            //left hand
    line(214,409,215,410);
    line(216,410,217,408);
    line(218,408,219,411);
    line(220,411,222,411);
    line(222,411,222,406);

    setfillstyle(1,BLACK);
    floodfill(221,405,YELLOW);


    setcolor(BLUE);
    settextstyle(1,0,1);
    outtextxy(237,363,"B");

    setcolor(LIGHTGREEN);
    settextstyle(1,0,1);
    outtextxy(238,390,"7");

    setcolor(YELLOW);
    line(268,393,277,390);


    line(277,391,281,395);
    line(268,394,280,402);
    line(281,403,289,403);             //right hand
    line(282,396,278,375);
    line(289,402,286,375);
    line(278,374,286,374);
    setcolor(YELLOW);
    setfillstyle(1,BLACK);
    floodfill(279,376,YELLOW);


    setcolor(BROWN);
    line(284,374,284,369);
    line(281,374,281,369);          //fingers
    line(278,374,278,369);

    setcolor(LIGHTGRAY);
    line(226,416,257,416);
    line(226,417,226,455);
    line(257,417,257,455);              //pant
    line(227,455,237,455);
    line(256,455,246,455);
    line(237,454,241,428);
    line(246,454,241,427);
    setfillstyle(1,LIGHTGRAY);
    floodfill(240,420,LIGHTGRAY);

    setcolor(BROWN);
    line(226,418,257,418);          //belt
    rectangle(227,456,236,462);
    setfillstyle(1,BROWN);
    floodfill(228,457,BROWN);

    rectangle(247,456,256,462);
    setfillstyle(1,DARKGRAY);
    floodfill(248,457,BROWN);

    int bow;
    void*bowle;
    bow=imagesize(211,338,292,464);
    bowle=malloc(bow);
    getimage(211,338,292,464,bowle);

///////////////////////////////////////////////////////////////////////////

    setcolor(GREEN);
    rectangle(0,0,640,480);           //field
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(YELLOW);
    rectangle(150,0,500,350);            //pitch
    setfillstyle(1,YELLOW);
    floodfill(151,1,YELLOW);

    setcolor(WHITE);
    circle(25,270,5);
    setfillstyle(1,WHITE);
    floodfill(26,271,WHITE);

    setcolor(WHITE);                           //fielders
    circle(620,400,5);
    setfillstyle(1,WHITE);
    floodfill(621,401,WHITE);

    setcolor(WHITE);
    circle(560,60,5);
    setfillstyle(1,WHITE);
    floodfill(561,61,WHITE);

    setcolor(BROWN);
    rectangle(315,340,318,300);           //stumps
    setfillstyle(1,BROWN);
    floodfill(316,339,BROWN);

    setcolor(BROWN);
    rectangle(322,340,325,300);            //stumps
    setfillstyle(1,BROWN);
    floodfill(323,339,BROWN);

    setcolor(BROWN);
    rectangle(329,340,332,300);            //stumps
    setfillstyle(1,BROWN);
    floodfill(330,339,BROWN);

    setcolor(BLACK);
    line(315,300,332,300);
					  //bales
    setcolor(BLACK);
    rectangle(200,340,202,280);
    setfillstyle(1,BLACK);
    floodfill(201,339,BLACK);

    setcolor(BLACK);
    rectangle(447,340,449,280);
    setfillstyle(1,BLACK);
    floodfill(448,339,BLACK);

    setcolor(BLACK);
    rectangle(150,279,210,277);
    setfillstyle(1,BLACK);
    floodfill(151,278,BLACK);

    setcolor(BLACK);
    rectangle(294,279,500,277);
    setfillstyle(1,BLACK);
    floodfill(295,278,BLACK);

    //////////////////////////////////////////////////////////////////////////

    int i,j;
    for(j=180,i=173;j>5;j--,i--)    //loop to move the bowler to the crease
     {

      putimage(211,150,bowle,XOR_PUT);

      setcolor(RED);
      circle(281,j,5);
      setfillstyle(1,RED);
      floodfill(281,j,RED);

      delay(::del);

      setcolor(YELLOW);
      rectangle(273,i,288,i+14);
      setfillstyle(1,YELLOW);
      floodfill(274,i+1,YELLOW);
    }

    tillbat();
  }
/////////////////////////////////////////////////////////////////////////////

 void main2()    //to invoke ballmove
  {
   ballmove();
  }

/////////////////////////////////////////////////////////////////////////////

 void bowling()
  {

    int sped;

    if(option==1)       //if user chooses to bat first
     {
      sped=random(3);         //random speed selection by computer
      lengt=random(3);        //random length selection by computer

       if(sped==1)
	{
	 del=5;        //slow
	}
       if(sped==2)
	{
	 del=4;    //medium
	}
       if(sped==3)
	{
	 del=3;   //fast
	}

      }

    if((option==2)||(option==3))  //if user needs to bowl first
     {
      speed();
      length();
     }

    clrscr();

    cleardevice();

    hidemouse();

    setcolor(BLACK);                     //box for bowler
    rectangle(211,338,292,464);
    setfillstyle(1,BLACK);
    floodfill(212,339,BLACK);

    setcolor(GREEN);
    circle(240,350,10);               //head
    setfillstyle(1,GREEN);
    floodfill(241,351,GREEN);

    setcolor(GREEN);
    line(230,355,230,360);
    line(231,355,231,361);
    line(232,355,232,362);
    line(233,355,233,363);
    line(234,355,234,364);             //hair left side
    line(235,355,235,365);
    line(236,355,236,365);
    line(237,355,237,365);
    line(238,355,238,365);
    line(239,355,239,365);

    line(240,355,230,365);
    line(241,355,241,365);
    line(242,355,242,365);
    line(243,355,243,365);
    line(244,355,244,365);
    line(245,355,245,365);                  //hair right side
    line(246,355,246,365);
    line(247,355,247,364);
    line(248,355,248,363);
    line(249,355,249,361);
    line(250,355,250,360);

    setcolor(BLUE);
    line(236,365,244,365);
    line(235,365,215,370);        //left shoulder
    line(245,365,263,370);        //right shoulder
    line(214,370,214,390);
    line(215,390,225,390);        //shirt
    line(226,390,226,415);
    line(227,415,257,415);
    line(257,415,257,383);
    line(258,383,265,393);
    line(264,370,278,388);
    line(266,393,277,388);

    setfillstyle(1,LIGHTCYAN);
    floodfill(238,370,BLUE);

    setcolor(BROWN);
    line(216,391,223,391);
    line(216,392,216,405);
    line(223,392,223,405);
    line(216,406,213,409);            //left hand
    line(214,409,215,410);
    line(216,410,217,408);
    line(218,408,219,411);
    line(220,411,222,411);
    line(222,411,222,406);

    setfillstyle(1,LIGHTRED);
    floodfill(221,405,BROWN);

    setcolor(WHITE);
    settextstyle(1,0,1);
    outtextxy(237,363,"B");

    setcolor(RED);
    settextstyle(1,0,1);
    outtextxy(238,390,"7");

    setcolor(BROWN);
    line(268,393,277,390);

    line(277,391,281,395);
    line(268,394,280,402);
    line(281,403,289,403);             //right hand
    line(282,396,278,375);
    line(289,402,286,375);
    line(278,374,286,374);
    setcolor(BROWN);
    setfillstyle(1,LIGHTRED);
    floodfill(279,376,BROWN);

    setcolor(RED);
    circle(281,367,5);                     //ball
    setfillstyle(1,BROWN);
    floodfill(282,368,RED);

    setcolor(BROWN);
    line(284,374,284,369);
    line(281,374,281,369);          //fingers
    line(278,374,278,369);

    setcolor(BLUE);
    line(226,416,257,416);
    line(226,417,226,455);
    line(257,417,257,455);              //pant
    line(227,455,237,455);
    line(256,455,246,455);
    line(237,454,241,428);
    line(246,454,241,427);
    setfillstyle(1,LIGHTCYAN);
    floodfill(240,420,BLUE);

    setcolor(BROWN);
    line(226,418,257,418);          //belt
    rectangle(227,456,236,462);
    setfillstyle(1,BROWN);
    floodfill(228,457,BROWN);

    rectangle(247,456,256,462);
    setfillstyle(1,BROWN);
    floodfill(248,457,BROWN);

    int bowl;
    void*bowler;
    bowl=imagesize(211,338,292,464);
    bowler=malloc(bowl);
    getimage(211,338,292,464,bowler);

/////////////////////////////////////////////////////////////////////////

    setcolor(BLACK);                     //box for bowler
    rectangle(211,338,292,464);
    setfillstyle(1,BLACK);
    floodfill(212,339,BLACK);

    setcolor(YELLOW);
    circle(240,350,10);               //head
    setfillstyle(1,YELLOW);
    floodfill(241,351,YELLOW);

    setcolor(YELLOW);
    line(230,355,230,360);
    line(231,355,231,361);
    line(232,355,232,362);
    line(233,355,233,363);
    line(234,355,234,364);             //hair left side
    line(235,355,235,365);
    line(236,355,236,365);
    line(237,355,237,365);
    line(238,355,238,365);
    line(239,355,239,365);

    line(240,355,230,365);
    line(241,355,241,365);
    line(242,355,242,365);
    line(243,355,243,365);
    line(244,355,244,365);
    line(245,355,245,365);                  //hair right side
    line(246,355,246,365);
    line(247,355,247,364);
    line(248,355,248,363);
    line(249,355,249,361);
    line(250,355,250,360);

    setcolor(LIGHTGRAY);
    line(236,365,244,365);
    line(235,365,215,370);        //left shoulder
    line(245,365,263,370);        //right shoulder
    line(214,370,214,390);
    line(215,390,225,390);                                   //shirt
    line(226,390,226,415);
    line(227,415,257,415);
    line(257,415,257,383);
    line(258,383,265,393);
    line(264,370,278,388);
    line(266,393,277,388);

    setfillstyle(1,LIGHTGRAY);
    floodfill(238,370,LIGHTGRAY);

    setcolor(YELLOW);
    line(216,391,223,391);
    line(216,392,216,405);
    line(223,392,223,405);
    line(216,406,213,409);            //left hand
    line(214,409,215,410);
    line(216,410,217,408);
    line(218,408,219,411);
    line(220,411,222,411);
    line(222,411,222,406);

    setfillstyle(1,BLACK);
    floodfill(221,405,YELLOW);

    setcolor(BLUE);
    settextstyle(1,0,1);
    outtextxy(237,363,"B");

    setcolor(LIGHTGREEN);
    settextstyle(1,0,1);
    outtextxy(238,390,"7");

    setcolor(YELLOW);
    line(268,393,277,390);

    line(277,391,281,395);
    line(268,394,280,402);
    line(281,403,289,403);             //right hand
    line(282,396,278,375);
    line(289,402,286,375);
    line(278,374,286,374);
    setcolor(YELLOW);
    setfillstyle(1,BLACK);
    floodfill(279,376,YELLOW);

    setcolor(GREEN);
    circle(281,367,5);                     //ball
    setfillstyle(1,DARKGRAY);
    floodfill(282,368,GREEN);

    setcolor(BROWN);
    line(284,374,284,369);
    line(281,374,281,369);          //fingers
    line(278,374,278,369);

    setcolor(LIGHTGRAY);
    line(226,416,257,416);
    line(226,417,226,455);
    line(257,417,257,455);              //pant
    line(227,455,237,455);
    line(256,455,246,455);
    line(237,454,241,428);
    line(246,454,241,427);
    setfillstyle(1,LIGHTGRAY);
    floodfill(240,420,LIGHTGRAY);

    setcolor(BROWN);
    line(226,418,257,418);          //belt
    rectangle(227,456,236,462);
    setfillstyle(1,BROWN);
    floodfill(228,457,BROWN);

    rectangle(247,456,256,462);
    setfillstyle(1,DARKGRAY);
    floodfill(248,457,BROWN);

    int bow;
    void*bowle;
    bow=imagesize(211,338,292,464);
    bowle=malloc(bow);
    getimage(211,338,292,464,bowle);

///////////////////////////////////////////////////////////////////////

    setcolor(BLACK);
    rectangle(0,0,640,480);          //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    rectangle(0,0,640,480);          //covering with field
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(YELLOW);
    rectangle(150,0,500,350);         //pitch
    setfillstyle(1,YELLOW);
    floodfill(151,1,YELLOW);

    setcolor(WHITE);
    circle(25,270,5);                 //fielders
    setfillstyle(1,WHITE);
    floodfill(26,271,WHITE);

    setcolor(WHITE);
    circle(620,400,5);                //fielders
    setfillstyle(1,WHITE);
    floodfill(621,401,WHITE);

    setcolor(WHITE);
    circle(560,60,5);                   //fielders
    setfillstyle(1,WHITE);
    floodfill(561,61,WHITE);

    setcolor(BROWN);
    rectangle(315,340,318,300);          //stumps
    setfillstyle(1,BROWN);
    floodfill(316,339,BROWN);

    setcolor(BROWN);
    rectangle(322,340,325,300);           //stumps
    setfillstyle(1,BROWN);
    floodfill(323,339,BROWN);

    setcolor(BROWN);
    rectangle(329,340,332,300);          //stumps
    setfillstyle(1,BROWN);
    floodfill(330,339,BROWN);

    setcolor(BLACK);
    line(315,300,332,300);              //bales

    setcolor(BLACK);
    rectangle(200,340,202,280);
    setfillstyle(1,BLACK);               //crease
    floodfill(201,339,BLACK);

    setcolor(BLACK);
    rectangle(447,340,449,280);          //crease
    setfillstyle(1,BLACK);
    floodfill(448,339,BLACK);

    setcolor(BLACK);
    rectangle(150,279,210,277);       //crease
    setfillstyle(1,BLACK);
    floodfill(151,278,BLACK);

    setcolor(BLACK);
    rectangle(294,279,500,277);       //crease
    setfillstyle(1,BLACK);
    floodfill(295,278,BLACK);

    int move;

    for(move=480;move>350;move--)   //to move bowlers from field till pitch
     {

      putimage(211,move,bowler,XOR_PUT);

      delay(5);

      putimage(211,move,bowler,XOR_PUT);

     }
    for(move=350;move>150;move--)//to move bowler from pitch to crease
     {

      putimage(211,move,bowle,XOR_PUT);

      delay(5);

      if(move>151)
      {
       putimage(211,move,bowle,XOR_PUT);
      }
     }
   clrscr();

   main2();
}

////////////////////////////////////////////////////////////////////////////

 void tillbati()
  {
    clrscr();

    cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);         //to set a blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    rectangle(0,0,640,480);
    setfillstyle(1,GREEN);           //to cover with field
    floodfill(1,1,GREEN);

    setcolor(WHITE);
    circle(46,390,5);                       //fielder
    setfillstyle(1,WHITE);
    floodfill(47,391,WHITE);


    setcolor(YELLOW);
    rectangle(150,0,490,480);            //pitch
    setfillstyle(1,YELLOW);
    floodfill(151,51,YELLOW);

    setcolor(LIGHTRED);
    rectangle(200,95,215,98);
    setfillstyle(1,RED);
    floodfill(201,96,LIGHTRED);

    rectangle(200,127,215,130);
    setfillstyle(1,RED);
    floodfill(201,128,LIGHTRED);

    setcolor(BROWN);
    rectangle(310,20,313,60);
    setfillstyle(1,BROWN);         //stumps
    floodfill(311,21,BROWN);

    setcolor(BROWN);
    rectangle(317,20,320,60);       //stumps
    setfillstyle(1,BROWN);
    floodfill(318,21,BROWN);

    setcolor(BROWN);
    rectangle(324,20,327,60);      //stumps
    setfillstyle(1,BROWN);
    floodfill(325,21,BROWN);

    setcolor(BLACK);                //bales
    line(312,20,325,20);

    setcolor(BLACK);
    rectangle(200,60,203,100);        //crease
    setfillstyle(1,BLACK);
    floodfill(201,61,BLACK);

    setcolor(BLACK);
    rectangle(427,60,430,100);        //crease
    setfillstyle(1,BLACK);
    floodfill(428,61,BLACK);

    setcolor(BLACK);
    rectangle(150,101,490,104);      //crease
    setfillstyle(1,BLACK);
    floodfill(151,102,BLACK);

    //////////////////////////////////end of background///////////////////////////

    setcolor(LIGHTMAGENTA);
    rectangle(345,10,355,15);                 //cap
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(346,11,LIGHTMAGENTA);

    setcolor(LIGHTMAGENTA);
    rectangle(356,5,368,15);                 //cap
    setfillstyle(1,LIGHTMAGENTA);
    floodfill(357,6,LIGHTMAGENTA);

    setcolor(BLACK);
    line(366,16,372,10);              //hairs
    line(366,16,372,18);

    setcolor(BLACK);
    circle(360,25,10);
    line(354,21,357,21);
    line(355,23,356,23);
    line(361,21,364,21);
    line(362,23,363,23);
    line(359,23,359,27);
    line(360,27,361,27);

    setcolor(MAGENTA);
    line(358,31,362,31);
    line(358,32,362,32);

    setcolor(BLACK);
    rectangle(356,35,364,40);

    setcolor(LIGHTMAGENTA);
    line(356,40,364,40);
    line(355,40,343,43);
    line(343,44,338,58);
    line(339,58,348,60);
    line(348,59,352,50);
    line(352,51,352,68);
    line(353,68,370,68);                  //shirt
    line(370,67,370,55);
    line(364,40,368,42);
    line(368,43,360,55);
    line(369,43,372,53);
    line(371,53,366,60);
    line(366,59,360,54);
    setfillstyle(1,RED);
    floodfill(359,55,LIGHTMAGENTA);
    setfillstyle(1,RED);
    floodfill(366,50,LIGHTMAGENTA);


    setcolor(RED);
    line(352,69,370,69);
    line(352,70,352,95);
    line(353,95,360,95);
    line(360,94,362,78);                //pant
    line(370,70,370,95);
    line(369,95,362,95);
    line(362,94,361,78);
    setfillstyle(1,DARKGRAY);
    floodfill(360,74,RED);

    setcolor(BLACK);
    rectangle(359,96,350,99);
    setfillstyle(1,BLACK);
    floodfill(351,97,BLACK);
					   //shoes
    rectangle(363,96,369,99);
    setfillstyle(1,BLACK);
    floodfill(364,97,BLACK);

    setcolor(BLACK);
    line(340,59,346,61);
    line(340,60,336,70);                 //right hand
    line(346,62,341,72);
    line(337,70,340,72);

    setcolor(BLACK);
    line(360,57,365,60);
    line(360,58,347,72);
    line(365,61,350,75);              //left hand
    line(347,73,350,74);
    setfillstyle(1,YELLOW);
    floodfill(357,64,BLACK);

    setcolor(BLACK);
    line(347,74,345,76);
    line(348,75,345,74);                   //fingers
    line(338,72,340,76);
    line(337,71,341,75);

    setcolor(BLACK);
    line(343,71,346,72);
    line(343,72,339,80);
    line(340,80,342,81);               //handle
    line(342,80,346,71);
    setfillstyle(1,BLACK);
    floodfill(341,79,BLACK);

    setcolor(BROWN);
    line(337,81,343,82);
    line(337,82,334,83);
    line(343,83,346,84);
    line(334,84,328,98);                //willow
    line(346,85,340,99);
    line(329,98,339,99);
    setfillstyle(1,BROWN);
    floodfill(336,91,BROWN);

 ///////////////////////////// end of batsman //////////////////////////////

 if((option==2)||(option==3))

  {
 //////////////////////////////// straight drive ////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(29,59,181,111);
   rectangle(30,60,180,110);
   setfillstyle(1,LIGHTGREEN);
   floodfill(31,61,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(33,60,"STRAIGHT");

   settextstyle(1,0,3);
   outtextxy(90,80,"DRIVE");

//////////////////////////// end of straight drive //////////////////////////

/////////////////////////// defence /////////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(29,199,161,241);
   rectangle(30,200,160,240);
   setfillstyle(1,LIGHTGREEN);
   floodfill(31,201,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(33,200,"DEFENCE");

////////////////////////// end of defence //////////////////////////

/////////////////////////// pull shot /////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(29,309,181,351);
   rectangle(30,310,180,350);
   setfillstyle(1,LIGHTGREEN);
   floodfill(31,311,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(33,310,"PULL SHOT");

////////////////////////// end of pull shot /////////////////////

///////////////////////// square cut ///////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(479,59,601,111);
   rectangle(480,60,600,110);
   setfillstyle(1,LIGHTGREEN);
   floodfill(481,61,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(483,60,"SQUARE");

   settextstyle(1,0,3);
   outtextxy(530,85,"CUT");

//////////////////////////////// end of square cut ////////////////////////

/////////////////////////// long on /////////////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(489,199,601,241);
   rectangle(490,200,600,240);
   setfillstyle(1,LIGHTGREEN);
   floodfill(491,201,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(493,200,"LONG ON");

////////////////////////////////// end long on /////////////////////////

////////////////////////////// long off ///////////////////////////////

   setcolor(LIGHTMAGENTA);
   rectangle(489,309,616,351);
   rectangle(490,310,615,350);
   setfillstyle(1,LIGHTGREEN);
   floodfill(491,311,LIGHTMAGENTA);

   setcolor(LIGHTRED);
   settextstyle(1,0,3);
   outtextxy(493,310,"LONG OFF");

/////////////////////////////// end long off ////////////////////////////

   }

    int i,j;
    for(j=472,i=465;j>130;j--,i--)  //for ball to move till hit area
     {

      if(lengt == 3)
       {
	setcolor(BLACK);
	circle(325,400,5);
	setfillstyle(1,BLACK);
	floodfill(325,400,BLACK);
       }

   if(lengt == 2)
    {
     setcolor(BLACK);
     circle(325,285,5);
     setfillstyle(1,BLACK);
     floodfill(325,285,BLACK);
    }

   if(lengt == 1)
    {
     setcolor(BLACK);
     circle(325,150,5);
     setfillstyle(1,BLACK);
     floodfill(325,150,BLACK);
    }


      setcolor(RED);
      circle(325,j,5);
      setfillstyle(1,RED);
      floodfill(325,j,RED);

     if((option==2)||(option==3))
      {
       showmouse();
      }

      delay(::del);

      setcolor(YELLOW);
      rectangle(317,i,332,i+14);
      setfillstyle(1,YELLOW);
      floodfill(318,i+1,YELLOW);
     }



    for(j=130,i=123;j>75;j--,i--) // ball to move from hit area to stumps
     {

      if(lengt == 3)
       {
	setcolor(BLACK);
	circle(325,400,5);
	setfillstyle(1,BLACK);
	floodfill(290,400,BLACK);
       }

   if(lengt == 2)
    {
     setcolor(BLACK);
     circle(325,285,5);
     setfillstyle(1,BLACK);
     floodfill(325,285,BLACK);
    }

   if(lengt == 1)
    {
     setcolor(BLACK);
     circle(325,150,5);
     setfillstyle(1,BLACK);
     floodfill(325,150,BLACK);
    }


      setcolor(RED);
      circle(325,j,5);
      setfillstyle(1,RED);
      floodfill(325,j,RED);

      delay(::del);

      setcolor(YELLOW);
      rectangle(317,i,332,i+14);
      setfillstyle(1,YELLOW);
      floodfill(318,i+1,YELLOW);

    if((option==2)||(option==3))  //if user needs to bat second
     {
       setmouselimit();
       showmouse();           //initializing mouse
       getstatus();
       gotoxy(1,1);
	{
	 cout<<cx<<dx;
	}

	int s=0;

     /* when mouse is clicked at appropriate moment corresponding
       shot will be displayed before which a sound is given
       and the action of increasing runs or wickets is performed
       by calling those functions */


      if(bx==1)
       {
	 s=1;
       if((cx>=29)&&(cx<=181)&&(dx>=59)&&(dx<=111)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  s=1;

	 }

     else if((cx>=29)&&(cx<=181)&&(dx>=59)&&(dx<=111)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  caught();
	  wickets+=1;
	  s=1;
	  }
     else if((cx>=29)&&(cx<=181)&&(dx>=59)&&(dx<=111)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  four();
	  runs+=4;
	  s=1;

	 }

       //////////////////end strt drive///////////
       /////////////////defence///////////////////

       else if((cx>=29)&&(cx<=161)&&(dx>=199)&&(dx<=241)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	  s=1;

	 }
       else if((cx>=29)&&(cx<=161)&&(dx>=199)&&(dx<=241)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	  s=1;

	 }
       else if((cx>=29)&&(cx<=161)&&(dx>=199)&&(dx<=241)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	  s=1;

	 }

       //////////////////////end defence//////////////
       /////////////////////pullshot//////////////////

       else if((cx>=29)&&(cx<=181)&&(dx>=309)&&(dx<=351)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  six();
	  runs+=6;
	  s=1;

	 }

       else if((cx>=29)&&(cx<=181)&&(dx>=309)&&(dx<=351)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  four();
	  runs+=4;
	  s=1;

	 }
       else if((cx>=29)&&(cx<=181)&&(dx>=309)&&(dx<=351)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();

	  out();
	  wickets+=1;
	  s=1;

	 }

       /////////////////////end pullshot////////////////
       ////////////////////squarecut/////////////////////

   else	if((cx>=479)&&(cx<=601)&&(dx>=59)&&(dx<=111)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  caught();
	  wickets+=1;
	  s=1;

	 }

   else	if((cx>=479)&&(cx<=601)&&(dx>=59)&&(dx<=111)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  four();
	  runs+=4;
	  s=1;
	   }
  else	if((cx>=479)&&(cx<=601)&&(dx>=59)&&(dx<=111)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  out();
	  wickets+=1;
	  s=1;

	 }

       ///////////////////////end squarecut/////////////////////
      ///////////////////////longoff///////////////////////////

   else	if((cx>=489)&&(cx<=616)&&(dx>=309)&&(dx<=351)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  s=1;

	 }

   else	if((cx>=489)&&(cx<=616)&&(dx>=309)&&(dx<=351)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  run();
	  s=1;

	 }
   else	if((cx>=489)&&(cx<=616)&&(dx>=309)&&(dx<=351)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  six();
	  runs+=6;
	  s=1;

	 }

	////////////////////////end longoff//////////////////
	////////////////////////longon///////////////////////

   else	if((cx>=489)&&(cx<=601)&&(dx>=199)&&(dx<=241)&&(lengt==3))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  s=1;

	 }

   else	if((cx>=489)&&(cx<=601)&&(dx>=199)&&(dx<=241)&&(lengt==2))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  run();
	  s=1;

	 }
  else	if((cx>=489)&&(cx<=601)&&(dx>=199)&&(dx<=241)&&(lengt==1))
	 {

	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  six();
	  runs+=6;
	  s=1;

	 }
	 break;
       }

       /////////////////////////end longon////////////////////////


	if((s==0)&&(j==76))
	 {
	  out();
	  wickets+=1;
	  break;
	 }

      }

      if(option==1)   //if computer needs to bat second
       {
	int shot;

	shot=random(6);

	///////////////strt drive//////////////////

       /* computer chooses random shot and then  corresponding
       shot will be displayed before which a sound is given
       and the action of increasing runs or wickets is performed
       by calling those functions */


	if((shot==1)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	 }

   else	if((shot==1)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	  caught();
	  wickets+=1;
	 }
   else	if((shot==1)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  straightdrive();
	 four();
	  runs2+=4;
	 }

       //////////////////end strt drive///////////
       /////////////////defence///////////////////

   else	if((shot==2)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	 }
   else	if((shot==2)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	 }
   else	if((shot==2)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  defence();
	 }

       //////////////////////end defence//////////////
       /////////////////////pullshot//////////////////

    else if((shot==3)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  six();
	  runs2+=6;
	 }

   else	if((shot==3)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  four();
	  runs2+=4;
	 }
  else	if((shot==3)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  pullshot();
	  out();
	  wickets+=1;
	 }

       /////////////////////end pullshot////////////////
       ////////////////////squarecut/////////////////////

    else if((shot==4)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  caught();
	  wickets+=1;
	 }

   else	if((shot==4)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  four();
	  runs2+=4;
	 }
  else	if((shot==4)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  squarecut();
	  out();
	  wickets+=1;
	 }

       ///////////////////////end squarecut/////////////////////
      ///////////////////////longoff///////////////////////////

   else	if((shot==5)&&(lengt==3))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	 }

   else	if((shot==5)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  runi();
	  runs2+=1;
	 }
   else	if((shot==5)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longoff();
	  six();
	  runs2+=6;
	 }

	////////////////////////end longoff//////////////////
	////////////////////////longon///////////////////////

  else	if((shot==6)&&(lengt==3))
	 {
	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	 }

   else	if((shot==6)&&(lengt==2))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  runi();
	  runs2+=1;
	 }
   else	if((shot==6)&&(lengt==1))
	 {
	  hidemouse();
	  sound(250);
	  delay(500);
	  nosound();
	  longon();
	  six();
	  runs2+=6;
	 }

       /////////////////////////end longon////////////////////////
	 break;
       }
     }

  }

///////////////////////////////////////////////////////////////////////////

  void ballmovei()
  {
    clrscr();

    hidemouse();

    setcolor(BLACK);
    rectangle(0,0,640,480);         //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);


    setcolor(BLACK);                     //box for bowler
    rectangle(211,338,292,464);
    setfillstyle(1,BLACK);
    floodfill(212,339,BLACK);


    setcolor(YELLOW);
    circle(240,350,10);               //head
    setfillstyle(1,YELLOW);
    floodfill(241,351,YELLOW);

    setcolor(YELLOW);
    line(230,355,230,360);
    line(231,355,231,361);
    line(232,355,232,362);
    line(233,355,233,363);
    line(234,355,234,364);             //hair left side
    line(235,355,235,365);
    line(236,355,236,365);
    line(237,355,237,365);
    line(238,355,238,365);
    line(239,355,239,365);

    line(240,355,230,365);
    line(241,355,241,365);
    line(242,355,242,365);
    line(243,355,243,365);
    line(244,355,244,365);
    line(245,355,245,365);                  //hair right side
    line(246,355,246,365);
    line(247,355,247,364);
    line(248,355,248,363);
    line(249,355,249,361);
    line(250,355,250,360);

    setcolor(LIGHTGRAY);
    line(236,365,244,365);
    line(235,365,215,370);        //left shoulder
    line(245,365,263,370);        //right shoulder
    line(214,370,214,390);
    line(215,390,225,390);                                   //shirt
    line(226,390,226,415);
    line(227,415,257,415);
    line(257,415,257,383);
    line(258,383,265,393);
    line(264,370,278,388);
    line(266,393,277,388);

    setfillstyle(1,LIGHTGRAY);
    floodfill(238,370,LIGHTGRAY);

    setcolor(YELLOW);
    line(216,391,223,391);
    line(216,392,216,405);
    line(223,392,223,405);
    line(216,406,213,409);            //left hand
    line(214,409,215,410);
    line(216,410,217,408);
    line(218,408,219,411);
    line(220,411,222,411);
    line(222,411,222,406);

    setfillstyle(1,BLACK);
    floodfill(221,405,YELLOW);

    setcolor(BLUE);
    settextstyle(1,0,1);
    outtextxy(237,363,"B");

    setcolor(LIGHTGREEN);
    settextstyle(1,0,1);
    outtextxy(238,390,"7");

    setcolor(YELLOW);
    line(268,393,277,390);


    line(277,391,281,395);
    line(268,394,280,402);
    line(281,403,289,403);             //right hand
    line(282,396,278,375);
    line(289,402,286,375);
    line(278,374,286,374);
    setcolor(YELLOW);
    setfillstyle(1,BLACK);
    floodfill(279,376,YELLOW);


    setcolor(BROWN);
    line(284,374,284,369);
    line(281,374,281,369);          //fingers
    line(278,374,278,369);

    setcolor(LIGHTGRAY);
    line(226,416,257,416);
    line(226,417,226,455);
    line(257,417,257,455);              //pant
    line(227,455,237,455);
    line(256,455,246,455);
    line(237,454,241,428);
    line(246,454,241,427);
    setfillstyle(1,LIGHTGRAY);
    floodfill(240,420,LIGHTGRAY);

    setcolor(BROWN);
    line(226,418,257,418);          //belt
    rectangle(227,456,236,462);
    setfillstyle(1,BROWN);
    floodfill(228,457,BROWN);

    rectangle(247,456,256,462);
    setfillstyle(1,DARKGRAY);
    floodfill(248,457,BROWN);

    int bow;
    void*bowle;
    bow=imagesize(211,338,292,464);
    bowle=malloc(bow);
    getimage(211,338,292,464,bowle);


///////////////////////////////////////////////////////////////////////////


    setcolor(GREEN);
    rectangle(0,0,640,480);         //field
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(YELLOW);
    rectangle(150,0,500,350);          //pitch
    setfillstyle(1,YELLOW);
    floodfill(151,1,YELLOW);

    setcolor(WHITE);
    circle(25,270,5);
    setfillstyle(1,WHITE);
    floodfill(26,271,WHITE);
				      //fielders
    setcolor(WHITE);
    circle(620,400,5);
    setfillstyle(1,WHITE);
    floodfill(621,401,WHITE);

    setcolor(WHITE);                  //fielders
    circle(560,60,5);
    setfillstyle(1,WHITE);
    floodfill(561,61,WHITE);

    setcolor(BROWN);
    rectangle(315,340,318,300);
    setfillstyle(1,BROWN);              //stumps
    floodfill(316,339,BROWN);

    setcolor(BROWN);
    rectangle(322,340,325,300);         //stumps
    setfillstyle(1,BROWN);
    floodfill(323,339,BROWN);

    setcolor(BROWN);
    rectangle(329,340,332,300);          //stumps
    setfillstyle(1,BROWN);
    floodfill(330,339,BROWN);

    setcolor(BLACK);                      //bales
    line(315,300,332,300);

    setcolor(BLACK);
    rectangle(200,340,202,280);         //crease
    setfillstyle(1,BLACK);
    floodfill(201,339,BLACK);

    setcolor(BLACK);
    rectangle(447,340,449,280);          //crease
    setfillstyle(1,BLACK);
    floodfill(448,339,BLACK);

    setcolor(BLACK);
    rectangle(150,279,210,277);
    setfillstyle(1,BLACK);               //crease
    floodfill(151,278,BLACK);

    setcolor(BLACK);
    rectangle(294,279,500,277);          //crease
    setfillstyle(1,BLACK);
    floodfill(295,278,BLACK);

    //////////////////////////////////////////////////////////////////////////

    int i,j;
    for(j=180,i=173;j>5;j--,i--)  //movement of the ball
     {
      putimage(211,150,bowle,XOR_PUT);

      setcolor(RED);
      circle(281,j,5);
      setfillstyle(1,RED);
      floodfill(281,j,RED);

      delay(::del);

      setcolor(YELLOW);
      rectangle(273,i,288,i+14);
      setfillstyle(1,YELLOW);
      floodfill(274,i+1,YELLOW);
    }

    tillbati();
  }

///////////////////////////////////////////////////////////////////////////

 void main3()
  {
   ballmovei();
  }

////////////////////////////////////////////////////////////////////////////

 void bowlingi()
  {

    int ped;

   if((option==2)||(option==3))    //if user needs to bat second
     {
      ped=random(3);       //computer chooses random speed
      lengt=random(3);     //computer chooses random length

       if(ped==1)
	{
	 del=6;           //slow
	}
       if(ped==2)
	{
	 del=5;           //medium
	}
       if(ped==3)
	{
	 del=4;          //fast
	}

      }

    if(option==1)    //if user needs to bowl second calls funtions which
     {               //determine speed and length by mouse click
      speed();
      length();
     }

    clrscr();

    cleardevice();

    hidemouse();

    setcolor(BLACK);                     //box for bowler
    rectangle(211,338,292,464);
    setfillstyle(1,BLACK);
    floodfill(212,339,BLACK);

    setcolor(GREEN);
    circle(240,350,10);               //head
    setfillstyle(1,GREEN);
    floodfill(241,351,GREEN);

    setcolor(GREEN);
    line(230,355,230,360);
    line(231,355,231,361);
    line(232,355,232,362);
    line(233,355,233,363);
    line(234,355,234,364);             //hair left side
    line(235,355,235,365);
    line(236,355,236,365);
    line(237,355,237,365);
    line(238,355,238,365);
    line(239,355,239,365);

    line(240,355,230,365);
    line(241,355,241,365);
    line(242,355,242,365);
    line(243,355,243,365);
    line(244,355,244,365);
    line(245,355,245,365);                  //hair right side
    line(246,355,246,365);
    line(247,355,247,364);
    line(248,355,248,363);
    line(249,355,249,361);
    line(250,355,250,360);

    setcolor(BLUE);
    line(236,365,244,365);
    line(235,365,215,370);        //left shoulder
    line(245,365,263,370);        //right shoulder
    line(214,370,214,390);
    line(215,390,225,390);                                   //shirt
    line(226,390,226,415);
    line(227,415,257,415);
    line(257,415,257,383);
    line(258,383,265,393);
    line(264,370,278,388);
    line(266,393,277,388);

    setfillstyle(1,LIGHTCYAN);
    floodfill(238,370,BLUE);

    setcolor(BROWN);
    line(216,391,223,391);
    line(216,392,216,405);
    line(223,392,223,405);
    line(216,406,213,409);            //left hand
    line(214,409,215,410);
    line(216,410,217,408);
    line(218,408,219,411);
    line(220,411,222,411);
    line(222,411,222,406);

    setfillstyle(1,LIGHTRED);
    floodfill(221,405,BROWN);

    setcolor(WHITE);
    settextstyle(1,0,1);
    outtextxy(237,363,"B");

    setcolor(RED);
    settextstyle(1,0,1);
    outtextxy(238,390,"7");

    setcolor(BROWN);
    line(268,393,277,390);
    line(277,391,281,395);
    line(268,394,280,402);
    line(281,403,289,403);             //right hand
    line(282,396,278,375);
    line(289,402,286,375);
    line(278,374,286,374);
    setcolor(BROWN);
    setfillstyle(1,LIGHTRED);
    floodfill(279,376,BROWN);

    setcolor(RED);
    circle(281,367,5);                     //ball
    setfillstyle(1,BROWN);
    floodfill(282,368,RED);

    setcolor(BROWN);
    line(284,374,284,369);
    line(281,374,281,369);          //fingers
    line(278,374,278,369);

    setcolor(BLUE);
    line(226,416,257,416);
    line(226,417,226,455);
    line(257,417,257,455);              //pant
    line(227,455,237,455);
    line(256,455,246,455);
    line(237,454,241,428);
    line(246,454,241,427);
    setfillstyle(1,LIGHTCYAN);
    floodfill(240,420,BLUE);

    setcolor(BROWN);
    line(226,418,257,418);          //belt
    rectangle(227,456,236,462);
    setfillstyle(1,BROWN);
    floodfill(228,457,BROWN);

    rectangle(247,456,256,462);
    setfillstyle(1,BROWN);
    floodfill(248,457,BROWN);

    int bowl;
    void*bowler;
    bowl=imagesize(211,338,292,464);
    bowler=malloc(bowl);
    getimage(211,338,292,464,bowler);


/////////////////////////////////////////////////////////////////////////

    setcolor(BLACK);                     //box for bowler
    rectangle(211,338,292,464);
    setfillstyle(1,BLACK);
    floodfill(212,339,BLACK);

    setcolor(YELLOW);
    circle(240,350,10);               //head
    setfillstyle(1,YELLOW);
    floodfill(241,351,YELLOW);

    setcolor(YELLOW);
    line(230,355,230,360);
    line(231,355,231,361);
    line(232,355,232,362);
    line(233,355,233,363);
    line(234,355,234,364);             //hair left side
    line(235,355,235,365);
    line(236,355,236,365);
    line(237,355,237,365);
    line(238,355,238,365);
    line(239,355,239,365);

    line(240,355,230,365);
    line(241,355,241,365);
    line(242,355,242,365);
    line(243,355,243,365);
    line(244,355,244,365);
    line(245,355,245,365);                  //hair right side
    line(246,355,246,365);
    line(247,355,247,364);
    line(248,355,248,363);
    line(249,355,249,361);
    line(250,355,250,360);

    setcolor(LIGHTGRAY);
    line(236,365,244,365);
    line(235,365,215,370);        //left shoulder
    line(245,365,263,370);        //right shoulder
    line(214,370,214,390);
    line(215,390,225,390);                                   //shirt
    line(226,390,226,415);
    line(227,415,257,415);
    line(257,415,257,383);
    line(258,383,265,393);
    line(264,370,278,388);
    line(266,393,277,388);

    setfillstyle(1,LIGHTGRAY);
    floodfill(238,370,LIGHTGRAY);

    setcolor(YELLOW);
    line(216,391,223,391);
    line(216,392,216,405);
    line(223,392,223,405);
    line(216,406,213,409);            //left hand
    line(214,409,215,410);
    line(216,410,217,408);
    line(218,408,219,411);
    line(220,411,222,411);
    line(222,411,222,406);

    setfillstyle(1,BLACK);
    floodfill(221,405,YELLOW);


    setcolor(BLUE);
    settextstyle(1,0,1);
    outtextxy(237,363,"B");

    setcolor(LIGHTGREEN);
    settextstyle(1,0,1);
    outtextxy(238,390,"7");

    setcolor(YELLOW);
    line(268,393,277,390);

    line(277,391,281,395);
    line(268,394,280,402);
    line(281,403,289,403);             //right hand
    line(282,396,278,375);
    line(289,402,286,375);
    line(278,374,286,374);
    setcolor(YELLOW);
    setfillstyle(1,BLACK);
    floodfill(279,376,YELLOW);

    setcolor(GREEN);
    circle(281,367,5);                     //ball
    setfillstyle(1,DARKGRAY);
    floodfill(282,368,GREEN);

    setcolor(BROWN);
    line(284,374,284,369);
    line(281,374,281,369);          //fingers
    line(278,374,278,369);

    setcolor(LIGHTGRAY);
    line(226,416,257,416);
    line(226,417,226,455);
    line(257,417,257,455);              //pant
    line(227,455,237,455);
    line(256,455,246,455);
    line(237,454,241,428);
    line(246,454,241,427);
    setfillstyle(1,LIGHTGRAY);
    floodfill(240,420,LIGHTGRAY);

    setcolor(BROWN);
    line(226,418,257,418);          //belt
    rectangle(227,456,236,462);
    setfillstyle(1,BROWN);
    floodfill(228,457,BROWN);

    rectangle(247,456,256,462);
    setfillstyle(1,DARKGRAY);
    floodfill(248,457,BROWN);

    int bow;
    void*bowle;
    bow=imagesize(211,338,292,464);
    bowle=malloc(bow);
    getimage(211,338,292,464,bowle);

///////////////////////////////////////////////////////////////////////

    setcolor(BLACK);
    rectangle(0,0,640,480);         //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);

    setcolor(GREEN);
    rectangle(0,0,640,480);          //field
    setfillstyle(1,GREEN);
    floodfill(1,1,GREEN);

    setcolor(YELLOW);
    rectangle(150,0,500,350);         //pitch
    setfillstyle(1,YELLOW);
    floodfill(151,1,YELLOW);

    setcolor(WHITE);
    circle(25,270,5);
    setfillstyle(1,WHITE);
    floodfill(26,271,WHITE);
				     //fielders
    setcolor(WHITE);
    circle(620,400,5);
    setfillstyle(1,WHITE);
    floodfill(621,401,WHITE);
				     //fielders
    setcolor(WHITE);
    circle(560,60,5);
    setfillstyle(1,WHITE);
    floodfill(561,61,WHITE);

    setcolor(BROWN);
    rectangle(315,340,318,300);         //stumps
    setfillstyle(1,BROWN);
    floodfill(316,339,BROWN);

    setcolor(BROWN);
    rectangle(322,340,325,300);          //stumps
    setfillstyle(1,BROWN);
    floodfill(323,339,BROWN);

    setcolor(BROWN);
    rectangle(329,340,332,300);           //stumps
    setfillstyle(1,BROWN);
    floodfill(330,339,BROWN);

    setcolor(BLACK);                     //bales
    line(315,300,332,300);

    setcolor(BLACK);
    rectangle(200,340,202,280);          //crease
    setfillstyle(1,BLACK);
    floodfill(201,339,BLACK);

    setcolor(BLACK);
    rectangle(447,340,449,280);          //crease
    setfillstyle(1,BLACK);
    floodfill(448,339,BLACK);

    setcolor(BLACK);
    rectangle(150,279,210,277);         //crease
    setfillstyle(1,BLACK);
    floodfill(151,278,BLACK);

    setcolor(BLACK);
    rectangle(294,279,500,277);         //crease
    setfillstyle(1,BLACK);
    floodfill(295,278,BLACK);

    int move;

    for(move=480;move>350;move--)  //movement of bowler from field till pitch
     {
      putimage(211,move,bowler,XOR_PUT);

      delay(5);

       putimage(211,move,bowler,XOR_PUT);

     }
    for(move=350;move>150;move--)//movement of bowler from pitch till crease
     {
      putimage(211,move,bowle,XOR_PUT);

      delay(5);

      if(move>151)
      {
       putimage(211,move,bowle,XOR_PUT);
      }
     }
   clrscr();

   main3();

  }

////////////////////////////////////////////////////////////////////////////

 void innings2()   //to begin 2nd innings
  {
   wickets=0;    //setting wickets lost to zero

   for(overs=0;(overs<number)&&(wickets<=10);overs++)
    {

      if((option==2)||(option==3))  //if user needs top bat second
	{
	 needto();
	}

     for(balls=0;(balls<6)&&(wickets<=10);balls++)
     {
      if(option==1)  //if user chooses to bat first
       {
	clrscr();

	scorei();

       }
      if((option==2)||(option==3))//if user needs to bat second
       {
	clrscr();

	score();

       }
      bowlingi();
     }
    }
   compare(); //invoking function compare to compare scores of user and computer
  }

///////////////////////////////////////////////////////////////////////////

 void inningsover()
  {
   clrscr();

   hidemouse();

   cleardevice();

    setcolor(BLACK);
    rectangle(0,0,640,480);      //to set blank screen
    setfillstyle(1,BLACK);
    floodfill(1,1,BLACK);


   setcolor(BLACK);
   rectangle(247,197,640,303);
   setfillstyle(1,BLACK);              //innings over box
   floodfill(248,198,BLACK);

   setcolor(DARKGRAY);
   rectangle(248,198,639,302);
   rectangle(249,199,638,301);
   rectangle(250,200,637,300);       //shade to innings over box
   rectangle(251,201,636,299);
   rectangle(252,202,635,298);

   setcolor(LIGHTGRAY);
   rectangle(253,203,634,297);
   rectangle(254,204,633,296);           //shade to innings over box
   rectangle(255,205,632,295);
   rectangle(256,206,631,294);
   rectangle(257,207,630,293);

   setcolor(BLUE);
   settextstyle(7,0,5);
   outtextxy(275,220,"I");

   setcolor(LIGHTRED);
   settextstyle(7,0,5);
   outtextxy(290,220,"N");

   setcolor(GREEN);
   settextstyle(7,0,5);
   outtextxy(315,220,"N");

   setcolor(BROWN);
   settextstyle(7,0,5);
   outtextxy(345,220,"I");

   setcolor(MAGENTA);
   settextstyle(7,0,5);
   outtextxy(360,220,"N");

   setcolor(BLUE);
   settextstyle(7,0,5);
   outtextxy(390,220,"G");

   setcolor(LIGHTRED);
   settextstyle(7,0,5);
   outtextxy(415,220,"S");

   setcolor(GREEN);
   settextstyle(7,0,5);
   outtextxy(470,220,"O");

   setcolor(LIGHTRED);
   settextstyle(7,0,5);
   outtextxy(495,220,"V");

   setcolor(BROWN);
   settextstyle(7,0,5);
   outtextxy(510,220,"E");

   setcolor(BLUE);
   settextstyle(7,0,5);
   outtextxy(535,220,"R");

   setcolor(MAGENTA);
   settextstyle(4,0,5);
   outtextxy(590,220,"!!!");

   int inn;
   void*ing;
   inn=imagesize(247,197,640,303);
   ing=malloc(inn);
   getimage(247,197,640,303,ing);

   setcolor(CYAN);
   rectangle(270,273,623,281);
   setfillstyle(1,CYAN);
   floodfill(271,274,CYAN);


//////////////////////////////////////////////////////////////////////////

    setcolor(BLACK);
    rectangle(420,316,535,410);        //chopper box
    setfillstyle(1,BLACK);
    floodfill(421,317,BLACK);

    setcolor(WHITE);
    rectangle(450,350,500,390);     //chopper body
    setfillstyle(1,MAGENTA);
    floodfill(451,351,WHITE);

    setcolor(MAGENTA);
    ellipse(445,370,20,10,20,20);      //chopper's head
    setfillstyle(1,WHITE);
    floodfill(446,371,MAGENTA);

    setcolor(WHITE);
    line(474,330,474,350);
    line(475,330,475,350);          //chopper blades
    line(476,330,476,350);

    circle(475,330,10);                  //chopper

    setcolor(GREEN);
    line(475,330,475,320);
    line(475,330,485,330);
    line(475,330,465,330);

    setcolor(WHITE);
    line(500,370,520,370);          //stars
    line(500,371,520,371);

    line(520,370,520,360);          //stars
    line(521,371,521,360);

    line(510,360,530,360);          //stars
    line(510,359,530,359);

    line(465,390,465,405);           //stars
    line(464,390,464,405);

    line(485,390,485,405);           //stars
    line(486,390,486,405);

    line(455,405,495,405);           //stars
    line(455,406,495,406);

    int cho;
    void*chop;
    cho=imagesize(420,316,535,410);
    chop=malloc(cho);
    getimage(420,316,535,410,chop);

//////////////////////////////////////////////////////////////////////////

    setcolor(BLACK);
    rectangle(49,340,118,385);            //ball box
    setfillstyle(1,BLACK);
    floodfill(50,341,BLACK);

    setcolor(RED);
    circle(95,362,20);            //ball
    setfillstyle(1,RED);
    floodfill(85,362,RED);

    setcolor(WHITE);
    circle(95,362,18);  //grips for the ball
    circle(95,362,16);

    setcolor(BROWN);
    line(76,351,54,351);
    line(73,358,59,358);
    line(77,372,60,372);
    line(74,363,63,363);          //forced lines
    line(87,381,62,381);
    line(79,375,53,375);
    line(82,378,73,378);
    line(74,367,58,367);
    line(76,354,66,354);

    int s;
    void*t;
    s=imagesize(49,340,118,385);
    t=malloc(s);
    getimage(49,340,118,385,t);

      setcolor(WHITE);
      circle(540,70,40);
      setfillstyle(1,WHITE);
      floodfill(540,71,WHITE);

      setcolor(LIGHTGRAY);
      circle(540,70,32);                    //moon
      setfillstyle(1,LIGHTGRAY);
      floodfill(540,70,LIGHTGRAY);

      setcolor(WHITE);
      circle(400,40,2);                   //moon
      setfillstyle(1,WHITE);
      floodfill(400,40,WHITE);

      setcolor(WHITE);
      circle(300,100,2);                  //moon
      setfillstyle(1,WHITE);
      floodfill(300,100,WHITE);

      setcolor(WHITE);
      circle(150,30,2);                  //moon
      setfillstyle(1,WHITE);
      floodfill(150,30,WHITE);

//////////////////////////////////////////////////////////////////////////


    int j,k;
    float i,l,de;

    int col;
 for(col=1;col<16;col++)
  {
   for(i=25;i<640;i++)
    {
     setcolor(col);              //display of colours
     circle(i,440,15);
     setfillstyle(1,col);
     floodfill(i,440,col);

    }
 }
    for(i=247,j=420,k=316,l=49,de=0;(j>10)&&(k>0);i-=0.5,j--,k--,l+=1.5)
     {
       /* loop to move all the objects defined above using object repetion
	  or by putimage */

      setcolor(WHITE);
      circle(540,70,40);
      setfillstyle(1,WHITE);
      floodfill(540,71,WHITE);

      setcolor(LIGHTGRAY);
      circle(540,70,32);
      setfillstyle(1,LIGHTGRAY);
      floodfill(540,70,LIGHTGRAY);

      setcolor(WHITE);
      circle(400,40,2);
      setfillstyle(1,WHITE);
      floodfill(400,40,WHITE);

      setcolor(WHITE);
      circle(300,100,2);
      setfillstyle(1,WHITE);
      floodfill(300,100,WHITE);

      setcolor(WHITE);
      circle(150,30,2);
      setfillstyle(1,WHITE);
      floodfill(150,30,WHITE);

      putimage(i,197,ing,XOR_PUT);

      putimage(j,k,chop,XOR_PUT);

      putimage(l,385,t,XOR_PUT);

      delay(de);

      cleardevice();

      if(l<280)
       {
	de+=0.1;    //increasing delay
       }
      if(l>=280)
       {
	de-=0.1;     //decreasing delay
       }
     }

    if((option==2)||(option==3))  //if user need to bat second computer displays target to be chased
     {
      target();
     }
    if(option==1)//if user is to bat first displays runs to be defended
     {
      defend();
     }

  }


/////////////////////////////////////////////////////////////////////////////


 void innings1()
  {

   for(overs=0;(overs<number)&&(wickets<=10);overs++)
    {

     for(balls=0;(balls<6)&&(wickets<=10);balls++)
     {
      if(option==1)//if user need to bat first
       {
	clrscr();

	score();

       }
     else if((option==2)||(option==3)) //if user need to bat second
       {
	clrscr();

	scorei();

       }
      bowling(); //invoking bowling to start the ball
     }
    }

    inningsover();  //once overs or wickets are down displays innings over
   }


///////////////////////////  END OF FIRST FILE  //////////////////////////////
