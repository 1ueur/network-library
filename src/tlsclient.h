#pragma once

#include "tcpclient.h"
#include "tlssession.h"

struct TlsClient : public TcpClient, public TlsSession {
    int SSL_connect(SSL *ssl);
};
