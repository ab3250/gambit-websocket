#!/usr/bin/env bash
civetweb  -listening_ports 8000 &
./wsServer
google-chrome-stable http://localhost:8000/www/index.html




