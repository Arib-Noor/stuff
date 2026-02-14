import networking.Arib_Noor_client as Arib_Noor_client
import networking.Arib_Noor_server as Arib_Noor_server


if __name__ == "__main__":
    main()

def main():
    Arib_Noor_server.start_server()
    Arib_Noor_client.start_client()
