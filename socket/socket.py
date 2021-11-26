import socket  #importing standard socket library 
# go to "godaddy.com" and read the reply :)
host = "google.com.eg"
port = 80

# Specifying internet family and TCP connection 
print("# Creating socket")
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Retrieves host information corresponding to a host name (specifys in host variable) from host database. 
print(f"Getting {host}\'s IP address") 
ip = socket.gethostbyname(host)

# Connect to host (passing a tuble made of ip and port) 
print(f"Connecting to {ip}")
s.connect((ip , port))

# Create http header/http request (plain text which is "request" variable) 
# Send data to host (http GET request)
print(f"Sending data to {ip}")
request = b"GET / HTTP/1.0\r\n\r\n"
s.send(request)

# Receive data (http response) through a loop till reply == 0
# I read 80**4 of data each time till reply/data is less than or equal to zero 

print(f"# Receive data from {host}\n")
while True:
    reply = s.recv(80**4)
    if(len(reply) <= 0):
        break
    print(reply)

# Leave no open connection behind.
s.close()
