#pragma once
using namespace std;

class Station {
private:
	int _message;
	bool _carrierStatus;
	int _receivedMessage;
public:
	Station(int message, int carrierStatus);
	int getMessage();
	bool getCarrierStatus();
	int getReceivedMessage();
	void setMessage(int message);
	void setCarrierStatus(bool status);
	void setReceivedMessage(int receivedMessage);
};