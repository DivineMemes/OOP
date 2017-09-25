#include <iostream>
#include "piggyBank.h"
#include "person.h"
#include "Television.h"
#include "server.h"


int main()
{
	/*
	Person human("memeBOY", 9001, "");
	human.print();

	Person gremlin("maldor", 10, "");
	gremlin.print();
	*/


	Television virtualBoi(10, 19);
	std::string blah = "";
	/*
	while (true) {
		std::cout << "type `cU` to increase channel type `vU` to increase volume\ntype `cD` to decrease channel type `vD` to decrease volume" << std::endl;
		std::cin >> blah;

		if (blah == "cU")
		{
			virtualBoi.increaseChannel(virtualBoi.channel);
		}

		if (blah == "cD")
		{
			virtualBoi.decreaseChannel(virtualBoi.channel);
		}

		if (blah == "vU")
		{
			virtualBoi.increaseVolume(virtualBoi.volume);
		}

		if (blah == "vD")
		{
			virtualBoi.decreaseVolume(virtualBoi.volume);
		}
	}
	*/

	/*
	Piggybank money;
	std::cout << money.balance() << std::endl;
	std::cout << money.withdraw() << std::endl;
	std::cout << money.balance() << std::endl;
	*/

	ServerInfo server01;
	server01.serverName = "memelords";
	server01.Region = "NA";
	server01.maxPlayercount = 16;
	server01.maxPlayercount = 2;
	server01.ping = 10;

	ServerBrowserService serverSearch;
	serverSearch.registerServer(server01);
	ServerInfo arr[20];
	serverSearch.getServers(arr, 5);



	while(true){}
}