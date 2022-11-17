#include "tcpsession.h"

TcpSession::TcpSession(int sock) {
	sock_ = sock;
}

int TcpSession::read(char* buf, int size) {

    return ::read(sock_, buf, size);
}

int TcpSession::write(char* buf, int size) {

    return ::write(sock_, buf, size);
}

bool TcpSession::close() {
    int res = ::close(sock_);

    return res == 0;
}
