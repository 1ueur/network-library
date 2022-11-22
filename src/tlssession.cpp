#include "tlssession.h"

TlsSession::TlsSession(int sock) {
    sock_ = sock;
}

int TlsSession::SSL_read(SSL *ssl, void *buf, int num) {
    //
    return ::SSL_read(ssl, buf, num);
}

int TlsSession::SSL_write(SSL *ssl, const void *buf, int num) {
    //
    return ::SSL_write(ssl, buf, num);
}

void TlsSession::SSL_free(SSL *ssl) {

    return ::SSL_free(ssl);
}

bool TlsSession::close() {
    int res = ::close(sock_);

    return res == 0;
}
