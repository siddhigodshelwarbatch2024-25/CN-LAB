Experiment 3: Analysis of Application Layer and DNS Commands
1. Aim
To study and analyze the Application Layer of the TCP/IP model and understand the working of DNS (Domain Name System) using different DNS commands.

2. Objectives
To understand the Application Layer of computer networks.
To study different application layer protocols.
To understand the working of DNS.
To execute different DNS commands in Linux.
To analyze domain name resolution and retrieve DNS information.
3. Theory
3.1 Application Layer
The Application Layer is the topmost layer of the TCP/IP model. It provides network services directly to user applications and allows users to communicate over a network.

It acts as an interface between network services and application programs.

Functions of the Application Layer:

Provides services to user applications.
Supports file transfer.
Supports email communication.
Provides web browsing services.
Performs domain name resolution.
Supports remote login and network management.
3.2 Application Layer Protocols
Protocol	Full Form	Purpose
HTTP	Hypertext Transfer Protocol	Transfers web pages
HTTPS	Hypertext Transfer Protocol Secure	Secure web communication
FTP	File Transfer Protocol	Transfers files
SMTP	Simple Mail Transfer Protocol	Sends emails
POP3	Post Office Protocol Version 3	Retrieves emails
IMAP	Internet Message Access Protocol	Accesses and manages emails
DNS	Domain Name System	Converts domain names into IP addresses
DHCP	Dynamic Host Configuration Protocol	Automatically assigns IP addresses
Telnet	Teletype Network	Provides remote terminal access
SSH	Secure Shell	Provides secure remote access
4. What is DNS?
DNS stands for Domain Name System.

DNS is a naming system that translates human-readable domain names into IP addresses. Computers use IP addresses to communicate with each other, while users generally remember website names.

Example:

www.google.com → IP Address
When a user enters a website name in a browser, the DNS system helps find the corresponding IP address.

4.1 Working of DNS
The user enters a domain name in the browser.
The computer checks its local DNS cache.
If the address is not available, it sends a DNS query to a DNS resolver.
The resolver finds the required DNS information.
The IP address is returned to the computer.
The browser uses the IP address to connect to the website.
4.2 Types of DNS Records
DNS Record	Description
A	Maps a domain name to an IPv4 address
AAAA	Maps a domain name to an IPv6 address
CNAME	Creates an alias for another domain name
MX	Specifies mail servers for a domain
NS	Identifies authoritative name servers
TXT	Stores text information, often used for verification
PTR	Maps an IP address to a domain name
5. DNS Commands in Linux
DNS commands are used to retrieve information about domain names, IP addresses, DNS servers, and DNS records.

5.1 nslookup Command
The nslookup command is used to find the IP address associated with a domain name and retrieve DNS information.

Syntax:

nslookup domain_name
Example:

nslookup google.com
Sample Output:

Server:         127.0.0.53
Address:        127.0.0.53#53

Non-authoritative answer:
Name:   google.com
Address: 142.250.x.x
Note: Actual DNS server and IP address values may vary.

5.2 dig Command
The dig command stands for Domain Information Groper. It is used to retrieve detailed DNS information about a domain.

Syntax:

dig domain_name
Example:

dig google.com
To retrieve only the IP address:

dig google.com +short
To retrieve MX records:

dig google.com MX
5.3 host Command
The host command is used to perform DNS lookups and find IP addresses associated with domain names.

Example:

host google.com
Sample Output:

google.com has address 142.250.x.x
google.com has IPv6 address ...
5.4 ping Command
The ping command checks network connectivity between the local computer and another host.

Example:

ping google.com
To send only four packets:

ping -c 4 google.com
Functions:

Checks network connectivity.
Measures response time.
Helps identify network problems.
5.5 traceroute Command
The traceroute command displays the path taken by packets from the source computer to the destination.

Example:

traceroute google.com
If traceroute is not installed:

sudo apt install traceroute
5.6 hostname Command
The hostname command displays the hostname of the local computer.

Example:

hostname
5.7 ipconfig / ifconfig Command
The ifconfig command displays network interface information on Linux systems where the utility is installed.

Example:

ifconfig
An alternative modern command is:

ip addr
6. Practical Implementation
Perform the following steps in Ubuntu/Linux terminal.

Step 1: Open Terminal
Open the Ubuntu terminal.

Step 2: Check DNS resolution
nslookup google.com
Step 3: Retrieve DNS information
dig google.com
Step 4: Display only the IP address
dig google.com +short
Step 5: Check domain information
host google.com
Step 6: Check network connectivity
ping -c 4 google.com
Step 7: Trace the network route
traceroute google.com
Step 8: Display network configuration
ip addr
7. Difference Between nslookup, dig, and host
Command	Purpose
nslookup	Performs DNS queries
dig	Provides detailed DNS information
host	Performs simple DNS lookups
8. Applications of DNS
Website name resolution.
Email routing.
Domain name management.
Network service discovery.
Mapping domain names to IP addresses.
Supporting internet communication.
9. Conclusion
In this experiment, we studied the Application Layer of the TCP/IP model and understood its functions and protocols. We learned about DNS and how it converts human-readable domain names into IP addresses.

We also executed different Linux commands such as nslookup, dig, host, ping, and traceroute to retrieve DNS information and analyze network connectivity.

10. References
Cisco Networking Academy
Linux Manual – nslookup
DNS Documentation – Cloudflare
Linux Manual – dig
GeeksforGeeks – DNS
