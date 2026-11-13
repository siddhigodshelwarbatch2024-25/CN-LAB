Study of Basic Hardware Components and Concepts of Computer Networks with Network Topologies
1. Introduction
A computer network is a collection of two or more computers and other devices connected to each other to share data, information, hardware, and software resources.

Computer networks help users communicate, exchange files, access the internet, and share resources such as printers and storage devices.

2. Objectives
To understand the basic concepts of computer networks.
To study different hardware components used in networking.
To understand the working of networking devices.
To study different types of computer networks.
To understand various network topologies with diagrams.
To learn about network protocols and the OSI model.
3. Basic Hardware Components of a Network
3.1 Router
A router is a networking device that connects two or more different networks. It forwards data packets between networks using IP addresses.

Functions:

Connects different networks.
Forwards data packets.
Selects the appropriate path for data transmission.
Provides internet connectivity to local networks.
3.2 Switch
A switch connects multiple devices within a Local Area Network (LAN). It uses MAC addresses to forward data to the correct destination.

Functions:

Connects computers and other devices.
Reduces unnecessary network traffic.
Improves network efficiency.
Transfers data to the intended device.
3.3 Hub
A hub is a basic networking device used to connect multiple computers. It broadcasts incoming data to all connected ports.

Functions:

Connects multiple devices.
Sends incoming data to all ports.
Operates at the Physical Layer of the OSI model.
3.4 Bridge
A bridge connects two LAN segments and uses MAC addresses to filter network traffic.

Functions:

Connects LAN segments.
Filters data.
Reduces unnecessary network traffic.
3.5 Network Interface Card (NIC)
A Network Interface Card is a hardware component that allows a computer to connect to a network.

Functions:

Provides network connectivity.
Sends and receives data.
Has a MAC address for identification.
3.6 Modem
Modem stands for Modulator-Demodulator. It converts signals between forms suitable for transmission and reception.

Functions:

Helps establish internet connectivity.
Performs modulation and demodulation.
Connects a network to an Internet Service Provider (ISP).
3.7 Repeater
A repeater regenerates network signals to extend the communication distance.

Functions:

Regenerates weak signals.
Extends network coverage.
Helps overcome signal attenuation.
3.8 Wireless Access Point
A Wireless Access Point allows wireless devices such as smartphones and laptops to connect to a wired network through Wi-Fi.

Functions:

Provides wireless connectivity.
Connects wireless devices to a LAN.
Extends Wi-Fi coverage.
3.9 Transmission Media
Transmission media is the communication path through which data travels between devices.

Types:

Guided Media:

Twisted Pair Cable
Coaxial Cable
Optical Fibre Cable
Unguided Media:

Radio Waves
Microwaves
Infrared Waves
4. Basic Concepts of Computer Networks
4.1 Node
A node is any device connected to a network, such as a computer, printer, server, or smartphone.

4.2 Server
A server is a computer or system that provides services and resources to other devices.

4.3 Client
A client is a device that requests services or resources from a server.

4.4 IP Address
An IP address is a logical address assigned to a device on an IP network. It helps identify devices and enables communication.

Example: 192.168.1.10

Types:

IPv4
IPv6
4.5 MAC Address
A MAC address is a hardware address associated with a network interface. It is used for communication within a local network.

4.6 Network Protocol
A network protocol is a set of rules that controls communication between network devices.

Protocol	Purpose
HTTP	Transfers web pages
HTTPS	Secure web communication
FTP	File transfer
TCP	Reliable data transmission
IP	Addressing and routing
DNS	Converts domain names into IP addresses
DHCP	Automatically assigns IP addresses
SMTP	Sends email messages
4.7 Bandwidth
Bandwidth refers to the maximum data-carrying capacity of a network connection. It is measured in bps, Mbps, or Gbps.

4.8 Latency
Latency is the time taken by data to travel from the source to the destination.

4.9 Packet
A packet is a small unit of data transmitted over a computer network.

5. Types of Computer Networks
5.1 LAN (Local Area Network)
LAN connects computers and devices within a small geographical area, such as a home, school, office, or college laboratory.

Advantages:

High data transfer speed.
Easy resource sharing.
Low communication cost.
5.2 MAN (Metropolitan Area Network)
MAN connects multiple LANs across a city or a large geographical area.

Example: A network connecting different branches of an organization within a city.

5.3 WAN (Wide Area Network)
WAN connects computers and networks over large geographical areas, such as countries and continents.

Example: The Internet.

6. Network Topologies
Network topology refers to the physical or logical arrangement of computers, devices, and communication links in a network.

There are several types of network topologies.

6.1 Bus Topology
In bus topology, all devices are connected to a single main communication cable called the backbone. Data travels along this common cable.

Diagram:

       Computer 1     Computer 2     Computer 3
            |              |              |
============|==============|==============|============
                Main Backbone Cable
Advantages:

Easy to install.
Requires less cable.
Low installation cost.
Suitable for small networks.
Disadvantages:

Failure of the main cable affects the entire network.
Network performance decreases with increased traffic.
Troubleshooting can be difficult.
6.2 Star Topology
In star topology, all computers and devices are connected to a central device such as a switch or hub. All communication passes through the central device.

Diagram:

                 Computer 1
                     |
                     |
Computer 2 -------- Switch -------- Computer 3
                     |
                     |
                 Computer 4
Advantages:

Easy to install and manage.
Easy to detect faults.
Failure of one cable does not affect other devices.
Easy to add or remove devices.
Disadvantages:

Failure of the central switch affects the entire network.
Requires more cable than bus topology.
Installation cost can be higher.
6.3 Ring Topology
In ring topology, each computer is connected to two neighbouring computers, forming a circular arrangement. Data travels around the ring.

Diagram:

          Computer 1 -------- Computer 2
               |                   |
               |                   |
          Computer 4 -------- Computer 3
Advantages:

Organized data transmission.
Predictable access to the network.
Can avoid collisions in token-based implementations.
Disadvantages:

Failure of a link or device can disrupt a basic ring.
Adding or removing devices can be difficult.
Troubleshooting may be complex.
6.4 Mesh Topology
In mesh topology, devices are connected through multiple communication links. Each device may have a direct connection to several other devices.

Diagram:

        Computer 1 -------- Computer 2
             |\                /|
             | \              / |
             |  \            /  |
             |   \          /   |
             |    \        /    |
        Computer 3 -------- Computer 4
Advantages:

High reliability.
Multiple paths for data transmission.
Better fault tolerance.
Failure of one link may not stop communication.
Disadvantages:

Expensive to install.
Requires more cables and ports.
Complex configuration and maintenance.
6.5 Tree Topology
Tree topology is a hierarchical network structure that combines multiple star networks. Devices are arranged in parent-child relationships.

Diagram:

                  Main Switch
                 /           \
          Switch 1             Switch 2
          /    \               /    \
        PC1    PC2           PC3    PC4
Advantages:

Easy to expand.
Suitable for large networks.
Supports hierarchical management.
Disadvantages:

Failure of the main device can affect multiple network segments.
Requires more cabling.
Configuration can be complex.
6.6 Hybrid Topology
Hybrid topology is a combination of two or more different network topologies, such as star, bus, and ring.

Diagram:

          PC1       PC2                 PC5       PC6
            \       /                     \       /
             Switch 1 ------------------ Switch 2
                |                           |
               PC3                         PC7
Advantages:

Flexible network design.
Scalable for large organizations.
Can combine the benefits of different topologies.
Disadvantages:

Expensive to implement.
Complex design and maintenance.
Requires proper network planning.
7. Comparison of Network Topologies
Topology	Structure	Cost	Reliability
Bus	Single backbone cable	Low	Low
Star	Central device	Medium	Good
Ring	Circular connection	Medium	Depends on implementation
Mesh	Multiple connections	High	Very High
Tree	Hierarchical structure	High	Depends on backbone
Hybrid	Combination of topologies	High	Depends on design
8. Hub, Switch, and Router Comparison
Feature	Hub	Switch	Router
OSI Layer	Physical	Data Link	Network
Address Used	None	MAC Address	IP Address
Main Function	Broadcasts data	Connects LAN devices	Connects networks
Efficiency	Low	High	Depends on routing
Data Forwarding	All ports	Intended port	Appropriate network/interface
9. OSI Model
OSI stands for Open Systems Interconnection. It is a reference model that explains how data communication takes place between network devices.

The OSI model consists of seven layers.

Layer	Name	Function
7	Application	Provides network services to applications
6	Presentation	Handles data formatting and encryption
5	Session	Manages communication sessions
4	Transport	Provides end-to-end data delivery
3	Network	Handles IP addressing and routing
2	Data Link	Handles framing and MAC addressing
1	Physical	Transmits raw bits through the medium
10. Applications of Computer Networks
File and data sharing.
Email and instant messaging.
Online education.
Video conferencing.
Online banking.
Cloud computing.
Internet browsing.
Resource sharing.
11. Conclusion
Through this study, we understood the basic hardware components and fundamental concepts of computer networks. We studied networking devices such as routers, switches, hubs, modems, bridges, repeaters, and network interface cards.

We also learned about different types of computer networks, including LAN, MAN, and WAN. Additionally, we studied various network topologies such as Bus, Star, Ring, Mesh, Tree, and Hybrid topology with their diagrams, advantages, and disadvantages.

This study provides a foundation for understanding how computer networks are designed, connected, and used for communication and resource sharing.

12. References
Computer Networking: A Top-Down Approach by James F. Kurose and Keith W. Ross.
Computer Networks by Andrew S. Tanenbaum.
Cisco Networking Academy
GeeksforGeeks - Computer Networks
Cloudflare Learning Center
