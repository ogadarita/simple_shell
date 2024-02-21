#!/bin/bash

pidmax=$(cat /proc/sys/kernel/pid_max)
echo "Maximum process ID value: $pidmax"
