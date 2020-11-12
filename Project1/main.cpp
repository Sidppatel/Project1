#include <iostream>

#include <time.h>

#include <stdlib.h>

#include <windows.h>

#include "Station.h"

using namespace std;

bool randomBool() {
    return rand() % 2 == 1;
}

int main()

{
    system("cls");

    Station* s1, * s2, * s3;

    float r1, r2, r3, r4, r5;

    bool carrierStatus;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            carrierStatus = randomBool();

            r1 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

            s1 = new Station(r1, carrierStatus);

            carrierStatus = randomBool();

            r1 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

            s2 = new Station(r1, carrierStatus);

            carrierStatus = randomBool();

            r1 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

            s3 = new Station(r1, carrierStatus);

            cout << "Sending message form s1 to s2" << endl <<
                endl;
            if (s1->getCarrierStatus() && s2->getCarrierStatus()) {
                cout << "Collision occur! Transmiss stop!" << endl <<
                    endl;

                r4 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r4);
            }
            else if (s1->getCarrierStatus() == false && s2->getCarrierStatus() == false) {
                r2 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                s2->setMessage(r2);

                cout << "Data has been transmited successfully!" << endl <<
                    endl;
            }
            else {
                cout << "s1 or s2 is looking busy!" << endl <<
                    endl;

                r3 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r3);
            }

            cout << "Sending message form s2 to s3" << endl <<
                endl;

            if (s2->getCarrierStatus() && s3->getCarrierStatus()) {
                cout << "Collision occur! Transmiss stop!" << endl <<
                    endl;

                r4 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r4);
            }
            else if (s2->getCarrierStatus() == false && s3->getCarrierStatus() == false) {
                r2 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                s3->setMessage(r2);

                cout << "Data has been transmited successfully!" << endl <<
                    endl;
            }
            else {
                cout << "s2 or s3 is looking busy!" << endl <<
                    endl;

                r3 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r3);
            }

            cout << "Sending message form s3 to s1" << endl <<
                endl;

            if (s3->getCarrierStatus() && s1->getCarrierStatus()) {
                cout << "Collision occur! Transmiss stop!" << endl <<
                    endl;

                r4 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r4);
            }
            else if (s3->getCarrierStatus() == false && s1->getCarrierStatus() == false) {
                r2 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                s1->setMessage(r2);

                cout << "Data has been transmited successfully!" << endl <<
                    endl;
            }
            else {
                cout << "s3 or s1 is looking busy!" << endl <<
                    endl;

                r3 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r3);
            }

            cout << "Sending message form s3 to s2" << endl <<
                endl;

            if (s3->getCarrierStatus() && s2->getCarrierStatus()) {
                cout << "Collision occur! Transmiss stop!" << endl <<
                    endl;

                r4 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r4);
            }
            else if (s3->getCarrierStatus() == false && s2->getCarrierStatus() == false) {
                r2 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                s2->setMessage(r2);

                cout << "Data has been transmited successfully!" << endl <<
                    endl;
            }
            else {
                cout << "s3 or s2 is looking busy!" << endl <<
                    endl;

                r3 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

                Sleep(r3);
            }
        }
    }

    system("PAUSE");

    return 0;
}