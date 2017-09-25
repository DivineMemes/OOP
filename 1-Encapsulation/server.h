#pragma once

#include <string>

struct ServerInfo
{
	std::string serverName;
	std::string Region;
	int currentPlayerCount;
	int maxPlayercount;
	int ping;
};



class ServerBrowserService
{
private:
	const static int SERVERINFO_CAPACITY = 20;
	ServerInfo servers[SERVERINFO_CAPACITY];
	int serverCounter;

public:
	ServerBrowserService();

	bool registerServer(ServerInfo newserver);
	int getServers(ServerInfo * dstArray, size_t dstSize) const;
};