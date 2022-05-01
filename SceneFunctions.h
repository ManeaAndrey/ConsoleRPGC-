#pragma once
#include<iostream>
#include"windows.h"
#include<string>
#include<vector>
#include"Item.h"

void Title();
void PlaysoundIntro();
bool Intro();
void Continue();
bool ChoseClass();
void Playsound1();
void Playsound2();
int ChoseDirection(std::string PlayerName);
std::vector<Item*> CreatePriestInventory();
std::vector<Item*> CreateAlchemistInventory();
void ShowInventory(std::vector<Item*>Inventar);

