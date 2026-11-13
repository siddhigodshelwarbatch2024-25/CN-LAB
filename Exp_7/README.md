Packet Analysis Using Cisco Packet Tracer
Aim
To study and analyze network packets using the Cisco Packet Tracer tool and understand how data travels from one device to another in a computer network.

Objectives
To understand the working of network communication.
To study packet transmission between network devices.
To analyze different protocols used in networking.
To understand the use of Simulation Mode in Cisco Packet Tracer.
To observe the movement of packets through the network.
Software Required
Cisco Packet Tracer
Computer or Laptop
Introduction
Cisco Packet Tracer is a network simulation tool used to design, configure, and troubleshoot computer networks. It allows users to create virtual networks and observe how data packets travel between different devices.

Packet analysis helps us understand how information is transmitted over a network and how different protocols work during communication.

Network Devices Used
PC (Personal Computer)
Switch
Router
Copper Straight-Through Cable
Theory
What is Packet Analysis?
Packet analysis is the process of observing and examining data packets transmitted over a network. It helps us understand the communication between devices and identify network-related problems.

What is a Packet?
A packet is a small unit of data transmitted over a network. It contains information such as:

Source IP Address
Destination IP Address
Protocol Information
Data Payload
What is Cisco Packet Tracer?
Cisco Packet Tracer is a network simulation software developed by Cisco. It provides two modes:

Realtime Mode: Shows network communication as it happens.
Simulation Mode: Allows users to observe packet movement step by step.
Procedure
Open Cisco Packet Tracer.
Add two PCs and one switch to the workspace.
Connect both PCs to the switch using Copper Straight-Through cables.
Assign IP addresses to both PCs.
Example:

Device	IP Address	Subnet Mask
PC0	192.168.1.1	255.255.255.0
PC1	192.168.1.2	255.255.255.0
Open PC0 and go to Desktop → Command Prompt.

Enter the command:

ping 192.168.1.2

Switch to Simulation Mode.

Observe the packets generated during communication.

Click Capture/Forward to move through the packet transmission step by step.

Click the packet envelope to inspect its details and protocol information.

Commands Used
1. Ping
Checks whether another device is reachable.

ping 192.168.1.2

2. ipconfig
Displays the IP configuration of a device.

ipconfig

3. arp -a
Displays the ARP table containing IP-to-MAC address mappings.

arp -a

Protocols Observed
ARP (Address Resolution Protocol): Finds the MAC address associated with an IP address on a local network.
ICMP (Internet Control Message Protocol): Used by ping to test network connectivity.
Ethernet: Handles communication over a wired local network.
Observation
During packet analysis, we can observe:

ARP packets may be generated to find the destination MAC address.
ICMP Echo Request packets are sent by the source device.
ICMP Echo Reply packets are returned by the destination device.
The packet details show source and destination addresses.
Simulation Mode displays the packet movement between devices.
Result
Packet analysis was successfully performed using Cisco Packet Tracer. The movement of packets and the working of ARP and ICMP protocols were studied using Simulation Mode.

Conclusion
Cisco Packet Tracer helps us understand network communication through visual simulation. Packet analysis provides information about how data travels between devices and how different networking protocols work.
