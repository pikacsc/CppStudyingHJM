/*
HongJeongMo C++

Chapter B_9 Multiple Inheritance

it can be useful
however, becareful the Diamond Problem
      A
    ¢Ö  ¢Ø
  B1      B2
    ¢Ø  ¢Ö
      C
*/

#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id) : m_id(id){}

	long getID() { return m_id; }

	void plugAndPlay() {}
};

class NetWorkDevice
{
private:
	long m_id;

public:
	NetWorkDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void networking() {}
};


class USBNetWorkDevice : public USBDevice, public NetWorkDevice //Multiple Inheritance
{
public:
	USBNetWorkDevice(long usb_id, long net_id) 
		: USBDevice(usb_id), NetWorkDevice(net_id) //in Multiple Inheritance, you need to pass argument both USBDevice and NetWorkDevice
	{}
};

int main()
{
	USBNetWorkDevice my_device(3, 6);
	my_device.networking();
	my_device.plugAndPlay();

//	my_device.getID() // X , error C2385 : ambiguous access of 'getID'
	cout << my_device.USBDevice::getID() << endl;  //derivedclass.OneOftheBaseClass::function()
	cout << my_device.NetWorkDevice::getID() << endl; 

	return 0;
}