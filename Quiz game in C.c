#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void help();
int questions1();
int questions2();
int questions3();
int questions4();
void play();
void mainmenu();
void save();
void leaderboard();
void display();


struct player
{
    char name[20];
    int score1;
    int score2;
    int score3;
    int score4;
}p;



int main()
{
    printf("Enter your name : ");
    scanf("%[^\n]s",p.name);
    mainmenu();

}


void mainmenu()
{
    int o1;
    printf("\t\t*******WELCOME TO QUIZ GAME*******\n");

    printf("\n");

    printf("1.Enter game\n2.instructions\n3.leaderboard\n4.Exit\n");
    printf("Enter choice: ");
    scanf("%d",&o1);
    printf("\n");
    printf("\t--------------------------------------------------------\n");
    switch(o1)
    {
        case 1:
            play();
            break;
        case 2:
            help();
            break;
        case 3:
            leaderboard();
            break;
        case 4:
            exit(0);
            break;
    }
}


void help()
{
    int o0;
    printf("\t\t*******GAME HELP*******\n");
    printf("To start the quiz game the player has to enter his/her name. After entering name it will display the menu containing help, leader board and various quiz topics.\n");
    printf("To play the quiz game the player has to select a topic from various quiz topics shown.\n");
    printf("After selecting a topic, the player has to answer the specific number of multiple choice questions on that particular topic.\n");
    printf("If the player’s answer is correct then he/she is awarded 1 point for that particular question. If the answer is incorrect then the player is given no points.\n");
    printf("This continues till the end of the questions in that particular topic. At the end the player receives his/her total score.\n");
    printf("Press 1 to go back to main menu\n");
    scanf("%d",&o0);
    if(o0)
    {
        mainmenu();
    }
}

int questions1()
{


    int score=0;
    int ans;
    printf("Which season(s) of IPL had the most number of hat-tricks?\n");
    printf("1) 2014\n2) 2008 and 2017\n3) 2009 and 2013\n");
	printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==2)
    {
		printf("Correct\n\n");
        score++;
    }
	else
	{
		printf("Wrong,the correct answer is option 2\n\n");
	}
    printf("Which Australian player has the best bowling figures in the IPL?\n");
    printf("1) Andrew Tye\n2) Adam Zampa\n3) James Faulkner\n");
	printf("Enter your option:");
    scanf("%d",&ans);
	if(ans==2)
    {
		printf("Correct\n\n");
        score++;
    }
	else
	{
		printf("Wrong,the correct answer is option 2\n\n");
	}
	printf("Which cricket player holds the record for the fastest fifty in IPL?\n");
    printf("1) KL Rahul\n2) Nicholas Pooran\n3) Yuvraj Singh\n");
	printf("Enter your option:");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("Correct\n\n");
		score++;
	}
	else
	{
		printf("Wrong,the correct answer is option 1\n\n");
	}
	printf("Who was the captain of the Mumbai Indians in IPL 2012?\n");
    printf("1) Rohit Sharma\n2) Sachin Tendulkar\n3) Harbhajan Singh\n");
	printf("Enter your option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("Correct\n\n");
		score++;
	}
	else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
	printf("Who was the first cricketer to be sold at the IPL 2021 auction?\n");
    printf("1) Aaron Finch\n2) Glenn Maxwell\n3) Steve Smith\n");
	printf("Enter your option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("Correct\n\n");
		score++;
	}
	else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
	p.score1=score;
    printf("Your score is %d\n",p.score1);


    return 0;
}

int questions2()
  //1st question
{

    int score=0;
    int ans;
    printf("Method used to separate leaves and water:\n");
    printf("1) filtration\n2) sedimentation\n3) straining\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
    //2nd question
    printf("carbohydrates give ______ to body:\n");
    printf("1) immune system\n2) oxygen\n3) energy\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}

    //3rd question
    printf("Uncertainty principle was given by\n");
    printf("1) Isaac Newton\n2) Galileo Galilei\n3) Werner Heisenberg\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
    //4th question
    printf("who proved light also have wave nature?:\n");
    printf("1) James clerk maxwell\n2) Ludwig Boltzmann\n3) Thomas Young\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
    //5th  question
    printf("The first law of thermodynamics was given by:\n");
    printf("1) Nicolas Leonard Sadi\n2) Rudolf Clausius and William Thomson\n3) Bharghava 1\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==2)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 2\n\n");
	}
	p.score2=score;
	printf("Your score is %d\n",p.score2);


	return 0;
}

void play()
{
    int o2;int o21;

    printf("Welcome %s\n",p.name);
    printf("Choose a topic :\n1)topic 1-IPL\n2)topic 2-SCIENCE\n3)topic 3-STRING THEORY\n4)topic 4-FOOTBALL\n");
    printf("Enter choice : ");
    scanf("%d",&o2);
    printf("\n");
    printf("\t--------------------------------------------------------\n");

    switch(o2)
    {
        case 1:
            questions1();
            printf("Enter 1 to quit to main menu\nEnter 2  to choose topics\n");
            scanf("%d",&o21);
            switch(o21)
            {
                case 1:
                    save();
                    mainmenu();
                    break;
                case 2:
                    play();
                    break;
            }
            break;
        case 2:
            questions2();
            printf("Enter 1 to quit to main menu\nEnter 2  to choose topics\n");
            scanf("%d",&o21);
            switch(o21)
            {
                case 1:
                    save();
                    mainmenu();
                    break;
                case 2:
                    play();
                    break;
            }

            break;
        case 3:
            questions3();
            printf("Enter 1 to quit to main menu\nEnter 2  to choose topics\n");
            scanf("%d",&o21);
            switch(o21)
            {
                case 1:
                    save();
                    mainmenu();
                    break;
                case 2:
                    play();
                    break;
            }
            break;
        case 4:
            questions4();
            printf("Enter 1 to quit to main menu\nEnter 2  to choose topics\n");
            scanf("%d",&o21);
            switch(o21)
            {
                case 1:
                    save();
                    mainmenu();
                    break;
                case 2:
                    play();
                    break;
            }
            break;


    }
}

int questions3()
{
    int score=0;
    int ans;
    printf("1)What is the fundamental idea on which string theory is based upon?\n");
    printf("1) holograpy\n2) dark matter\n3) cosmology\n");
	printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==1)
    {
		printf("Correct\n\n");
        score++;
    }
	else
	{
		printf("Wrong,the correct answer is option 1\n\n");
	}
    printf("2) Upto how many dimensions is string theory valid?\n");
    printf("1) 4\n2) 3\n3) 10\n");
	printf("Enter your option:");
    scanf("%d",&ans);
	if(ans==3)
    {
		printf("Correct\n\n");
        score++;
    }
	else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
	printf("3)Who is the father of quantum mechanics?\n");
    printf("1) SIR Max Planck\n2) Leonard Susskind\n3) SIR CV Raman\n");
	printf("Enter your option:");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("Correct\n\n");
		score++;
	}
	else
	{
		printf("Wrong,the correct answer is option 1\n\n");
	}
	printf("4)On what physical concept is string thoery based on?\n");
    printf("1) Quantum cryptography\n2) cosmology\n3) Quantum gravity\n");
	printf("Enter your option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("Correct\n\n");
		score++;
	}
	else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
	printf("5)Which of the interactions does not belong?\n");
    printf("1) electromagnetism\n2) weak interactions\n3) gravity\n");
	printf("Enter your option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("Correct\n\n");
		score++;
	}
	else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
    printf("Your score is %d\n",score);
	p.score3=score;
	return 0;
}

int questions4()
{
    int score=0;
    int ans;
    printf("1)Who won the FIFA world cup in the year 2018?\n");
    printf("1) Portugal\n2) Inglaterra\n3) France\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}
    //2nd question
    printf("2)Diego Maradona played for which country during his reign?\n");
    printf("1) Brazil\n2) Costa Rica\n3) Argentina\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 3\n\n");
	}

    //3rd question
    printf("3)Which club was entitled as the invincibles in the English premier league during 2005-06?\n");
    printf("1) Arsenal FC\n2) Manchester City\n3) Chelsea FC\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==1)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 1\n\n");
	}
    //4th question
    printf("4)Which Airline is the current sponsor of Manchester City FC?\n");
    printf("1) Emirates\n2) Etihad\n3) KLM\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==2)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 2\n\n");
	}
    //5th  question
    printf("5)Which was the first club Lionel Messi signed for?\n");
    printf("1) Real Madrid CF\n2) FC Barcelona\n3) Boca juniors\n");
    printf("Enter your option:");
    scanf("%d",&ans);
    if(ans==2)
    {
        printf("Correct\n\n");
        score++;
    }
    else
	{
		printf("Wrong,the correct answer is option 2\n\n");
	}
	printf("Your score is %d\n",score);
	p.score4=score;
	return 0;
}

void save()
{
    FILE *fp;
    fp = fopen("O.txt","a+");
    fprintf(fp,"Name-%s topic-1=%d topic-2=%d topic-3=%d topic-4=%d total score=%d\n",p.name,p.score1,p.score2,p.score3,p.score4,(p.score1+p.score2+p.score3+p.score4));
    fclose(fp);
}

void leaderboard()
{
    int n;
    printf("Enter 1 to know your scores\nEnter 2 to see the scorecard\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Name-%s topic-1=%d topic-2=%d topic-3=%d topic-4=%d total score=%d\n",p.name,p.score1,p.score2,p.score3,p.score4,(p.score1+p.score2+p.score3+p.score4));
            printf("Enter 1 to go to mainmenu\n");
            scanf("%d",&n);
            if(n==1)
            {
                mainmenu();
            }
            break;
        case 2:
            display();
            printf("Enter 1 to go to mainmenu\n");
            scanf("%d",&n);
            if(n==1)
            {
                mainmenu();
            }
            break;
    }
}

void display()
{
    char ch[500];
            FILE *fp;
            fp=fopen("O.txt","r");
            while((fgets(ch,500,fp))!=NULL)
            {
                printf("%s",ch);
            }
}

