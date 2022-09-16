#pragma once
#include<iostream>
#include"windows.h"
#include<string>
#include<vector>
#include"Item.h"
#include"Player.h"
#include"NPC.h"

void Title();
void PlaysoundIntro();
bool Intro();
void Continue();
bool ChoseClass();
void Playsound1();
void Playsound2();
char ChoseDirection(std::string PlayerName);
void CreateAlchemistMasterNPC(NPC* AlchemistMaster);
void Failed();
void Continue();

