import socket

def start_client():
    print("CLIENT -----------------------------")
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    host = '127.0.0.1' # Server address
    port = 12345

    try:
        client_socket.connect((host, port))
    except socket.timeout:
        print("Error: Timed out")
        return
    except ConnectionRefusedError:
        print("Error: Connection Refused")
        return
    except ConnectionResetError:
        print("Error: Connection Reset")
        return

    message = "Hello Server!"
    try:
        client_socket.send(message.encode())
    except socket.timeout:
        print("Error: Timed out")
        return
    except ConnectionRefusedError:
        print("Error: Connection Refused")
        return
    except ConnectionResetError:
        print("Error: Connection Reset")
        return

    response = client_socket.recv(1024).decode()
    print("Server responded:", str(response))

    client_socket.close()

start_client()
"""
commented out because how im running this.
if __name__ == "__main__":
    start_client()
"""
