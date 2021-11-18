import socket
# go to "godaddy.com and read the reply"
host = "google.com.eg"
port = 80

# create socket
print("# Creating socket")

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

print(f"Getting {host}\'s IP address") 
ip = socket.gethostbyname(host)

# Connect to host
print(f"Connecting to {ip}")
s.connect((ip , port))

# Send data to host (http GET request)
print(f"Sending data to {ip}")
request = b"GET / HTTP/1.0\r\n\r\n"

s.send(request)

# Receive data through a loop till reply == 0
print(f"# Receive data from {host}\n")

while True:
    reply = s.recv(80**4)
    if(len(reply) <= 0):
        break
    print(reply)

# Leave no open connections when we done.
s.close()
