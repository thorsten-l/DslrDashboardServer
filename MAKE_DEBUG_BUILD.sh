#!/bin/sh

g++ -DLOG_TO_CONSOLE src/main.cpp src/communicator.cpp `pkg-config --libs --cflags libusb-1.0` -lpthread -lrt -lstdc++ -o ddserver
