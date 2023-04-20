/* This program is contributed by Sunil Mahato */
/*  The users are free to use the code but
    if the program is just used for the reference,
    it would be highly appreciated. 
*/

#include<stdio.h>
#include<graphics.h>
int main() {

	// initialization of the graphics driver

	int gd =DETECT, gm;
	int i, j=2;

	initgraph(&gd, &gm, (char*)"D:/Dev-cpp/BGI");	// initialization of the graphics driver
	initwindow(getmaxwidth(), getmaxheight());		// function to diplay full screen graphics window

	// loop for moving the person to the center of the screen

	// codes for animating the person 1
	for(i=0; i<=200; i=i+10) {
		int a=i;
		int hands1[] = {85+a, 285, 125+a, 260, 170+a, 285};	// points for arms
		int legs1[] = {85+a, 385, 125+a, 330, 170+a, 385};	// points for legs
		circle(125+a, 220, 35);	//head 1
		line(125+a, 260, 125+a, 330);	//body 1
		drawpoly(3, hands1);	// hands 1
		drawpoly(3, legs1);		// legs 1


		// code for person proposing the girl

		if( a == 200) {

			// code for the person in sitting position
			delay(200);
			cleardevice();
			int leg[] = { 310, 385, 345, 340, 385, 330, 390, 385};
			circle(345, 240, 35);		// heads
			line(345, 280, 345, 340);	// body
			line(350, 300, 415, 275);	// arms
			drawpoly(4, leg);			// legs

			// code for the diamond
			rectangle(400, 250, 455, 275);	// box

			// for triangle diamond
			int diamond[] = { 410, 235, 445, 230, 425, 250, 410, 235};
			drawpoly(4, diamond);
			// sparks
			line(390, 195, 410, 220);
			line(415, 220, 410, 180);
			line(430, 180, 425, 220);
			line(435, 215, 445, 180);


			// code for the proposal text
			int propose[]= {330, 80, 460, 45, 590, 80, 590, 100, 460, 140, 330, 100, 330, 80}; 	// points for the proposal box
			drawpoly(7, propose);
			outtextxy(390, 90, (char*)"Will You Marry Me ??");
			delay(250);
		}

		// codes to animate person 2 (girl)
		int hands2[] = {670-i, 285, 710-i, 260, 750-i, 285};	// points for arms
		int legs2[] = {670-i, 385, 710-i, 330, 750-i, 380};	// points for legs
		circle(710-i, 220, 35);		// head
		line(710-i, 255, 710-i, 330);	// body
		drawpoly(3, hands2);			// hands
		drawpoly(3, legs2);				// legs
		delay(200);

		// breaking the loop once the limit is reached
		if(i == 200) {
			break;
		}
		cleardevice();

// code for adding the color to the diagrams
		setcolor(j);
		if(j == 15) {
			j=2;
		}
		j++;
	}

// ending part
// drawing the concentric circle
	for(i=0; i<500; i=i+50) {
		circle( 470, 245, 480-i);
		if(i==400)
			cleardevice();
		if(i==500)
			break;
		delay(200);

		// adding color
		setcolor(j);
		if(j == 15) {
			j=2;
		}
		j++;
	}
	// displaying the ending message 1
	cleardevice();
	ellipse(470, 255, 45, 45, 250, 250);
	outtextxy(370, 255, (char*)"Sadly !! The girl rejected me -_-");
	setcolor(3);


	// ENDING MESSAGE 2
	for(i=0; i<300; i=i+50) {
		delay(200);
		circle( 470, 255, 250-i);
		if(i==200)
			cleardevice();
		if(i==300)
			break;
		delay(200);

		// code for adding the color
		setcolor(j);
		if(j == 15) {
			j=2;
		}
		j++;
	}

	cleardevice();
	ellipse(470, 255, 45, 45, 250, 250);
	outtextxy(370, 255, (char*)" SO I AM GOING TO LIVE ALONE ");
	delay(200);
	setcolor(4);

	// ENDING MESSAGE 3
	for(i=0; i<300; i=i+50) {
		delay(200);
		circle( 470, 255, 250-i);
		setcolor(j);
		if(i==200)
			cleardevice();
		if(i==300)
			break;
		delay(200);
		if(j == 15) {
			j=2;
		}
		j++;
	}

	cleardevice();
	ellipse(470, 255, 45, 45, 250, 250);
	outtextxy(370, 255, (char*)" BYE BYE FRIENDS !!! ");
	delay(200);
	setcolor(3);

// ENDING MESSAGE 4 FINAL PART
	for(i=0; i<300; i=i+50) {
		delay(200);
		circle( 470, 255, 250-i);
		if(i==200)
			cleardevice();
		if(i==300)
			break;
		delay(200);
		setcolor(j);
		if(j == 15) {
			j=2;
		}
		j++;

	}
	// SHOWING THE CAR GOING OUT OF THE SCREEN
	cleardevice();
	for( i = 0 ; i <= 550 ; i = i + 10) {
		int top[] = {130+i, 80, 260+i, 80, 280+i, 110, 105+i, 110, 130+i, 80};
		// drawing the car in c
		drawpoly(5,top);
		rectangle(90+i,110,310+i,160);
		circle(130+i, 185, 20);
		circle(250+i, 185, 20);
		line(20, 220, 365+i, 220);
		setcolor(j);
		delay(100);
		if( i == 550)
			break;
		if(j == 15) {
			j=2;
		}
		j++;
		cleardevice();
	}

	// ENDING MESSAGE FINAL

	cleardevice();
	ellipse(470, 255, 45, 45, 250, 250);
	outtextxy(370, 255, (char*)" THANKS FOR YOUR SUPPORT - SUNIL MAHATO !!! ");
	delay(200);
	setcolor(3);
	getch();
	closegraph();
	return 0;
}
