#pragma once
#include <iostream>
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING
#include <experimental/filesystem>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

namespace coredata
{
	void LoadItem(int clothingType, string name, int itemID, int breakhits, int actionType);
	void items_dat();
}
