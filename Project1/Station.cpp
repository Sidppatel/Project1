#include "Station.h"

Station::Station(int message, int status) {
	_message = message;
	_carrierStatus = status;
}

int Station::getMessage() {
	return _message;
}

bool Station::getCarrierStatus() {
	return _carrierStatus;
}

int Station::getReceivedMessage() {
	return _receivedMessage;
}

void Station::setMessage(int message) {
	_message = message;
}

void Station::setCarrierStatus(bool status) {
	_carrierStatus = status;
}

void Station::setReceivedMessage(int message) {
	_receivedMessage = message;
}