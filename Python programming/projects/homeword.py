import sys

def ip_to_binary(ip):
    return '.'.join(format(int(x), '08b') for x in ip.split('.'))

def subnet_to_decimal(subnet):
    return sum(bin(int(x)).count('1') for x in subnet.split('.'))

def network_address(ip, subnet):
    return '.'.join(str(int(ip.split('.')[i]) & int(subnet.split('.')[i])) for i in range(4))

def broadcast_address(ip, subnet):
    return '.'.join(str(int(ip.split('.')[i]) | (255 - int(subnet.split('.')[i]))) for i in range(4))

def host_range(network):
    start = list(map(int, network.split('.')))
    start[-1] += 1
    end = start[:]
    end[-1] += 253
    return '.'.join(map(str, start)), '.'.join(map(str, end))


ip = input("Enter an IP address: ")
subnet = input("Enter a subnet mask: ")
print(f"IP address (binary): {ip_to_binary(ip)}")
print(f"Subnet mask (binary): {ip_to_binary(subnet)}")
print(f"Subnet mask (decimal): /{subnet_to_decimal(subnet)}")
network = network_address(ip, subnet)
print(f"Initial Network address: {network}")
host_bits = 32 - subnet_to_decimal(subnet)
print(f"Number of host bits: {host_bits}")
print(f"Number of hosts: {2**host_bits - 2}")
first_host, last_host = host_range(network)
print(f"First Host address: {first_host}")
print(f"Last Host Address: {last_host}")
print(f"Broadcast Address: {broadcast_address(ip, subnet)}")

