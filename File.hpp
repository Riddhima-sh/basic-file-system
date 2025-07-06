#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Permissions.hpp"
#include "Node.hpp"

class File : public Node
{
private:
    std::string content; // content of file to be fed

public:
    File(std::string name, std::vector<Permission> permissions, std::string content) : Node(name, permissions)
    {
        this->content = content; // constructor to initialize the file with name, permissions and content
    }
    void print() const override;
};
