#include "server.h"

ServerBrowserService::ServerBrowserService()
{
	serverCounter = 0;
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	if (serverCounter < SERVERINFO_CAPACITY)
	{
	servers[serverCounter] = newServer;
	serverCounter++;
	return true;
	}
	else
	{
		return false;
	}
}

int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize) const
{
	int size = 0;
	for (int i = 0; i < SERVERINFO_CAPACITY; i++)
	{
		dstArray[i] = servers[i];
		size++;
	}
	return size;
}
