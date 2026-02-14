import socket

def start_server():
    print("SERVER -----------------------------")
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    host = "127.0.0.1"
    port = 12345

    server_socket.bind((host, port))
    server_socket.listen(5)
    print("Server listening on ", str(host) + ':' + str(port))

    while True:
        client_socket, client_address = server_socket.accept()
        print("Connection established with", client_address)

        try:
            message = client_socket.recv(1024).decode()
        except ConnectionRefusedError:
            print("Error: Connection Refused")
            return
        except ConnectionResetError:
            print("Error: Connection Reset")
            return
        finally:
            print("Received from client:", message)

        response = "Custom Message: Hello Client!"
        client_socket.send(response.encode())

        client_socket.close()

start_server()
"""
commented out because of how im running this.
if __name__ == "__main__":
    start_server()
"""

