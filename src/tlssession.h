#pragma once

#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include "session.h"

struct TlsSession : public Session {
    int sock_;

    TlsSession(int sock = 0);

    int SSL_read(SSL *ssl, void *buf, int num);
    int SSL_write(SSL *ssl, const void *buf, int num);
    void SSL_free(SSL *ssl);
    bool close() override;
};
