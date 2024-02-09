#include "iGraphics.h"
#include "bitmap_loader.h"



void drawHomepage();
void drawStartPage();
void drawStoryPage();
void drawinstructionPage();
void drawScorePage();
void drawPlayGamePage();
void drawlevelonePage();
void drawleveltwoPage();
void drawlevelthreePage();


void clickStartButton();
void clickBackButtonStartPage();
void clickStoryButton();
void clickBackButtonStoryPage();
void clickinstructionButton();
void clickBackButtoninstructionPage();
void clickScoreButton();
void clickBackButtonScorePage();
void clickExitButton();
void clickPlayGameButton();
void clickBackButtonPlayGamePage();
void clickleveloneButton();
void clickleveltwoButton();
void clicklevelthreeButton();
void GameOver();
void exit1();



int homepage = 1;
int startbuttonclick = 0;
int startpage = 0;
int storypage = 0;
int instructionpage = 0;
int playGamePage = 0;
int scorePage = 0;
int levelonepage = 0;
int leveltwopage = 0;
int levelthreepage = 0;

boolean musicOn = true;





//for background randering === lvl1
int position[100];
char bg1Path[26][52] = { "Background1\\bg1.bmp", "Background1\\bg1_1.bmp", "Background1\\bg1_2.bmp", "Background1\\bg1_3.bmp", "Background1\\bg1_4.bmp", "Background1\\bg1_5.bmp", "Background1\\bg1_6.bmp", "Background1\\bg1_7.bmp", "Background1\\bg1_8.bmp", "Background1\\bg1_9.bmp", "Background1\\bg1_10.bmp", "Background1\\bg1_11.bmp", "Background1\\bg1_12.bmp",
"Background1\\bg1_13.bmp", "Background1\\bg1_14.bmp", "Background1\\bg1_15.bmp", "Background1\\bg1_16.bmp", "Background1\\bg1_17.bmp", "Background1\\bg1_18.bmp", "Background1\\bg1_19.bmp", "Background1\\bg1_20.bmp", "Background1\\bg1_21.bmp", "Background1\\bg1_22.bmp", "Background1\\bg1_23.bmp", "Background1\\bg1_24.bmp", "Background1\\bg1_25.bmp" };
int slice = 26;
int width = 1300 / slice;


void renddering()
{
	iClear();
	int i;
	for (i = 0; i < 26; i++)
	{
		iShowBMP2(position[i], 0, bg1Path[i], 0);
	}
}
void moveBackground()
{
	int i;
	for (i = 0; i<26; i++)
	{
		position[i] -= width;
		if (position[i] < 0)
		{
			position[i] = 1300 - width;
		}

	}
}
void intializeImagePosition()
{
	int i, j;
	for (i = 0, j = 0; i < slice; i++)
	{
		position[i] = j;
		j += width;

	}

}
//Background renndering lvl1 (((((END))))))


//for background randering === lvl2
int position2[100];
char bg2Path[26][52] = {"Background2\\bg2_1.bmp", "Background2\\bg2_2.bmp", "Background2\\bg2_3.bmp", "Background2\\bg2_4.bmp", "Background2\\bg2_5.bmp", "Background2\\bg2_6.bmp", "Background2\\bg2_7.bmp", "Background2\\bg2_8.bmp", "Background2\\bg2_9.bmp", "Background2\\bg2_10.bmp", "Background2\\bg2_11.bmp", "Background2\\bg2_12.bmp",
"Background2\\bg2_13.bmp", "Background2\\bg2_14.bmp", "Background2\\bg2_15.bmp", "Background2\\bg2_16.bmp", "Background2\\bg2_17.bmp", "Background2\\bg2_18.bmp", "Background2\\bg2_19.bmp", "Background2\\bg2_20.bmp", "Background2\\bg2_21.bmp", "Background2\\bg2_22.bmp", "Background2\\bg2_23.bmp", "Background2\\bg2_24.bmp", "Background2\\bg2_25.bmp", "Background2\\bg2_26.bmp" };
int slice2 = 26;
int width2 = 1300 / slice2;


void renddering2()
{
	iClear();
	int i;
	for (i = 0; i < 26; i++)
	{
		iShowBMP2(position2[i], 0, bg2Path[i], 0);
	}
}
void moveBackground2()
{
	int i;
	for (i = 0; i<26; i++)
	{
		position2[i] -= width2;
		if (position2[i] < 0)
		{
			position2[i] = 1300 - width2;
		}

	}
}
void intializeImagePosition2()
{
	int i, j;
	for (i = 0, j = 0; i < slice; i++)
	{
		position2[i] = j;
		j += width2;

	}

}
//Background renndering lvl1 (((((END))))))


//for background randering === lvl3
int position3[100];
char bg3Path[26][52] = { "Background3\\bg3.bmp", "Background3\\bg3_1.bmp", "Background3\\bg3_2.bmp", "Background3\\bg3_3.bmp", "Background3\\bg3_4.bmp", "Background3\\bg3_5.bmp", "Background3\\bg3_6.bmp", "Background3\\bg3_7.bmp", "Background3\\bg3_8.bmp", "Background3\\bg3_9.bmp", "Background3\\bg3_10.bmp", "Background3\\bg3_11.bmp", "Background3\\bg3_12.bmp",
"Background3\\bg3_13.bmp", "Background3\\bg3_14.bmp", "Background3\\bg3_15.bmp", "Background3\\bg3_16.bmp", "Background3\\bg3_17.bmp", "Background3\\bg3_18.bmp", "Background3\\bg3_19.bmp", "Background3\\bg3_20.bmp", "Background3\\bg3_21.bmp", "Background3\\bg3_22.bmp", "Background3\\bg3_23.bmp", "Background3\\bg3_24.bmp", "Background3\\bg3_25.bmp" };
int slice3 = 26;
int width3 = 1300 / slice3;



void renddering3()
{
	iClear();
	int i;
	for (i = 0; i < 26; i++)
	{
		iShowBMP2(position3[i], 0, bg3Path[i], 0);
	}
}
void moveBackground3()
{
	int i;
	for (i = 0; i<26; i++)
	{
		position3[i] -= width3;
		if (position3[i] < 0)
		{
			position3[i] = 1300 - width3;
		}

	}
}
void intializeImagePosition3()
{
	int i, j;
	for (i = 0, j = 0; i < slice; i++)
	{
		position3[i] = j;
		j += width3;

	}

}
//Background renndering lvl3 (((((END))))))

//Bird Character Movement
int bcIndex = 0;

char bird[10][100] = { "image\\1.bmp", "image\\2.bmp", "image\\3.bmp", "image\\4.bmp", "image\\5.bmp", "image\\6.bmp", "image\\7.bmp", "image\\8.bmp" };

int birdCordinateX = 130;
int birdCordinateY = 370;
int birdIndex = 0;


/////////obstacles/////////
float x = 1300, y = 470;//o1
float a = 1200, b = 0;//o2
float c = 1190, d = 220;//o3
float e = 1350, f = 0; //o4
float g = 1500, h = 0; //o5
//float i = 950, j = 751;


//obstacle lvl 2
//Moving obstacles
int oIndex = 0;
char o[10][100] = { "image2\\1.bmp", "image2\\2.bmp", "image2\\3.bmp", "image2\\4.bmp", "image2\\5.bmp", "image2\\6.bmp", "image2\\7.bmp", "image2\\8.bmp", "image2\\9.bmp", "image2\\10.bmp" };
int ox = 1300;
int oy = 150;

int o2Index = 0;
char o2[10][100] = { "image2\\21.bmp", "image2\\22.bmp", "image2\\23.bmp", "image2\\24.bmp", "image2\\25.bmp", "image2\\26.bmp", "image2\\27.bmp", "image2\\28.bmp", "image2\\29.bmp", "image2\\30.bmp" };
int ox2 = 1100;
int oy2 = 400;
//non moving obstacles
float x2 = 0, y2 = 0;//o2
float a2 = 0, b2 = 620;//o1

//obstacle lvl 3
//Moving obstacles
int o3Index = 0;
char o3[10][100] = { "image3\\1.bmp", "image3\\2.bmp", "image3\\3.bmp", "image3\\4.bmp", "image3\\5.bmp", "image3\\6.bmp", "image3\\7.bmp", "image3\\8.bmp", "image3\\9.bmp", "image3\\10.bmp" };
int ox3 = 1300;
int oy3 = 150;

int o23Index = 0;
char o23[10][100] = { "image3\\21.bmp", "image3\\22.bmp", "image3\\23.bmp", "image3\\24.bmp", "image3\\25.bmp", "image3\\26.bmp", "image3\\27.bmp", "image3\\28.bmp", "image3\\29.bmp", "image3\\30.bmp" };
int ox23 = 1100;
int oy23 = 450;


//non moving obstacles
float x3 = 0, y3 = 0;//o2
float a3 = 0, b3 = 620;//o1


//collision
void collision()
{
	if ((birdCordinateX + 99 >= x && birdCordinateX <= x + 99) && (birdCordinateY + 92 >= y && birdCordinateY <= y + 92))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelonepage = 0;
		playGamePage = 2;
	}

	if ((birdCordinateX + 110 >= a && birdCordinateX <= a + 110) && (birdCordinateY + 120 >= b && birdCordinateY <= b + 120))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelonepage = 0;
		playGamePage = 2;
	}

	if ((birdCordinateX + 99 >= c && birdCordinateX <= c + 99) && (birdCordinateY + 40 >= d && birdCordinateY <= d + 40))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelonepage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 110 >= e && birdCordinateX <= e + 110) && (birdCordinateY + 120 >= f && birdCordinateY <= f + 120))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelonepage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 110 >= g && birdCordinateX <= g + 110) && (birdCordinateY + 120 >= h && birdCordinateY <= h + 120))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelonepage = 0;
		playGamePage = 2;
	}


	/*if ((birdCordinateX + 177 >= i && birdCordinateX <= i + 177) && (birdCordinateY + 207 >= j && birdCordinateY <= j + 207))
	{
	exit(0);
	}*/
}
void collision2()
{
	if ((birdCordinateX + 99 >= ox && birdCordinateX <= ox + 99) && (birdCordinateY + 90 >= oy && birdCordinateY <= oy + 90))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		leveltwopage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 99 >= ox2 && birdCordinateX <= ox2 + 99) && (birdCordinateY + 90 >= oy2 && birdCordinateY <= oy2 + 90))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		leveltwopage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 1300 >= x2 && birdCordinateX <= x2 + 1300) && (birdCordinateY + 124 >= y2 && birdCordinateY <= y2 + 124))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		leveltwopage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 1300 >= a2 && birdCordinateX <= a2 + 1300) && (birdCordinateY + 85 >= b2 && birdCordinateY <= b2 + 85))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		leveltwopage = 0;
		playGamePage = 2;
	}

}

void collision3()
{
	if ((birdCordinateX + 99 >= ox3 && birdCordinateX <= ox3 + 99) && (birdCordinateY + 90 >= oy3 && birdCordinateY <= oy3 + 90))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelthreepage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 99 >= ox23 && birdCordinateX <= ox23 + 99) && (birdCordinateY + 90 >= oy23 && birdCordinateY <= oy23 + 90))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelthreepage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 1300 >= x3 && birdCordinateX <= x3 + 1300) && (birdCordinateY + 124 >= y3 && birdCordinateY <= y3 + 124))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelthreepage = 0;
		playGamePage = 2;
	}
	if ((birdCordinateX + 1300 >= a3 && birdCordinateX <= a3 + 1300) && (birdCordinateY + 85 >= b3 && birdCordinateY <= b3 + 85))
	{
		mciSendString("play music//blast.wav", NULL, 0, NULL);
		levelthreepage = 0;
		playGamePage = 2;
	}

}
void exit1()
{
	exit(0);
}


//coins

int c1y = 100;
int c2y = 300;
int c3y = 500;
int c4y = 600;
int c5y = 680;
int c1x = 300;
int c2x = 500;
int c3x = 700;
int c4x = 900;
int c5x = 1100;



int c1yspeed = 0;
int c2yspeed = 0;
int c3yspeed = 0;
int c4yspeed = 0;
int c5yspeed = 0;
int coinscore = 0;

int second = 0;
int score = 0;

void coinCollision()
{

	if ((birdCordinateX + 100 >= c1x && birdCordinateX <= c1x + 100) && (birdCordinateY + 100 >= c1y && birdCordinateY <= c1y + 100))
	{
		mciSendString("play music//coin.wav", NULL, 0, NULL);
		coinscore = coinscore + 5;
		c1yspeed = c1yspeed + 1000;
		c1y = c1y + c1yspeed;

	}
	else if ((birdCordinateX + 100 >= c2x && birdCordinateX <= c2x + 100) && (birdCordinateY + 100 >= c2y && birdCordinateY <= c2y + 100))
	{
		mciSendString("play music//coin.wav", NULL, 0, NULL);
		coinscore = coinscore + 10;

		c2yspeed = c2yspeed + 1000;
		c2y = c2y + c2yspeed;

	}


	else if ((birdCordinateX + 100 >= c3x && birdCordinateX <= c3x + 100) && (birdCordinateY + 100 >= c3y && birdCordinateY <= c3y + 100))
	{
		mciSendString("play music//coin.wav", NULL, 0, NULL);
		coinscore = coinscore + 30 ;

		c3yspeed = c3yspeed + 1000;
		c3y = c3y + c3yspeed;

	}
	else if ((birdCordinateX + 100 >= c4x && birdCordinateX <= c4x + 100) && (birdCordinateY + 100 >= c4y && birdCordinateY <= c4y + 100))
	{
		mciSendString("play music//coin.wav", NULL, 0, NULL);
		coinscore = coinscore + 40;

		c4yspeed = c4yspeed + 1000;
		c4y = c4y + c4yspeed;

	}
	else if ((birdCordinateX + 100 >= c5x && birdCordinateX <= c5x + 100) && (birdCordinateY + 100 >= c5y && birdCordinateY <= c5y + 100))
	{
		mciSendString("play music//coin.wav", NULL, 0, NULL);
		coinscore = coinscore + 40;

		c5yspeed = c5yspeed + 1000;
		c5y = c5y + c5yspeed;

	}

	score = second + coinscore;

}

char sec[10000];
int minute = 0;
int hour = 0;
char hr[10000];
int totalsecond = 0;
char point[10000];

void changeTimer()
{

	if (levelonepage == 1 || leveltwopage == 1 || levelthreepage == 1)
	{
		totalsecond = (second++) + (60 * minute) + (60 * 60 * hour);
		//score = score + second;
	}
}


void drawTimer()
{

	if (levelonepage == 1 || leveltwopage == 1 || levelthreepage == 1)
	{
		iSetColor(255, 204, 203);
		iShowBMP2(1100, 560, "image\\OIP.bmp", 0);
		iSetColor(0, 0, 0);
		sprintf_s(sec, "%d", second);
		iText(1220, 620, sec, GLUT_BITMAP_HELVETICA_18);
		iText(1140, 620, "TIMER:", GLUT_BITMAP_HELVETICA_18);

		iSetColor(0, 0, 0);
		sprintf_s(point, "%d", score);
		iText(1220, 600, point, GLUT_BITMAP_HELVETICA_18);
		iText(1140, 600, "SCORE:", GLUT_BITMAP_HELVETICA_18);




	}
}

void newHighScore();
void readScore();
int len = 0;
char str1[100];
bool newscore = true;

struct hscore{

	char name[30];
	int score = 0;

}high_score[5];

void readScore()
{
	FILE *fp;

	fp = fopen("scoree.txt", "r");
	char showName[5][30], showscore[5][5];
	for (int i = 0; i < 5; i++)
	{

		fscanf(fp, "%s %d\n ", high_score[i].name, &high_score[i].score);
	}
	for (int i = 0; i < 5; i++)
	{

		sprintf(showName[i], "%s", high_score[i].name);
		sprintf(showscore[i], "%d", high_score[i].score);
		iSetColor(0, 0, 255);
		iText(500, 510, "NAME:", GLUT_BITMAP_HELVETICA_18);
		iText(600, 510, "SCORE:", GLUT_BITMAP_HELVETICA_18);
		iText(500, 481-30*i, showName[i], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(600, 480-30*i, showscore[i], GLUT_BITMAP_TIMES_ROMAN_24);
	}

	fclose(fp);



}

void newHighScore()
{
	FILE *fp;

	fp = fopen("scoree.txt", "w");

	for (int i = 0; i < 5; i++)
	{

		fscanf(fp, "%s %d\n ", high_score[i].name, &high_score[i].score);
	}
	//int t;
	//char n[30];

	if (newscore)
	{
		for (int i = 0; i < 5; i++)
		{
			if (high_score[i].score < score)
			{
				high_score[i].score = score;
				strcpy(high_score[i].name, str1);

				for (int j = 0; j < 5; j++)
				{
					for (int k = 5; k>j; k--)
					{
						if (high_score[k].score > high_score[k - 1].score)
						{
							//sorting 
							int t = high_score[k - 1].score;
							high_score[k].score = t;

							char n[50];
							strcpy(n, high_score[k - 1].name);
							strcpy(high_score[k - 1].name, high_score[k].name);
							strcpy(high_score[k].name, n);




						}
					}
				}
				FILE *fp = fopen("scoree.txt", "r");

				

				for (int i = 0; i < 5; i++)
				{

					fprintf(fp, "%s %d\n ", high_score[i].name, high_score[i].score);
				}

				fclose(fp);

				newscore = false;
				break;

			}
		}
	}
}


void showChar()
{
	
	iSetColor(255, 0, 0);
	
	iText(1072, 695, "Enter your name:", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255, 255, 255);
	iRectangle(1072, 624, 200, 50);
	iFilledRectangle(1072, 624, 200,50);

	iSetColor(0, 0, 255);
	iText(1080, 640, str1, GLUT_BITMAP_TIMES_ROMAN_24);
}

void takeinput(unsigned key)
{
	if (key == '\r')
	{
		playGamePage = 1;
		newHighScore();

	}
	else if (key == '\b')
	{
		if (len <= 0)
			len = 0;

		else
			len--;

		str1[len] = '\0';

	}
	else{

		str1[len] = key;
		len++;

		if (len > 15)
			len = 15;

		str1[len] = '\0';

	}
}





//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

void iDraw()
{
	iClear();
	if (homepage == 1)
	{
		drawHomepage();
	}
	else if (startpage == 1)
	{
		drawStartPage();

	}
	else if (storypage == 1)
	{
		drawStoryPage();
	}
	else if (instructionpage == 1)
	{
		drawinstructionPage();
	}
	else if (playGamePage == 1)
	{
		drawPlayGamePage();
	}
	else if (scorePage == 1)
	{
		drawScorePage();
	}
	else if (levelonepage == 1)
	{
		drawlevelonePage();
	}
	else if (leveltwopage == 1)
	{
		drawleveltwoPage();
	}
	else if (levelthreepage == 1)
	{
		drawlevelthreePage();
	}
	else if (playGamePage == 2)
	{
		GameOver();
		
	}

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		printf("x=%d y=%d  ", mx, my);
		if (homepage == 1 && (mx >= 203 && mx <= 409) && (my >= 402 && my <= 457))
		{
			clickStartButton();
		}
		else if (homepage == 1 && (mx >= 206 && mx <= 407) && (my >= 304 && my <= 358))
		{
			clickinstructionButton();
		}
		else if (startpage == 1 && (mx >= 541 && mx <= 752) && (my >= 271 && my <= 329))
		{
			clickBackButtonStartPage();
		}
		else if (instructionpage == 1 && (mx >= 1071 && mx <= 1275) && (my >= 622 && my <= 686))
		{
			clickBackButtoninstructionPage();
		}
		else if (homepage == 1 && (mx >= 207 && mx <= 409) && (my >= 203 && my <= 254))
		{
			clickExitButton();
		}
		else if (startpage == 1 && (mx >= 543 && mx <= 751) && (my >= 468 && my <= 528))
		{
			clickStoryButton();
		}
		else if (storypage == 1 && (mx >= 1071 && mx <= 1275) && (my >= 622 && my <= 686))
		{
			clickBackButtonStoryPage();
		}
		else if (startpage == 1 && (mx >= 543 && mx <= 750) && (my >= 378 && my <= 430))
		{
			clickPlayGameButton();
		}
		else if (playGamePage == 1 && (mx >= 1071 && mx <= 1275) && (my >= 622 && my <= 686))
		{
			clickBackButtonPlayGamePage();
		}
		else if (playGamePage == 1 && (mx >= 415 && mx <= 575) && (my >= 414 && my <= 510))
		{
			clickleveloneButton();
		}
		else if (playGamePage == 1 && (mx >= 583 && mx <= 742) && (my >= 414 && my <= 512))
		{
			clickleveltwoButton();
		}
		else if (playGamePage == 1 && (mx >= 750 && mx <= 905) && (my >= 408 && my <= 518))
		{
			clicklevelthreeButton();
		}
		else if (playGamePage == 1 && (mx >= 540 && mx <= 745) && (my >= 30 && my <= 140))
		{
			clickScoreButton();
		}
		else if (scorePage == 1 && (mx >= 1071 && mx <= 1275) && (my >= 622 && my <= 686))
		{
			clickBackButtonScorePage();
		}


	}
	/*if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}*/
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (playGamePage == 2)
	{
		takeinput(key);
	}
	if (key == '\r')
	{
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{


	if (key == GLUT_KEY_RIGHT)
	{
		birdCordinateX += 18;
		if (birdCordinateX > 1300)
		{
			birdCordinateX = 1300;
		}
	}
	else if (key == GLUT_KEY_LEFT)
	{
		birdCordinateX -= 18;
		if (birdCordinateX < 0)
		{
			birdCordinateX = 0;
		}
	}
	else if (key == GLUT_KEY_UP)
	{
		birdCordinateY += 15;
		if (birdCordinateY>750)
		{
			birdCordinateY = 750;
		}
	}
	else if (key == GLUT_KEY_DOWN)
	{
		birdCordinateY -= 15;
		if (birdCordinateY<0)
		{
			birdCordinateY = 0;
		}
	}
	if (key == GLUT_KEY_F1)
	{
		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0);
		}
		else
		{
			musicOn = true;
			PlaySound("gameMusic.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}

}

void drawHomepage()
{
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image\\homepage.bmp", 0);

	iShowBMP2(200, 400, "image\\Button.bmp", 0);
	iShowBMP2(200, 300, "image\\Button.bmp", 0);
	iShowBMP2(200, 200, "image\\Button.bmp", 0);

	iSetColor(255, 255, 255);
	iText(269, 420, "START", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(230, 320, "INSTRUCTION", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(270, 220, "EXIT", GLUT_BITMAP_TIMES_ROMAN_24);


}
void clickStartButton()
{
	homepage = 0;
	startpage = 1;
	mciSendString("play music//click1.wav", NULL, 0, NULL);

}

void drawStartPage()
{
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image\\Startpage2.bmp", 0);
	iShowBMP2(540, 470, "image\\Button.bmp", 0);
	iShowBMP2(540, 370, "image\\Button.bmp", 0);
	iShowBMP2(540, 270, "image\\Button.bmp", 0);

	iSetColor(255, 255, 255);
	iText(605, 490, "STORY", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(580, 390, "PLAY GAME", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(605, 290, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
}

void clickBackButtonStartPage()
{
	homepage = 1;
	startpage = 0;
	mciSendString("play music//click1.wav", NULL, 0, NULL);
}
void clickinstructionButton()
{
	homepage = 0;
	instructionpage = 1;
	mciSendString("play music//click1.wav", NULL, 0, NULL);


}

void drawinstructionPage()
{
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image\\Instructions.bmp", 0);

	iShowBMP2(1065, 622, "image\\Button.bmp", 0);

	iSetColor(255, 255, 255);
	iText(1130, 642, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);


}
void clickBackButtoninstructionPage()
{
	homepage = 1;
	instructionpage = 0;
	mciSendString("play music//click1.wav", NULL, 0, NULL);
}

void clickExitButton()
{
	exit(0);
}

void clickStoryButton()
{
	storypage = 1;
	startpage = 0;
	homepage = 0;
	mciSendString("play music//click1.wav", NULL, 0, NULL);

}
void drawStoryPage()
{
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image/Story.bmp", 0);
	iShowBMP2(1065, 622, "image\\Button.bmp", 0);

	iSetColor(255, 255, 255);
	iText(1130, 642, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
	PlaySound(0, 0, 0);
	mciSendString("play music//StoryTelling.wav", NULL, 0, NULL);


}

void clickBackButtonStoryPage()
{

	startpage = 1;
	storypage = 0;
	PlaySound("gameMusic.wav", NULL, SND_LOOP | SND_ASYNC);
	mciSendString("close music//StoryTelling.wav", NULL, 0, NULL);
	mciSendString("play music//click1.wav", NULL, 0, NULL);
}
void clickPlayGameButton()
{
	startpage = 0;
	homepage = 0;
	playGamePage = 1;
	mciSendString("play music//click1.wav", NULL, 0, NULL);


}
void drawPlayGamePage()
{
	mciSendString("stop music//GameOver.wav", NULL, 0, NULL);
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image\\lvl.bmp", 0);

	iShowBMP2(1065, 622, "image\\Button.bmp", 0);

	iSetColor(255, 255, 255);
	iText(1130, 642, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);

	iShowBMP2(405, 350, "image\\lvl1Button.bmp", 0);
	iShowBMP2(571, 350, "image\\lvl2Button.bmp", 0);
	iShowBMP2(737, 350, "image\\lvl3Button.bmp", 0);
	iShowBMP2(405, 190, "image\\lvl4Button.bmp", 0);
	iShowBMP2(571, 190, "image\\lvl5Button.bmp", 0);
	iShowBMP2(737, 190, "image\\lvl6Button.bmp", 0);

	iShowBMP2(500, 100, "image\\scoreButton.bmp", 0);

	iSetColor(255, 255, 255);
	iText(600, 120, "SCORE", GLUT_BITMAP_TIMES_ROMAN_24);


}

void clickBackButtonPlayGamePage()
{
	startpage = 1;
	playGamePage = 0;
	mciSendString("play music//click1.wav", NULL, 0, NULL);
}
void clickScoreButton()
{
	homepage = 0;
	startpage = 0;	
	playGamePage = 0;
	scorePage = 1;
	mciSendString("play music//click2.wav", NULL, 0, NULL);
}
void drawScorePage()
{
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image\\ScorePage.bmp", 0);
	iShowBMP2(1065, 622, "image\\Button.bmp", 0);

	iSetColor(255, 255, 255);
	iText(1130, 642, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
	PlaySound(0, 0, 0);
	mciSendString("play music//click2.wav", NULL, 0, NULL);

	readScore();
	playGamePage = 2;
}
void clickBackButtonScorePage()
{

	playGamePage = 1;
	scorePage = 0;
	//PlaySound("gameMusic.wav", NULL, SND_LOOP | SND_ASYNC);
	//mciSendString("close music//StoryTelling.wav", NULL, 0, NULL);
	mciSendString("play music//click1.wav", NULL, 0, NULL);
}
void clickleveloneButton()
{
	startpage = 0;
	homepage = 0;
	playGamePage = 0;
	levelonepage = 1;
	mciSendString("play music//click2.wav", NULL, 0, NULL);



}
void drawlevelonePage()
{
	
	PlaySound(0, 0, 0);
	mciSendString("play music//Dungeon1.wav", NULL, 0, NULL);


	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image\\Backgroung1.bmp", 0);

	//background1
	renddering();

	//Bird
	iSetColor(0, 0, 0);

	iShowBMP2(birdCordinateX, birdCordinateY, bird[birdIndex], 0);

	birdIndex++;

	if (birdIndex >= 8)
	{
		birdIndex = 0;
	}
		


//obstacles
	iShowBMP2(x, y, "image\\obstacle1.bmp", 0);
	iShowBMP2(a, b, "image\\obstacle3.bmp", 0);
	iShowBMP2(c, d, "image\\obstacle4.bmp", 0);
	iShowBMP2(e, f, "image\\obstacle6.bmp", 0);
	iShowBMP2(g, h, "image\\obstacle2.bmp", 0);
	//iShowBMP2(i, j, "image\\obstacle7.bmp", 0);

	//o1
	x = x - 12;
	if (x <= 0)
	{
		x = 1300;
		y = 470 + rand() % 350;
	}
	collision();

	//o2
	a = a - 12;
	if (a <= 0)
	{
		a = 1200 + rand() % 350;
		b = 0;
	}
	collision();
	//o3
	c = c - 12;
	if (c <= 0)
	{
		c = 1190;
		d = 220 + rand() % 200;
	}
	collision();
	//o4
	e = e - 11.89;
	if (e <= 0)
	{
		e = 1350 + rand() % 220;
		f = 0;
	}
	collision();
	//o5
	g = g - 11;
	if (g <= 0)
	{
		g = 1500 + rand() % 200;
		h = 0;
	}
	collision();

	/*
	j = j - 4.35;
	if (j <= 0)
	{
	j = 751;
	i = 700 + rand() % 385;
	}
	collision();*/


	// COINS COLLISION
	iShowBMP2(c1x, c1y, "image\\coin1.bmp", 0);
	iShowBMP2(c2x, c2y, "image\\coin2.bmp", 0);
	iShowBMP2(c3x, c3y, "image\\coin3.bmp", 0);
	iShowBMP2(c4x, c4y, "image\\coin4.bmp", 0);


	c1x = c1x - 12;
	if (c1x <= 0)
	{
		c1x = 1300;
		c1y = 430 + rand() % 350;


	}coinCollision();



	c2x = c2x - 12;
	if (c2x <= 0)
	{
		c2x = 1300;
		c2y = 350 + rand() % 350;


	}coinCollision();



	c3x = c3x - 12;
	if (c3x <= 0)
	{
		c3x = 1300;
		c3y = 440 + rand() % 200;


	}coinCollision();


	c4x = c4x - 12;
	if (c4x <= 0)
	{
		c4x = 1300;
		c4y = 330 + rand() % 200;


	}coinCollision();
	drawTimer();


}
//lvl 2

void clickleveltwoButton()
{
	startpage = 0;
	homepage = 0;
	playGamePage = 0;
	leveltwopage = 1;
	mciSendString("play music//click2.wav", NULL, 0, NULL);



}
void drawleveltwoPage()
{

	PlaySound(0, 0, 0);
	mciSendString("play music//Dungeon2.wav", NULL, 0, NULL);


	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image2\\Background2.bmp", 0);

	//background2
	renddering2();

	//Bird
	iSetColor(0, 0, 0);

	iShowBMP2(birdCordinateX, birdCordinateY, bird[birdIndex], 0);

	birdIndex++;

	if (birdIndex >= 8)
	{
		birdIndex = 0;
	}



	//obstacle moving one
	iSetColor(0, 0, 0);
	iShowBMP2(ox, oy, o[oIndex], 0);
	oIndex++;
	if (oIndex >= 10)
	{
		oIndex = 0;
	}


	
	ox = ox - 10;
	if (ox <= 0)
	{
		ox = 1300;
		oy = 150 + rand() % 350;
	}
	collision2();

	//obstacle moving one 2
	iSetColor(0, 0, 0);
	iShowBMP2(ox2, oy2, o2[o2Index], 0);
	o2Index++;
	if (o2Index >= 10)
	{
		o2Index = 0;
	}



	ox2 = ox2 - 10;
	if (ox2 <= 0)
	{
		ox2 = 1300;
		oy2 = 350 + rand() % 350;
	}
	collision2();

	//non moving obstacles
	iShowBMP2(x2, y2, "image2\\obstacle2.bmp", 0);
	iShowBMP2(a2, b2, "image2\\obstacle1.bmp", 0);

	//o1
	x2 = x2 - 10;
	if (x2 <= 0)
	{
		x2 = 0;
		y2 = 0;
	}
	collision2();

	//o2
	a2 = a2 - 10;
	if (a2 <= 0)
	{
		a2 = 0;
		b2 = 620;
	}
	collision2();
	
//end


	// COINS COLLISION
	iShowBMP2(c1x, c1y, "image2\\coin1.bmp", 0);
	iShowBMP2(c2x, c2y, "image2\\coin2.bmp", 0);
	iShowBMP2(c3x, c3y, "image2\\coin3.bmp", 0);
	iShowBMP2(c4x, c4y, "image2\\coin4.bmp", 0);
	iShowBMP2(c5x, c5y, "image2\\coin5.bmp", 0);
	


	c1x = c1x - 10;
	if (c1x <= 0)
	{
		c1x = 1300;
		c1y = 430 + rand() % 350;


	}coinCollision();



	c2x = c2x - 10;
	if (c2x <= 0)
	{
		c2x = 1300;
		c2y = 350 + rand() % 350;


	}coinCollision();



	c3x = c3x - 10;
	if (c3x <= 0)
	{
		c3x = 1300;
		c3y = 345 + rand() % 200;


	}coinCollision();


	c4x = c4x - 10;
	if (c4x <= 0)
	{
		c4x = 1300;
		c4y = 230 + rand() % 200;


	}coinCollision();
	drawTimer();

	c5x = c5x - 10;
	if (c5x <= 0)
	{
		c5x = 1300;
		c5y = 115 + rand() % 200;


	}coinCollision();
	drawTimer();



}

//lvl 3

void clicklevelthreeButton()
{
	startpage = 0;
	homepage = 0;
	playGamePage = 0;
	levelthreepage = 1;
	mciSendString("play music//click2.wav", NULL, 0, NULL);



}
void drawlevelthreePage()
{

	PlaySound(0, 0, 0);
	mciSendString("play music//Dungeon3.wav", NULL, 0, NULL);


	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);
	iShowBMP2(0, 0, "image3\\Background3.bmp", 0);

	//background3
	renddering3();

	//Bird
	iSetColor(0, 0, 0);

	iShowBMP2(birdCordinateX, birdCordinateY, bird[birdIndex], 0);

	birdIndex++;

	if (birdIndex >= 8)
	{
		birdIndex = 0;
	}



	//obstacle moving one
	iSetColor(0, 0, 0);
	iShowBMP2(ox3, oy3, o3[o3Index], 0);
	o3Index++;
	if (o3Index >= 10)
	{
		o3Index = 0;
	}



	ox3 = ox3 - 10;
	if (ox3 <= 0)
	{
		ox3 = 1300;
		oy3 = 150 + rand() % 350;
	}
	collision3();


	//obstacle moving one 2
	iSetColor(0, 0, 0);
	iShowBMP2(ox23, oy23, o23[o23Index], 0);
	o23Index++;
	if (o23Index >= 10)
	{
		o23Index = 0;
	}



	ox23 = ox23 - 10;
	if (ox23 <= 0)
	{
		ox23 = 1300;
		oy23 = 350 + rand() % 350;
	}
	collision3();



	//non moving obstacles
	iShowBMP2(x3, y3, "image3\\obstacle2.bmp", 0);
	iShowBMP2(a2, b2, "image3\\obstacle1.bmp", 0);

	//o1
	x3 = x3 - 10;
	if (x3 <= 0)
	{
		x3 = 0;
		y3 = 0;
	}
	collision3();

	//o2
	a3 = a3 - 10;
	if (a3 <= 0)
	{
		a3 = 0;
		b3 = 620;
	}
	collision3();

	//end


	// COINS COLLISION
	iShowBMP2(c1x, c1y, "image3\\c1.bmp", 0);
	iShowBMP2(c2x, c2y, "image3\\c2.bmp", 0);
	iShowBMP2(c3x, c3y, "image3\\c3.bmp", 0);
	iShowBMP2(c4x, c4y, "image3\\c4.bmp", 0);
	iShowBMP2(c5x, c5y, "image3\\c5.bmp", 0);



	c1x = c1x - 10;
	if (c1x <= 0)
	{
		c1x = 1300;
		c1y = 430 + rand() % 350;


	}coinCollision();



	c2x = c2x - 10;
	if (c2x <= 0)
	{
		c2x = 1300;
		c2y = 350 + rand() % 350;


	}coinCollision();



	c3x = c3x - 10;
	if (c3x <= 0)
	{
		c3x = 1300;
		c3y = 345 + rand() % 200;


	}coinCollision();


	c4x = c4x - 10;
	if (c4x <= 0)
	{
		c4x = 1300;
		c4y = 230 + rand() % 200;


	}coinCollision();
	drawTimer();

	c5x = c5x - 10;
	if (c5x <= 0)
	{
		c5x = 1300;
		c5y = 115 + rand() % 200;


	}coinCollision();
	drawTimer();



}


void GameOver()
{
	PlaySound(0, 0, 0);
	mciSendString("stop music//Dungeon1.wav", NULL, 0, NULL);
	mciSendString("stop music//Dungeon2.wav", NULL, 0, NULL);
	mciSendString("stop music//Dungeon3.wav", NULL, 0, NULL);
	mciSendString("play music//GameOver.wav", NULL, 0, NULL);
	iSetColor(0, 0, 0);
	iFilledRectangle(0, 0, 1300, 750);


	iShowBMP2(0, 0, "image\\GameOver.bmp", 0);
	iShowBMP2(1065, 622, "image\\Button.bmp", 0);

	//iSetColor(255, 255, 255);
	//iText(1130, 642, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
	playGamePage = 2;

	showChar();

}


int main()
{
	
	///srand((unsigned)time(NULL));
	if (musicOn)
	{
		PlaySound("gameMusic.wav", NULL, SND_LOOP | SND_ASYNC);
	}
//lvl 1
	intializeImagePosition();
	iSetTimer(150, moveBackground);
	iSetTimer(1000, changeTimer);

//lvl2
	intializeImagePosition2();
	iSetTimer(250, moveBackground2);
	iSetTimer(1000, changeTimer);

//lvl3
	intializeImagePosition3();
	iSetTimer(250, moveBackground3);
	iSetTimer(1000, changeTimer);

///screen
	iInitialize(1300, 750, "Trooper Bird");
	///updated see the documentations
	iStart();
	return 0;
}
