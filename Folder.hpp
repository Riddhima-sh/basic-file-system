#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Permissions.hpp"
#include "Node.hpp"
#include "File.hpp"

class Folder : public Node
{
private:
    std::vector<Node *> children;

public:
    Folder(std::string name, std::vector<Permission> permissions);

    void print() const override;
    void addChild(Node *child);
    void removeChild(std::string name);
    ~Folder();
};