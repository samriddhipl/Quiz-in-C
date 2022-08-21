#include<stdio.h>
#include<ctype.h>
void general();
void science();
void sports();
int main(){
	int num,n;
	char space1,space2;
	system("cls");
	printf("************************\tQUIZ GAME\t************************\n");
	printf("\n");
	printf("Welcome to the Quiz Game!\n");
	printf("**************************************************************\n");
	home:
	printf("1.PLAY GAME\n2.RULES OF THE GAME\n3.QUIT GAME\n\n");
	printf("Enter a number: \t");
	scanf("%d",&n);
	switch(n){
		case 1:
		goto quiz;
		case 2:
		rules();
		goto home;	
		case 3:
		exit(1);
		default:
			exit(1);
	}
	quiz:
		system("cls");
	printf("WHICH QUIZ YOU WANT TO PLAY?\n1.GENERAL QUIZ\n2.SCIENCE QUIZ\n3.SPORTS QUIZ\n");
	printf("Enter a number: \t");
	scanf("%d",&num);
    switch(num){
    	case 1:
    		general();
    		goto home;
    	case 2:
    		science();
    		goto home;
    	case 3:
    		sports();
    		goto home;
    	default:
    			printf("Invalid");
    			exit(1);
	}
	}
void rules(){
	system("cls");
	printf("*** RULES OF THE GAME: ***\n");
	printf("\n\n");
	printf("1. You will be given 10 questions with 4 options.\n");
	printf("2. You'll have to guess the correct answer and type the option no.like A, B, C or D\n");
	printf("3. REMEMBER: You cannot type the option itself or you can't type more than one options either.\n");
	printf("4. Final Scores will be displayed at the end of the game.\n");
	printf("**** HOPE YOU WILL ENJOY THE GAME :) ****");
	printf("\n\n");
}
	
void general(){
system("cls");	
	char questions[][100]={"1. What sea creature has 3 hearts?",
	                       "2. Which planet shares its name with a dog?",
						   "3. Which show is highest grossing production on Brodway ever?",
						   "4. Which European nation was said to invent hot dogs?",
						   "5. Which bone/bones are babies born without?",
						   "6. What is capital of New Zealand?",
						   "7. What is the name of fourth book of Harry Potter series?",
						   "8. Where can you find Petrona Towers?",
						   "9. Which mammal has no vocal cords?",
						   "10. What name is used to refer to a group of frogs?"};
	char options[][100]={"A. Seahorse","B. Octopus","C. Star Fish","D. Crab",
	                     "A. Mars","B. Jupiter","C. Pluto", "D. Venus",
						 "A. F.R.I.E.N.D.S","B. The Lion King","C. Frozen","D. Ice Age",
						 "A. Germany","B. France","C. Italy","D. Sweden",
						 "A. Collar Bone","B. Knee Caps","C. Wrist Bones","D. Tail Bone",
						 "A. Auckland","B. Hamilton","C. Nelson","D. Wellington",
						 "A. Harry Potter and the Goblet of Fire","B. Harry Potter and the Prisoner of Azkaban","C. Harry Potter and the Order of the Phoenix","D. Harry Potter and the Half-Blood Prince",
						 "A. Dubai","B. Bangkok","C. Kuala Lumpur","D. Shanghai",
						 "A. Giraffe","B. Kangaroo","C. Dolphin","D. Weasel",
						 "A. A Brood","B. A Clutch","C. A FLock","D. An Army"};
	char ans[10]={'B','C','B','A','B','D','A','C','A','D'};
	int noofques= 10;
	int score;
	char userans,space,enter;
	int i,j;
	score=0;
	for(i=0;i<noofques;i++){
		printf("\n");
		printf("**************************************************************\n");
		printf("%s\n",questions[i]);
		for(j=(i*4);j<(i*4)+4;j++){
		printf("%s\n",options[j]);}
		printf("Guess the correct option: ");
		scanf("%c",&userans);
		scanf("%c");
		userans = toupper(userans);
		if(userans==ans[i]){
			printf("CORRECT ANS! +1 POINT\n");
			score++;
		}
		else{
			printf("INCORRECT ANS!\n");
		}
		}
		system("cls");
		printf("**************************************************************\n");
		printf("FINAL SCORE: %d/%d\n",score,noofques);	
		printf("**************************************************************\n");
	}
	
void science(){
	system("cls");
		char questions[][100]={"1. What type of galaxy is our Milky Way?",
	                       "2. The coldest planet in our solar system is?",
						   "3. Which of the following is a non metal that remains liquid at room temperature?",
						   "4. Chlorophyll is a naturally occurring chelate compound in which central metal is",
						   "5. Which among the following is a positively charged particle emitted by a radioactive element?",
						   "6. Isotopes are separated by",
						   "7. Epoxy resins are used as",
						   "8. Most abundant tissues of our body are",
						   "9. Which mammal has no vocal cords?",
						   "10. Mumps is a disease caused by"};
	char options[][100]={"A. An elliptical galaxy","B. A spiral galaxy","C. An irregulary galaxy","D. A round galaxy",
	                     "A. Mars","B. Jupiter","C. Neptune", "D. Uranus",
						 "A. Phosphorous","B. Bromine","C. Chlorine","D. Helium",
						 "A. Copper","B. Iron","C. Calcium","D. Magnessium",
						 "A. Alpha ray","B. Beta ray","C. Cathode ray","D. Gamma ray",
						 "A. crystallisation","B. sublimation","C. distillation","D. filtration",
						 "A. detergents","B. insecticides","C. adhesives","D. moth repellents",
						 "A. muscular","B. epithelial","C. nervous","D. connective",
						 "A. Giraffe","B. Kangaroo","C. Dolphin","D. Weasel",
						 "A. virus","B. fungus","C. bacterium","D. none of these"};
	char ans[10]={'B','D','B','D','A','C','C','D','A','D'};
	int noofques= 10;
	int score;
	char userans;
	int i,j;
	score=0;
	for(i=0;i<noofques;i++){
		printf("\n");
		printf("**************************************************************\n");
		printf("%s\n",questions[i]);
		for(j=(i*4);j<(i*4)+4;j++){
		printf("%s\n",options[j]);}
		printf("Guess the correct option: ");
		scanf("%c",&userans);
		scanf("%c");
		userans = toupper(userans);
		if(userans==ans[i]){
			printf("CORRECT ANS! +1 POINT\n");
			score++;
		}
		else{
			printf("INCORRECT ANS!\n");
		}
		}
		system("cls");
		printf("**************************************************************\n");
		printf("FINAL SCORE: %d/%d\n",score,noofques);	
		printf("**************************************************************\n");
	
}

void sports(){
	system("cls");
		char questions[][200]={"1. Euro Cup is related to which sports?",
	                       "2. In context of the Indian awards and honors in sports, which among the following is given as Life Time achievement award?",
						   "3. In Kho-Kho, the players occupying the squares are known as ________?",
						   "4. Who is the current manager of Manchester United?",
						   "5. Who is World No. 1 in men’s tennis as per the recent ATP rankings?",
						   "6. Which game is known as the precursor of the Asian Games?",
						   "7. In which year, the first Cricket World Cup was held?",
						   "8. Which of the following is known as Para ice hockey?",
						   "9. Which sport is also known as Whiff-Whaff?",
						   "10. Which sport’s playing format is Stableford?"};
	char options[][100]={"A. Badminton","B. Football","C. Volleyball","D. Table Tennis",
	                     "A. Dronacharya Award","B. Rajiv Gandhi Khel Ratna Award","C. Dhyan Chand Award", "D. Arjuna Award",
						 "A. Lobby","B. Raiders","C. Chasers","D. Chukker",
						 "A. Jose Mourinho","B. Marco Silva","C. Claude Puel","D. Roy Hodgson",
						 "A. Rafael Nadal","B. Roger Federer","C. Alexander Zverev","D. Novak Djokovic",
						 "A. Games of the States of Asia","B. Far Eastern Championship Games","C. Champions of Asia Games","D. The Alliance Games",
						 "A. 1971","B. 1973","C. 1975","D. 1977",
						 "A. Bandy Hockey","B. Roller Hockey","C. Rink Hockey","D. Sledge Hockey",
						 "A. Tennis","B. Table Tennis","C. Ludo","D. Karate",
						 "A. Tennis","B. Badminton","C. Polo","D. Golf"};
	char ans[10]={'B','C','C','A','D','B','C','D','B','D'};
	int noofques= 10;
	int score;
	char userans;
	int i,j;
	score=0;
	for(i=0;i<noofques;i++){
		printf("\n");
		printf("**************************************************************\n");
		printf("%s\n",questions[i]);
		for(j=(i*4);j<(i*4)+4;j++){
		printf("%s\n",options[j]);}
		printf("Guess the correct option: ");
		scanf("%c",&userans);
		scanf("%c");
		userans = toupper(userans);
		if(userans==ans[i]){
			printf("CORRECT ANS! +1 POINT\n");
			score++;
		}
		else{
			printf("INCORRECT ANS!\n");
		}
		}
		system("cls");
		printf("**************************************************************\n");
		printf("FINAL SCORE: %d/%d\n",score,noofques);	
		printf("**************************************************************\n");
	
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
