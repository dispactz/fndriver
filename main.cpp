#include "util.hpp"
#include "monkey.h"

Overlay::DXOverlay* pOverlay = nullptr; // if undefined then put // before "Overlay::DXOverlay* pOverlay = nullptr;".
HWND game_wndw; ﻿// if undefined then put // before "HWND game_wndw;".
int main() {
	SetConsoleTitleA("dispactz impcted [FREE VERSION]");
	system("color 5");
	SetConsoleTitleA("dispactz impcted [FREE VERSION]");
	printf("\n dispactz impcted [FREE VERSION]");
	Sleep(3000);
	system("cls");
	std::cout << ("\n dispactz impcted [FREE VERSION] Loading...");
	std::cout << ("\n dispactz impcted [FREE VERSION] Open Fortnite. \n");
	system("cls");
	Sleep(1000);
	s(); // if undefined then put // before "s();".
	system("cls");
	if (!driver.init())
	{
		Sleep(3500);
		exit(0);
	}
	process_id = _GetProcessId(("FortniteClient-Win64-Shipping.exe"));
	driver.attach(process_id);
	virtualaddy = driver.get_process_base(process_id);
	std::cout << " dispactz impcted [FREE VERSION] Base > " << virtualaddy << "\n";
	system(("cls"));

	printf("\n dispactz impcted [FREE VERSION] Closing this Window will Unload the Cheat. ");
	std::cout << "\n dispactz impcted [FREE VERSION] Base > " << virtualaddy << "\n";
	std::cout << " dispactz impcted [FREE VERSION] Made by dispact" << "\n";

	game_wndw = FindWindow(0, ("Fortnite  "));
	while (!game_wndw) {
		game_wndw = FindWindow(0, ("Fortnite  "));
		Sleep(400);
	}

	Overlay::DXOverlay::GetWindow(FindWindow(0, ("Fortnite  ")));
	auto InitOverlay = pOverlay->InitOverlay();
  
	ShowWindow(::GetConsoleWindow(), SW_HIDE);

	std::thread t(cache_players);
	t.detach();

	Sleep(1000);

	Sleep(3000);

	//ShowWindow(::GetConsoleWindow(), SW_HIDE);
	switch (InitOverlay)
	{
	case 0: { break; }
	case 1:
	{
		//MouseController::Init();
		while (pOverlay->MainLoop(actor_loop)) {
		}
		break;
	}
	}

}
