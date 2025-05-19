#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
    private:
        USBConnection(int ID) {
            this->ID = ID;
        }
        static std::stack<int> ids;
        int ID;
    public:
        static USBConnection* CreateUsbConnection() {
            if (ids.empty() == 1) { 
                return nullptr;
            } else {
                USBConnection* ptr = new USBConnection(ids.top());
                ids.pop();
                return ptr;
            }
        }
        ~USBConnection() {
            ids.push(ID);
        }
        int get_id(){
            return ID;
        }
};

std::stack<int> USBConnection::ids({3, 2, 1}); 

#endif