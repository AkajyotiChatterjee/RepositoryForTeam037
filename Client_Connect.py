# Import socket module
import socket   
import time            

while(True):
    # Create a socket object
    s = socket.socket()
   # Define the port on which you want to connect
    s.connect(('192.168.43.193', 12352))    
    
    print "Enter the Command 1 up, 2 for down, 3 for left, 4 for right"
    inp=raw_input()
    
    print "You sent the command", inp 
    s.send(inp)
    s.close()       