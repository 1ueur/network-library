#pragma once

#include <openssl/ssl.h>

struct Session {
	virtual int read(char* buf, int size) = 0;
	virtual int write(char* buf, int size) = 0;
    virtual int SSL_read(SSL *ssl, void *buf, int num) = 0;
    virtual int SSL_write(SSL *ssl, const void *buf, int num) = 0;
    virtual void SSL_free(SSL *ssl) = 0;
	virtual bool close() = 0;
};
