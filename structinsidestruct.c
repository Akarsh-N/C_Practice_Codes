#include <stdio.h>
#include <stdint.h>

typedef struct {
    struct {
        uint8_t ip[4];
        uint8_t subnet[4];
        uint8_t gateway[4];
    } ipv4_config;  // Nested structure for IPv4 settings
    
    struct {
        uint8_t ipv6_addr[16];
        uint8_t prefix_length;
    } ipv6_config;  // Nested structure for IPv6 settings
} network_config_t;

int main(void)
{
    network_config_t nw_config;
    nw_config.ipv4_config.ip[0] = 192;
    nw_config.ipv4_config.ip[1] = 168;
    nw_config.ipv4_config.ip[2] = 0;
    nw_config.ipv4_config.ip[3] = 1;

    nw_config.ipv4_config.subnet[0] = 255;
    nw_config.ipv4_config.subnet[1] = 255;
    nw_config.ipv4_config.subnet[2] = 255;
    nw_config.ipv4_config.subnet[3] = 255;

    nw_config.ipv4_config.gateway[0] = 192;
    nw_config.ipv4_config.gateway[1] = 168;
    nw_config.ipv4_config.gateway[2] = 0;
    nw_config.ipv4_config.gateway[3] = 10;

    nw_config.ipv6_config.ipv6_addr[0] = 192;
    nw_config.ipv6_config.ipv6_addr[1] = 168;
    nw_config.ipv6_config.ipv6_addr[2] = 0;
    nw_config.ipv6_config.ipv6_addr[3] = 2;
    nw_config.ipv6_config.ipv6_addr[4] = 192;
    nw_config.ipv6_config.ipv6_addr[5] = 168;
    nw_config.ipv6_config.ipv6_addr[6] = 0;
    nw_config.ipv6_config.ipv6_addr[7] = 2;
    nw_config.ipv6_config.ipv6_addr[8] = 192;
    nw_config.ipv6_config.ipv6_addr[9] = 168;
    nw_config.ipv6_config.ipv6_addr[10] = 0;
    nw_config.ipv6_config.ipv6_addr[11] = 2;
    nw_config.ipv6_config.ipv6_addr[12] = 192;
    nw_config.ipv6_config.ipv6_addr[13] = 168;
    nw_config.ipv6_config.ipv6_addr[14] = 0;
    nw_config.ipv6_config.ipv6_addr[15] = 2;

    nw_config.ipv6_config.prefix_length = 16;

    printf("IP address IPv4 is %d.%d.%d.%d\n",nw_config.ipv4_config.ip[0],nw_config.ipv4_config.ip[1],nw_config.ipv4_config.ip[2],nw_config.ipv4_config.ip[3]);

    return 0;
}