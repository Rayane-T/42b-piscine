#!/bin/sh
ifconfig | awk '/ether/{print $2}'
