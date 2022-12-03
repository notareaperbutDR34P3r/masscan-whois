#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    // Set the starting and ending IP addresses
    const std::string start_ip = "1.2.3.4";
    const std::string end_ip = "1.2.3.10";

    // Convert the starting and ending IP addresses to integers
    unsigned long start = inet_addr(start_ip.c_str());
    unsigned long end = inet_addr(end_ip.c_str());

    // Loop through the IP addresses
    for (unsigned long i = start; i <= end; i++) {
        // Convert the IP address to a string
        std::string ip = inet_ntoa(*(in_addr*)&i);

        // Use the whois command to query the IP address
        std::string cmd = "whois " + ip;
        system(cmd.c_str());
    }

    return 0;
}