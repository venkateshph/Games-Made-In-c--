#include <iostream>
#include<dos.h>
#include<conio.h>
#include<Windows.h>
#include<string>
#include<stdlib.h> 
#include<random>
using namespace std;

int main()
{

	
	string playername;
	int age;
	int takeinformationinmainmeu;
	
	int noofzombies;
	
	string back;

	
	int noofhuman;	



	

	cout << "Loading";
	Sleep(0700);
	cout << ".";
	Sleep(0700);
	cout << ".";
	Sleep(0700);
	cout << ".";
	Sleep(0700);
	cout << ".";
	Sleep(0700);
	cout << ".\n";
	system("CLS");
	cout << "----------------------------------------------------------------------------------\n";
	cout << "***WELCOME TO HUMAN VS ZOMBIES***\n";
	cout << "Enter Your Name: ";
	cin >> playername;
	cout << "Enter Your Age: ";
	cin >> age;
	cout << "----------------------------------------------------------------------------------\n";
	if (age >= 12) {
		cout << "***WELCOME TO HUMAN VS ZOMBIES***\n";
		cout << "Main Menu\n";
		cout << "1.Start The Game\n";
		cout << "2.Help\n";
		cout << "3.About\n";
		cout << "4.Exit\n";
		cout << "Enter Any Of The Option You Like To Do:";
		cin >> takeinformationinmainmeu;
		if (takeinformationinmainmeu == 1)
		{
			cout << "Loading";
			Sleep(0700);
			cout << ".";
			Sleep(0700);
			cout << ".";
			Sleep(0700);
			cout << ".";
			Sleep(0700);
			cout << ".";
			Sleep(0700);
			system("CLS");
			cout << "Enter No of Human You Need:";
			cin >> noofhuman;
			if (noofhuman > 500)
			{

				cout << "Sorry You Cant Enter more than 500\n ";
				cout << "Game Exit!\n";
				system("PAUSE");
			}
			else if (noofhuman < 500)
			{
				cout << "Enter No of Zombies You Need:";
				cin >> noofzombies;
				if (noofzombies > 500) {
					cout << "Sorry You Cant Enter more than 500\n ";
					cout << "Game Exit!\n";
					system("PAUSE");
				}
				else if (noofzombies < 500) {
					
					cout << "THE BATTLE START IN\n";
					for (int i = 5; i > 0; i--) {
						Sleep(1000);
						cout << i << endl;
					}
					system("CLS");
					cout << "WELCOME TO BATTLE COURT";
					cout << "Your Current Human is:/n" << noofhuman << endl;
					cout << "Your Current Human is:/n" << noofzombies << endl;
					if (noofhuman > noofzombies) {
						cout << "The Winner is Human";
						cout << "The Game End Thk For Playing.This is current develpoment";
					}
					else if (noofhuman < noofzombies) {
						cout << "The Winner Is Zombie";
						cout << "The Game End Thk For Playing.This is current develpoment";
					}
					else if (noofhuman == noofzombies) {
						cout << "No Winner Both Are Same";
						cout << "The Game End Thk For Playing.This is current develpoment";
					}
					else {
						cout << "Sorry The Is End Due To Error Code 28753/12";
						cout << "The Game End Thk For Playing.This is current develpoment";
						system("PAUSE");
					}
				}
			}
		}
		else if (takeinformationinmainmeu == 2)
		{
			cout << "The Combat of human and zombies made in c++ no simulation.Further simulation will add in later update\n";
			cout << "First you need to enter no of human you need.Note Not More Than 500\n";
			cout << "Second You need to enter no of zombies you need.Note Not More Than 500\n";
			cout << "Third The Battle start.Finally You Will Get Result.Who Is The Winner\n";
			cout << "Press B to go back:\n";
			cin >> back;
			if (back == "B") {
				cout << "Enter No of Human You Need:";
				cin >> noofhuman;
				if (noofhuman > 500)
				{
					cout << "Sorry You Cant Enter more than 500\n ";
					cout << "Game Exit!\n";
					system("PAUSE");
				}
				else if (noofhuman < 500)
				{
					cout << "Enter No of Zombies You Need:";
					cin >> noofzombies;
					if (noofzombies > 500) {
						cout << "Sorry You Cant Enter more than 500\n ";
						cout << "Game Exit!\n";
						system("PAUSE");
					}
					else if (noofzombies < 500) {
						cout << "THE BATTLE START IN\n";
						for (int i = 5; i > 0; i--) {
							Sleep(1000);
							cout << i << endl;
						}
						system("CLS");
						cout << "WELCOME TO BATTLE COURT";
						cout << "Your Current Human is:" << noofhuman << endl;
						cout << "Your Current Human is:" << noofzombies << endl;
						if (noofhuman > noofzombies) {
							cout << "The Winner is Human";
							cout << "The Game End Thk For Playing.This is current develpoment";
						}
						else if (noofhuman < noofzombies) {
							cout << "The Winner Is Zombie";
							cout << "The Game End Thk For Playing.This is current develpoment";
						}
						else if (noofhuman == noofzombies) {
							cout << "No Winner Both Are Same";
							cout << "The Game End Thk For Playing.This is current develpoment";
						}
						else {
							cout << "Sorry The Is End Due To Error Code 28753/12";
							cout << "The Game End Thk For Playing.This is current develpoment";
							system("PAUSE");
						}
					}
				}
			}

		}
		else if (takeinformationinmainmeu == 3)
		{
			cout << "A GAME MADE BY VENKATESH IN C++ IN 1 DAY!\n";
			cout << "IDE USED IS VISUAL STUDIO 2019 COMMUNITY\n";
			cout << "Press B To Back";
			cin >> back;
			if (back == "B") {
				cout << "Enter No of Human You Need:";
				cin >> noofhuman;
				if (noofhuman > 500)
				{
					cout << "Sorry You Cant Enter more than 500\n ";
					cout << "Game Exit!\n";
					system("PAUSE");
				}
				else if (noofhuman < 500)
				{
					cout << "Enter No of Zombies You Need:";
					cin >> noofzombies;
					if (noofzombies > 500) {
						cout << "Sorry You Cant Enter more than 500\n ";
						cout << "Game Exit!\n";
						system("PAUSE");
					}
					else if (noofzombies < 500) {
						cout << "THE BATTLE START IN\n";
						for (int i = 5; i > 0; i--) {
							Sleep(1000);
							cout << i << endl;
						}
						system("CLS");
						cout << "WELCOME TO BATTLE COURT";
						cout << "Your Current Human is:" << noofhuman << endl;
						cout << "Your Current Human is:" << noofzombies << endl;
						if (noofhuman > noofzombies) {
							cout << "The Winner is Human";
							cout << "The Game End Thk For Playing.This is current develpoment";
						}
						else if (noofhuman < noofzombies) {
							cout << "The Winner Is Zombie";
							cout << "The Game End Thk For Playing.This is current develpoment";
						}
						else if (noofhuman == noofzombies) {
							cout << "No Winner Both Are Same";
							cout << "The Game End Thk For Playing.This is current develpoment";
						}
						else {
							cout << "Sorry The Is End Due To Error Code 28753/12";
							cout << "The Game End Thk For Playing.This is current develpoment";
							system("PAUSE");
						}
					}
				}
			}
			else {
				system("PAUSE");
			}
		}
		else if (takeinformationinmainmeu == 4)
		{
			system("EXIT");
		}
	}
	else if (age > 100) {
		cout << "ARE YOU KIDDING ME";
		system("PAUSE");
	}
	else
	{
		cout << "You cant play this game\n";
	}
	system("PAUSE");
	return 0;
}