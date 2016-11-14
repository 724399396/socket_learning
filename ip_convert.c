#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(void) {
    //IPv4:
    struct sockaddr_in sa;
    char ip4[INET_ADDRSTRLEN];
    inet_pton(AF_INET, "127.0.0.1", &(sa.sin_addr));
    inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);
    printf("The IPv4 address is: %s\n", ip4);

    //IPv6
    struct sockaddr_in6 sa6;
    char ip6[INET6_ADDRSTRLEN];
    inet_pton(AF_INET6, "::1", &(sa6.sin6_addr));
    inet_ntop(AF_INET6, &(sa6.sin6_addr), ip6, INET6_ADDRSTRLEN);
    printf("The IPv6 address is: %s\n", ip6);
    return 0;
}
