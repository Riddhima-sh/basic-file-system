#pragma once
#include <string>
#include <vector>
#include "Permissions.hpp"

class Node
{
protected:
    std::string name;                    // name of file/folder
    std::vector<Permission> permissions; // permissions of file/folder
public:
    // constructor
    Node(std::string name, std::vector<Permission> permissions)
    {
        this->name = name;
        this->permissions = permissions; // it is used to set up data and process when we create an object to assign the created objects of the rules to follow
    }

    // getter for name
    std::string get_file_name() const
    {
        return name; // to get the file name we created or are getting
    }

    // virtual destuctor for node
    virtual ~Node() = default; // after the process of constructor is done, we have changed te permissions or did whatever we want to, we simply delete it, the virtual function is used to make sure none of the child classes/objets are left behind

    // to make node abstract
    virtual void print() const = 0; // It is used to create a rule, but each func can follow any different rule, but they must follow a rule-> this can relate to polymorphism.
};
