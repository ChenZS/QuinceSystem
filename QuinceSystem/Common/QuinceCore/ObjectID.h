#pragma once

class QUINCECORE_DLLAPI ObjectID
{
public:
	ObjectID();

	ObjectID(ObjectID &&other);
	explicit ObjectID(unsigned int v) : mValue(v) {}

	void setValue(unsigned int v) {
		mValue = v;
	}

	unsigned int value() const {
		return mValue;
	}

	operator unsigned int() const {
		return mValue;
	}

	bool operator == (const ObjectID &other) const {
		return mValue == other.mValue;
	}

	bool operator != (const ObjectID &other) const {
		return !(*this == other);
	}

	bool operator < (const ObjectID &other) const {
		return mValue < other.mValue;
	}
private:
	unsigned int mValue;
	static unsigned int sNextValue;
};

