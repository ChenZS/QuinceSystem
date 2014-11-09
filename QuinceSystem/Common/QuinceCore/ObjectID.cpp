#include "stdafx.h"
#include "ObjectID.h"

unsigned int ObjectID::sNextValue = 1;

ObjectID::ObjectID()
: mValue(sNextValue++)
{
}

ObjectID::ObjectID(ObjectID&& other)
: mValue(std::move(other.mValue))
{
}