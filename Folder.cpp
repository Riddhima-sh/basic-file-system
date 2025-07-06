#include "Folder.hpp"

Folder::Folder(std::string name, std::vector<Permission> permissions) : Node(name, permissions)
{
}
void Folder::print() const
{
    std::cout << "folder:" << name << std::endl;
    for (auto child : children)
    {
        child->print();
    }
}

void Folder::addChild(Node *child)
{
    children.push_back(child);
}

void Folder::removeChild(std::string name)
{
    // Find the child with the given name and remove it
    for (auto it = children.begin(); it != children.end(); it++)
    {
        if ((*it)->get_file_name() == name)
        {
            delete *it;         // delete the child node to free memory
            children.erase(it); // remove from vector
            return;             // exit after removing
        }
    }
}
Folder::~Folder()
{
    for (Node *child : children)
    {
        delete child;
    }
    children.clear(); // clear the vector to avoid dangling pointers
}
