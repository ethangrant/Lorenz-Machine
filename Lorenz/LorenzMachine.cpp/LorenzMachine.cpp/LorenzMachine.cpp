// LorenzMachine.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

class Baudot
{
public:
	// Constructor
	Baudot()
	{
		for(int i = 0; i < 256; i++)
		{
			//newArray[i] = "0";
		}
	}

	// Destructor
	~Baudot()
	{
	}

	// Getters
	// Setters

	string baudotConversion(char userInput[256])
	{
		int messageLength = 0;

		string ita2;

		messageLength = strlen(userInput);

		// For each character in user input replace with baudot code
		for(int i = 0; i < messageLength; i++)
		{
			switch(userInput[i])
			{
				case ' ':	ita2.append("00100"); break;
				case 'A':	ita2.append("00011"); break;
				case 'B':	ita2.append("11001"); break;
				case 'C':	ita2.append("01110"); break;
				case 'D':	ita2.append("01001"); break;
				case 'E':	ita2.append("00001"); break;
				case 'F':	ita2.append("01101"); break;
				case 'G':	ita2.append("11010"); break;
				case 'H':	ita2.append("10100"); break;
				case 'I':	ita2.append("00110"); break;
				case 'J':	ita2.append("01011"); break;
				case 'K':	ita2.append("01111"); break;
				case 'L':	ita2.append("10010"); break;
				case 'M':	ita2.append("11100"); break;
				case 'N':	ita2.append("01100"); break;
				case 'O':	ita2.append("11000"); break;
				case 'P':	ita2.append("10110"); break;
				case 'Q':	ita2.append("10111"); break;
				case 'R':	ita2.append("01010"); break;
				case 'S':	ita2.append("00101"); break;
				case 'T':	ita2.append("10000"); break;
				case 'U':	ita2.append("00111"); break;
				case 'V':	ita2.append("11110"); break;
				case 'W':	ita2.append("10011"); break;
				case 'X':	ita2.append("11101"); break;
				case 'Y':	ita2.append("10101"); break;
				case 'Z':	ita2.append("10001"); break;
				default : break;
			}
		}

		cout << userInput << endl;

		cout << ita2 << endl;

		return ita2;
	}

	void baudotToAscii(string strEncrypted)
	{

		string eCharacter;
		/*switch()
			{
				case 00100:	eCharacter.append(" "); break;
				case 00011:	eCharacter.append("A"); break;
				case 11001:	eCharacter.append("B"); break;
				case 01110:	eCharacter.append("C"); break;
				case 01001:	eCharacter.append("D"); break;
				case 00001:	eCharacter.append("E"); break;
				case 01101:	eCharacter.append("F"); break;
				case 11010:	eCharacter.append("G"); break;
				case 10100:	eCharacter.append("H"); break;
				case 00110:	eCharacter.append("I"); break;
				case 01011:	eCharacter.append("J"); break;
				case 01111:	eCharacter.append("K"); break;
				case 10010:	eCharacter.append("L"); break;
				case 11100:	eCharacter.append("M"); break;
				case 01100:	eCharacter.append("N"); break;
				case 11000:	eCharacter.append("O"); break;
				case 10110:	eCharacter.append("P"); break;
				case 10111:	eCharacter.append("Q"); break;
				case 01010:	eCharacter.append("R"); break;
				case 00101:	eCharacter.append("S"); break;
				case 10000:	eCharacter.append("T"); break;
				case 00111:	eCharacter.append("U"); break;
				case 11110:	eCharacter.append("V"); break;
				case 10011:	eCharacter.append("W"); break;
				case 11101:	eCharacter.append("X"); break;
				case 10101:	eCharacter.append("Y"); break;
				case 10001:	eCharacter.append("Z"); break;
				default : break;
			}*/

		if(strEncrypted == "00100")
			eCharacter.append(" ");
		else if(strEncrypted == "00011")
			eCharacter.append("A");
		else if(strEncrypted == "11001")
			eCharacter.append("B");
		else if(strEncrypted == "01110")
			eCharacter.append("C");
		else if(strEncrypted == "01001")
			eCharacter.append("D");
		else if(strEncrypted == "00001")
			eCharacter.append("E");
		else if(strEncrypted == "01101")
			eCharacter.append("F");
		else if(strEncrypted == "11010")
			eCharacter.append("G");
		else if(strEncrypted == "10100")
			eCharacter.append("H");
		else if(strEncrypted == "00110")
			eCharacter.append("I");
		else if(strEncrypted == "01011")
			eCharacter.append("J");
		else if(strEncrypted == "01111")
			eCharacter.append("K");
		else if(strEncrypted == "10010")
			eCharacter.append("L");
		else if(strEncrypted == "11100")
			eCharacter.append("M");
		else if(strEncrypted == "01100")
			eCharacter.append("N");
		else if(strEncrypted == "11000")
			eCharacter.append("O");
		else if(strEncrypted == "10110")
			eCharacter.append("P");
		else if(strEncrypted == "10111")
			eCharacter.append("Q");
		else if(strEncrypted == "01010")
			eCharacter.append("R");
		else if(strEncrypted == "00101")
			eCharacter.append("S");
		else if(strEncrypted == "10000")
			eCharacter.append("T");
		else if(strEncrypted == "00111")
			eCharacter.append("U");
		else if(strEncrypted == "11110")
			eCharacter.append("V");
		else if(strEncrypted == "10011")
			eCharacter.append("W");
		else if(strEncrypted == "11101")
			eCharacter.append("X");
		else if(strEncrypted == "10101")
			eCharacter.append("Y");
		else if(strEncrypted == "10001")
			eCharacter.append("Z");

		cout << "Encrypted character: " << eCharacter << endl;

		return;
	}
private:
};

class LorenzWheel
{
public:
	// Constructor
	LorenzWheel()
	{
		pinPosition = 0;

		wheelPin = "0";
	}

	// Destructor
	~LorenzWheel()
	{
	
	}

	int getPinPosition() {return pinPosition;}
	void setPinPosition(int pinPosition) {pinPosition = pinPosition; return;}

	// Function to rotate Wheel
	void rotateWheel()
	{
	
	}

	string wheelPin;
	int pinPosition;
private:
};

class LorenzWheelCollection
{
public:
	// Five wheels for each collection
	LorenzWheel wheel1;
	LorenzWheel wheel2;
	LorenzWheel wheel3;
	LorenzWheel wheel4;
	LorenzWheel wheel5;

};

class LorenzMachine
{
public:
	void simulate(string ita2Message)
	{
		int key[5];
		char encrypted[50];
		string strEncrypted;

		for(int i = 0; i < 50; i++)
		{
			encrypted[i] = 0;
		}

		// Read pinSettings.dat into memory
		string pinSettings; 
		ifstream infile; 
		infile.open("pinsettings.dat"); 
		getline(infile,pinSettings); 
		infile.close();

		// Assign correct number of pins to each wheel
		psiWheels.wheel1.wheelPin = pinSettings.substr(0, 43);
		psiWheels.wheel2.wheelPin = pinSettings.substr(44, 90);
		psiWheels.wheel3.wheelPin = pinSettings.substr(91, 141);
		psiWheels.wheel4.wheelPin = pinSettings.substr(142, 194);
		psiWheels.wheel5.wheelPin = pinSettings.substr(195, 253);

		motorWheel37.wheel1.wheelPin = pinSettings.substr(254, 290);
		motorWheel61.wheel1.wheelPin = pinSettings.substr(291, 351);

		chiWheels.wheel1.wheelPin = pinSettings.substr(352, 392);
		chiWheels.wheel2.wheelPin = pinSettings.substr(393, 423);
		chiWheels.wheel3.wheelPin = pinSettings.substr(424, 452);
		chiWheels.wheel4.wheelPin = pinSettings.substr(453, 478);
		chiWheels.wheel5.wheelPin = pinSettings.substr(479, 501);

		// Test printing pins for each wheel
		cout << "TEST chiWheel pattern: ";
		cout << chiWheels.wheel1.wheelPin[chiWheels.wheel1.pinPosition];
		cout << chiWheels.wheel2.wheelPin[chiWheels.wheel1.pinPosition];
		cout << chiWheels.wheel3.wheelPin[chiWheels.wheel1.pinPosition];
		cout << chiWheels.wheel4.wheelPin[chiWheels.wheel1.pinPosition];
		cout << chiWheels.wheel5.wheelPin[chiWheels.wheel1.pinPosition] << endl;

		cout << endl;

		cout << motorWheel37.wheel1.wheelPin << endl;
		cout << motorWheel61.wheel1.wheelPin << endl;

		cout << endl;

		cout << "TEST psiWheel pattern: ";
		cout << psiWheels.wheel1.wheelPin[psiWheels.wheel1.pinPosition];
		cout << psiWheels.wheel2.wheelPin[psiWheels.wheel1.pinPosition];
		cout << psiWheels.wheel3.wheelPin[psiWheels.wheel1.pinPosition];
		cout << psiWheels.wheel4.wheelPin[psiWheels.wheel1.pinPosition];
		cout << psiWheels.wheel5.wheelPin[psiWheels.wheel1.pinPosition] << endl;

		cout << endl;

		// Generate Key
		key[0] = psiWheels.wheel1.wheelPin[psiWheels.wheel1.pinPosition] ^ chiWheels.wheel1.wheelPin[chiWheels.wheel1.pinPosition];
		key[1] = psiWheels.wheel2.wheelPin[psiWheels.wheel2.pinPosition] ^ chiWheels.wheel2.wheelPin[chiWheels.wheel2.pinPosition]; 
		key[2] = psiWheels.wheel3.wheelPin[psiWheels.wheel3.pinPosition] ^ chiWheels.wheel3.wheelPin[chiWheels.wheel3.pinPosition]; 
		key[3] = psiWheels.wheel4.wheelPin[psiWheels.wheel4.pinPosition] ^ chiWheels.wheel4.wheelPin[chiWheels.wheel4.pinPosition]; 
		key[4] = psiWheels.wheel5.wheelPin[psiWheels.wheel5.pinPosition] ^ chiWheels.wheel5.wheelPin[chiWheels.wheel5.pinPosition];

		cout << "TEST KEY" << endl;

		cout << key[0] << endl;
		cout << key[1] << endl;
		cout << key[2] << endl;
		cout << key[3] << endl;
		cout << key[4] << endl;

		cout << "TEST print ita2 Message passed into function: " << ita2Message << endl;
		// Get ITA2 for encrypted character
		for(int i = 0; i < 5; i++)
		{
			encrypted[i] = key[i] ^ ita2Message[i];
		}

		cout << "TEST Print Encrypted ita2: " << encrypted << endl;

		// Store encrypted in a string
		strEncrypted.append(encrypted);

		Baudot test;
			
		test.baudotToAscii(strEncrypted);

		return;
	}
private:
	// Collections of wheels
	LorenzWheelCollection chiWheels;
	LorenzWheelCollection psiWheels;
	LorenzWheelCollection motorWheel37;
	LorenzWheelCollection motorWheel61;
};

int main()
{
	char inputArray[256];

	string ita2Message;

	Baudot test;
	LorenzMachine LM_1;

	cout << "Please enter a message: ";
	cin.getline(inputArray, 256);
	cout << endl;
	cout << "Output message:" << inputArray;
	cout << endl;

	ita2Message = test.baudotConversion(inputArray);

	LM_1.simulate(ita2Message);

	cin.ignore(2);

	return 0;
}

