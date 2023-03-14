#!/usr/bin/env bash
sudo killall wsServer 
civetweb -document_root ./www -listening_ports 8000 &
./wsServer &
google-chrome-stable http://localhost:8000/index.html




