#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>
#include <string>
#include <vector>
#include "Owner.h"

using namespace std;

class Config
{
    public:
        Config(string id);
        virtual ~Config();
        Owner getOwner();
        void setOwner(Owner o);
        string getIP();
        void setIP(string str);
        int getPort();
        void setPort(int n);
        string getName();
        void setName(string str);
        vector<string> getFilterList();
        void setFilterList(vector<string> v);
        vector<string> getBanList();
        void setBanList(vector<string> v);
        vector<string> getModList();
        void setModList(vector<string> v);
        vector<string> getMemberList();
        void setMemberList(vector<string> v);

    private:
        string room_id;
        string name;
        string ip;
        int port;
        vector<string>filter_list;
        vector<string>ban_list;
        vector<string>mod_list;
        vector<string>member_list;
        Owner owner;
};

#endif // CONFIG_H