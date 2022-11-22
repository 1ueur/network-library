#include "tlsclient.h"

bool TcpClient::connect(std::string host, int port) {
    sock_ = ::socket(AF_INET, SOCK_STREAM, 0);

    if(sock_ == -1) {
        error_ = strerror(errno);

        return false;
    }

    struct sockaddr_in addr;

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(host.data());
    addr.sin_port = htons(port);

    int res = ::connect(sock_, (struct sockaddr*)&addr, sizeof(addr));
    if (res == 0)
        return true;

    error_ = strerror(errno);
}

int TlsClient::SSL_connect(SSL *ssl) {
    SSL_CTX *ctx;
    int server;

    ssl = SSL_new(ctx);
    SSL_set_fd(ssl, server);
    SSL_connect(ssl);
}
