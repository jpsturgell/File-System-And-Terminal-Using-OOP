/*

Authors: Aaron Stein, Rain Chen, Irtaza Waseem
CSE332 Lab 5

This file declares the necessary functions for the rename command, which derives its interface from the
AbstractCommand class.


*/

#pragma once

#include "AbstractCommand.h"
class AbstractFileFactory;
class AbstractFileSystem;

class RemoveCommand : public AbstractCommand {

public:
	RemoveCommand(AbstractFileSystem* s);

	virtual int execute(std::string s) override;
	virtual void displayInfo() override;

private:
	AbstractFileSystem* system;

};

