#pragma once

#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include "session.h"

struct TcpSession : public Session {
	int sock_;

	TcpSession(int sock = 0);

	int read(char* buf, int size) override;
	int write(char* buf, int size) override;
	bool close() override;
};
