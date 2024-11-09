#!/bin/bash
ifconfig | grep -w ether | cut -b 7-24 |tr -d ' '
